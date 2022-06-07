#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <android/log.h>
#include "ccosutils.h"

const std::vector<ccos::vehicle::general::HBodyEventType> MainWindow::subscribedEvents =
{
    ccos::vehicle::general::HBodyEventType::DOOR_OPEN
};

MainWindow::MainWindow(AppView *appView, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->appView = appView;
    setGeometry(0, 0, 799, 419);
    setWindowFlags(Qt::WindowType::Window);
    vehicleBody = ccos::vehicle::general::HBody::getInstance();// This may need to be deleted. It might not be a singleton. Further research is needed.
    vehicleBody->subscribeEvents(MainWindow::subscribedEvents);
    vehicleBody->setEventListener(this);
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow constructor was called");
}

MainWindow::~MainWindow()
{
    vehicleBody->unsubscribeEvents(MainWindow::subscribedEvents);
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_exitButton_clicked was called");
    appView->finish();
}

void MainWindow::on_lockButton_clicked()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_lockButton_clicked was called");

    ccos::HResult result = vehicleBody->requestDoorLock(true);
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_lockButton_clicked results: %s", result == ccos::HResult::OK ? "Ok" : "Failed");
}


void MainWindow::on_unlockButton_clicked()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_unlockButton_clicked was called");

    ccos::HResult result = vehicleBody->requestDoorLock(false);
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_unlockButton_clicked results: %s", result == ccos::HResult::OK ? "Ok" : "Failed");
}


void MainWindow::on_testButton_clicked()
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::on_testButton_clicked was called");
}


void MainWindow::onDoorOpenChanged(const ccos::vehicle::HDoorPosition &door, const ccos::vehicle::HTriState &open)
{
    __android_log_print(ANDROID_LOG_DEBUG, "DAudio2GuiExample", "MainWindow::onDoorOpenChanged was called");
    QString doorStatusText = QString("(%1) - Status: %2").arg(ccOSUtils::HDoorPositionToString(door), open == ccos::vehicle::HTriState::TRUE ? "Open": "Closed");
    ui->doorStatusLabel->setText(doorStatusText);
}

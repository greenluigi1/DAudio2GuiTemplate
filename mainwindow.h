#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <helix/app/AppView.h>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <HBody.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public ccos::vehicle::general::IHBodyListener
{
    Q_OBJECT

public:
    MainWindow(AppView *appView, QWidget *parent = nullptr);
    ~MainWindow();
    void onDoorOpenChanged(const ccos::vehicle::HDoorPosition &door, const ccos::vehicle::HTriState &open) override;

private slots:
    void on_exitButton_clicked();

    void on_lockButton_clicked();

    void on_unlockButton_clicked();

    void on_testButton_clicked();

private:
    Ui::MainWindow *ui;
    AppView *appView;
    ccos::vehicle::general::HBody *vehicleBody;
    static const std::vector<ccos::vehicle::general::HBodyEventType> subscribedEvents;
};

#endif // MAINWINDOW_H

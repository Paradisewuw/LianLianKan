#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// UI/MainWindow.h
#pragma once
#include <QMainWindow>
#include "../Core/GameController.h" // 包含控制器

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 连接UI控件的槽函数
    void on_startButton_clicked();

    // 连接GameController信号的槽函数
    void updateBoardView(const GameBoard& board);
    void handleGameWon();

signals:
    // 发送给GameController的信号
    void tileClicked(int x, int y);

private:
    Ui::MainWindow *ui;
    GameController *m_gameController;
};
#endif // MAINWINDOW_H

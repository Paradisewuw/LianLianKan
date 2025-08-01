// UI/MainWindow.cpp
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "../Core/GameController.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_gameController = new GameController(this);

    // 关键：连接UI层和逻辑层的信号与槽
    // 1. UI -> Logic
    connect(this, &MainWindow::tileClicked, m_gameController, &GameController::onTileClicked);
    // 2. Logic -> UI
    connect(m_gameController, &GameController::boardChanged, this, &MainWindow::updateBoardView);
    connect(m_gameController, &GameController::gameWon, this, &MainWindow::handleGameWon);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    // This function is called when you click the start button in the UI.
    // We will add game logic here later.
}

void MainWindow::updateBoardView(const GameBoard &board)
{
    // This function will be called by the game logic to update the graphics.
    // We will add drawing code here later.
    Q_UNUSED(board); // Use this to tell the compiler "I know this variable isn't used yet"
}

void MainWindow::handleGameWon()
{
    // This function is called when the game logic determines the player has won.
    // We will add a victory message here later.
}

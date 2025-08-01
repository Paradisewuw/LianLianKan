#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H


// Core/GameController.h
#pragma once
#include <QObject>
#include "GameBoard.h"
#include "GameDefines.h"

// 游戏的“大脑”，连接UI和核心逻辑，但不包含任何UI代码
class GameController : public QObject {
    Q_OBJECT

public:
    explicit GameController(QObject *parent = nullptr);
    void startGame();

public slots:
    void onTileClicked(int x, int y); // 接收来自UI的点击信号

signals:
    void boardChanged(const GameBoard& board); // 通知UI更新棋盘
    void gameWon();
    void gameLost();
    void tilesEliminated(const Point& p1, const Point& p2); // 通知UI消除动画

private:
    GameBoard m_board;
    GameState m_state;
    // ... 可能还需要存储第一个被选中的点等状态
};

#endif // GAMECONTROLLER_H

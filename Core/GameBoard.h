#ifndef GAMEBOARD_H
#define GAMEBOARD_H


// Core/GameBoard.h
#pragma once
#include <vector>
#include "GameDefines.h"

// 负责管理游戏地图数据
class GameBoard {
public:
    GameBoard();
    void initialize(int width, int height); // 初始化并随机生成地图
    int getTile(int x, int y) const;        // 获取指定位置的图案ID
    void removeTile(int x, int y);        // 移除指定位置的图案
    bool isBoardEmpty() const;              // 检查棋盘是否为空

private:
    std::vector<std::vector<int>> m_grid;
};


#endif // GAMEBOARD_H

#ifndef PATHFINDER_H
#define PATHFINDER_H
// Core/PathFinder.h
#pragma once
#include "GameBoard.h"
#include "GameDefines.h"
#include <vector>

// 专用于路径查找的工具类
class PathFinder {
public:
    // 检查两个点是否可以连接
    static bool canConnect(const GameBoard& board, const Point& p1, const Point& p2);

private:
    static bool canConnectDirectly(const GameBoard& board, const Point& p1, const Point& p2);
    static bool canConnectWithOneTurn(const GameBoard& board, const Point& p1, const Point& p2);
    static bool canConnectWithTwoTurns(const GameBoard& board, const Point& p1, const Point& p2);
};

#endif // PATHFINDER_H

// Core/GameDefines.h
#pragma once

// 使用枚举增强代码可读性
enum class GameState {
    Playing,
    Paused,
    Win,
    Lose
};

// 棋盘点的坐标
struct Point {
    int x;
    int y;
};

// Core/GameController.cpp
#include "GameController.h"

GameController::GameController(QObject *parent) : QObject(parent) {
    // 构造函数
}

void GameController::startGame() {
    // TODO: 初始化游戏
}

void GameController::onTileClicked(int x, int y) {
    // TODO: 处理点击逻辑，调用PathFinder进行判断
}

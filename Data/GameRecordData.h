#ifndef GAMERECORDDATA_H
#define GAMERECORDDATA_H


// Data/GameRecordData.h
#pragma once
#include <QObject>

// 负责与游戏记录相关的所有数据库操作
class GameRecordData {
public:
    static bool saveRecord(int timeInSeconds);
    // static QList<int> getHighScores(int limit);
};
#endif // GAMERECORDDATA_H

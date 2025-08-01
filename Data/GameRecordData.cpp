// Data/GameRecordData.cpp
#include "GameRecordData.h"
#include "DatabaseManager.h"

bool GameRecordData::saveRecord(int timeInSeconds) {
    // 确保数据库是打开的
    // DatabaseManager::instance()...
    QSqlQuery query;
    query.prepare("INSERT INTO game_records (completion_time) VALUES (:time)");
    query.bindValue(":time", timeInSeconds);
    return query.exec();

}

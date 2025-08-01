#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H


// Data/DatabaseManager.h
#pragma once
#include <QObject>
#include <QtSql>

// 使用单例模式管理数据库连接
class DatabaseManager {
public:
    static DatabaseManager& instance();
    bool openDatabase(const QString& path);
    void closeDatabase();

private:
    DatabaseManager(); // 私有构造
    ~DatabaseManager();
    DatabaseManager(const DatabaseManager&) = delete;
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase m_db;
};

#endif // DATABASEMANAGER_H

#include "DatabaseManager.h"

DatabaseManager& DatabaseManager::instance() {
    static DatabaseManager instance;
    return instance;
}

DatabaseManager::DatabaseManager() {
    // 构造函数
}

// 必须实现析构函数！
DatabaseManager::~DatabaseManager() {
    if (m_db.isOpen()) {
        m_db.close();
    }
}

bool DatabaseManager::openDatabase(const QString &path) {
    // TODO: 架构与数据组实现
    return false;
}

void DatabaseManager::closeDatabase() {
    // TODO: 架构与数据组实现
}

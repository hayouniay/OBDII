#ifndef OBDBASE_HPP
#define OBDBASE_HPP

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>
#include <QSqlError>
#include <QSqlQueryModel>
#include "log.hpp"

class OBDBase
{
private:
    OBDBase();
    static OBDBase *instance;
    void init();
    QSqlDatabase db;
public:
    static OBDBase* getInstance();
    static void ResetInstance();
    QSqlDatabase getDBInstance();
    ~OBDBase();
};

#endif // OBDBASE_HPP

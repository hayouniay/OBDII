#include "obdbase.hpp"


OBDBase* OBDBase::instance = nullptr;


OBDBase::OBDBase()
{
    init();
}

OBDBase::~OBDBase()
{
   qDebug() << "closing database connection";
   db.close();
}

void OBDBase::init()
{
    qDebug() << "in init()";
    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("/home/hayouniaymen/Documents/QT_Projects/OBDII_Smulator/OBDII");

    if(QFile::exists("/home/hayouniaymen/Documents/QT_Projects/StudentManagement/OBDII_Simulator/OBDII"))
    {
        qDebug() << "DBase file exist";
    }
    else
    {
        qDebug() << "DBase file doesn't exists";
    }

    if (!db.open()){
        qDebug() << db.lastError().text();
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }
    else{
        qDebug() << "Database loaded successfull!";
    }

}

/*void DBase::Listtable(QString flag = "y")
{
        //std::vector<int> student;

        QSqlDatabase Database = QSqlDatabase::addDatabase("QSQLITE", "Data");
        Database.setDatabaseName("/home/hayouniaymen/Documents/QT_Projects/OBDII_Simulator/OBDII.sql");
        if(QFile::exists("/home/hayouniaymen/Documents/QT_Projects/OBDII_Simulator/OBDII.sql"))
            qDebug() << "DBase file exist";
        else
           qDebug() << "DBase file doesn't exists";

        if (!Database.open())
            qDebug() << Database.lastError().text();
        else
            qDebug() << "Database loaded successfull!";

        QSqlQuery query(Database);
        query.prepare("select inID from OBDII where available = '" + flag + "'");

        if(!query.exec())
            qDebug() << query.lastError().text() << query.lastQuery();
        else
            qDebug() << "Fetch was successful";

        while(query.next())
        {
            QString record = query.value(0).toString();
            rooms.push_back(record.toInt());
            qDebug()<<"Line is : "<<record;
        }

        Database.close();
}*/

OBDBase *OBDBase::getInstance()
{
    qDebug() << "in DBase::getInstance()";
    if(instance == nullptr){
        instance = new OBDBase();
    }

    return instance;
}

QSqlDatabase OBDBase::getDBInstance()
{
    qDebug() <<"in getDBInstance()";
    return db;
}

void OBDBase::ResetInstance()
{
      qDebug() << "deleting instance of DBase";
      delete instance;
      instance = nullptr;
}



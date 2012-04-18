#include "cfreebbase.h"
#include "qsql.h"

CFreebBase::CFreebBase(QObject *parent) :
    QObject(parent)
{
}


static bool CFreebBase::connect_to_db() {
    db = QSqlDatabase::addDatabase( dbType );
    db.setHostName( dbHost );
    db.setDatabaseName( dbName );
    db.setUserName( dbUser );
    db.setPassword( dbPass );
    return db.open();
}

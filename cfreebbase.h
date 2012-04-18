#ifndef CFREEBBASE_H
#define CFREEBBASE_H

#include <QObject>
#include <qsql.h>

class CFreebBase : public QObject
{
    Q_OBJECT
public:
    explicit CFreebBase(QObject *parent = 0);
signals:
protected:

    static QSqlDatabase db;

    static QString dbHost = 'loaclhost';

    static QString dbName = 'strayed615';

    static QString dbUser = 'root';

    static QString dbPass = '';

    static QString dbType = 'QMYSQL';

private:

    static bool connect_to_db();

public slots:

};

#endif // CFREEBBASE_H

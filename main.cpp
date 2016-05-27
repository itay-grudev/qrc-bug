#include <QFile>
#include <QDebug>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // project
    QFile file1( ":/project/test.txt" );
    file1.open( QFile::ReadOnly );
    qDebug() << "project/test.txt";
    qDebug() << file1.readAll();

    // subproject
    QFile file2( ":/subproject/test.txt" );
    file2.open( QFile::ReadOnly );
    qDebug() << "subproject/test.txt";
    qDebug() << file2.readAll();

    return 0;
}

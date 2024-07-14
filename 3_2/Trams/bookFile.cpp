#include "bookFile.h"
#include "mainformwidget.h"
#include <QDebug>
bookFile::bookFile()  // конструктор
{
    f=new QFile("book.txt");// создаем объект-файл
    if(!f->exists()) // если файл не существует, то
    {      // формирмируем сообщение
        QMessageBox msg(QMessageBox::Information,
               "Сообщение",
               "Файл book.txt создан",
               QMessageBox::Ok,0);
        msg.exec();// выводим сообщение на экран
    }
    f->open(QFile::ReadWrite); // открываем файл
                                                                        // для ввода-вывода
 }
bookFile::~bookFile()   // деструктор
{
    f->close();        // закрываем файл
    delete f;                        // освобождаем память
}
bool bookFile::addRec(recType r)
{
    f->seek(f->size()); // переходим на конец файла
    QDataStream out(f); // связываем с файлом поток вывода
    out << r.number << r.model << r.year << r.period;// выводим данные в файл
    qDebug() << "Запись добавлена";
    return true;
}
bool bookFile::readRec()
{
    QDataStream in(f); // связываем с файлом поток ввода
    if (in.atEnd())return false;
    else
    {
        in >> r.number >> r.model >> r.year >> r.period;
        return true;
    }
}
bool bookFile::findFirst(const recType r1)
{
    k1=(r1.number=="");   // устанавливаем два ключа поиска
    k2=(r1.model=="");
    ff=false;   // устанавливаем ключ поиска «запись не найдена»
    f->reset();
    bool fff = readRec();
    while(fff &&(!ff))
    {
        k3=(r1.number==r.number);  //строим еще два ключа поиска
          k4=(r1.number==r.number);
          if ((!k1 && !k2 && k3 && k4)||
             (!k1 && k2 && k3)||
             (k1 && !k2 && k4))
            ff=true; // ключ поиска «запись найдена»
        else fff=readRec();
    }
    return ff; // возвращаем ключ поиска
}
bool bookFile::findNext(const recType r1)
{
    ff=false;   // ключ поиска «запись не найдена»
    bool fff = readRec();
    while((!ff) && fff)
    {
        k3=(r1.model==r.model);//строим еще два ключа поиска
          k4=(r1.number==r.number);
          if ((!k1 && !k2 && k3 && k4)||
              (!k1 && k2 && k3)||
              (k1 && !k2 && k4))
            ff=true;     // ключ поиска «запись найдена»
        else fff=readRec();
    }
    return ff; // возвращаем ключ поиска
}

void bookFile::delRec(QString num){
    QFile *tmp;
    tmp = new QFile("tmp.txt");
    tmp->open(QFile::ReadWrite);
    QDataStream out(tmp);
    QDataStream in(f);
    f->seek(0);
    recType rec;
    bool flag = false;
    while (!in.atEnd()){
        in >> rec.number >> rec.model >> rec.year >> rec.period;
        qDebug() << rec.number << rec.model;
        if (num != rec.number){
            out << rec.number << rec.model << rec.year << rec.period;
        } else flag = true;
    }
    if (flag) {
        QMessageBox msg(QMessageBox::Information,
               "Сообщение",
               "Запись удалена!",
               QMessageBox::Ok,0);
        msg.exec();// выводим сообщение на экран
    } else {
        QMessageBox msg(QMessageBox::Critical,
               "Сообщение",
               "Запись для удаления не найдена!",
               QMessageBox::Ok,0);
        msg.exec();// выводим сообщение на экран
    }
    f->remove();
    QDataStream intmp(tmp);
    tmp->seek(0);
    while (!intmp.atEnd()){
        intmp >> rec.number >> rec.model >> rec.year >> rec.period;
        qDebug() << rec.number << rec.model;
    }
    tmp->close();
    tmp->rename("tmp.txt", "book.txt");
    delete tmp;
}



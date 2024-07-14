#ifndef bookFile_h
#define bookFile_h
#include <QFile>
#include <QMessageBox>
struct recType   // структура записи данных одного абонента
{	QString number, model, year, period;   };
class bookFile
{
public: QFile * f;    // указатель на объект класса QFile
    bool k1,k2,k3,k4,ff; // ключи поиска
public:
    recType r;  // буфер ввода-вывода
    bookFile();  // конструктор
    ~bookFile(); // деструктор
    bool addRec(recType r); // добавление записи в файл
    bool readRec();	    // чтение записи из файда
    bool findFirst(const recType r1); // поиск первой
                                                         // записи, удовлетворяющей условию
    bool findNext(const recType r1);
                       // поиск следующей записи
    void delRec(QString num);
};
#endif

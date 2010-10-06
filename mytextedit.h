#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QKeyEvent>

class myTextEdit : public QTextEdit {
    Q_OBJECT
public:
    myTextEdit(const QString& ="");

protected :
        void keyPressEvent(QKeyEvent *e);
private:
    QString filePath;
};

#endif // MYTEXTEDIT_H

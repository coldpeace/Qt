#include "mytextedit.h"

myTextEdit::myTextEdit(const QString& path)
{
    this->filePath = path;
    //this->setTextInteractionFlags();

}


void myTextEdit::keyPressEvent(QKeyEvent *e)
{
    QTextEdit::keyPressEvent(e);
    if(e->modifiers() == Qt::ControlModifier && e->key() == Qt::Key_S)
    {
        QFile file(filePath);
        if(!file.open(QIODevice::ReadWrite))
        {
            return;
        }
        QTextStream input(&file);
        input << this->toPlainText();
        file.close();
    }

    else
    {
        //...
    }

}


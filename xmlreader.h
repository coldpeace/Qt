#ifndef XMLREADER_H
#define XMLREADER_H

#include <QList>
#include <QDomElement>
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QDir>
class HelpFrame;
class XMLReader
{
private:
typedef struct item{
        QString label;
        QString link;
    }Hitem;
void fillItemList(QDomElement);
friend class HelpFrame;
public:
    XMLReader(const QString&);
    QList<Hitem*> itemList;


};


#endif // XMLREADER_H


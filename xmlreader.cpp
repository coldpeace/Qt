#include "xmlreader.h"

XMLReader::XMLReader(const QString& file_name)
{
    QDomDocument doc("simgrid");
    QFile file(file_name);
    if( !file.open(QIODevice::ReadWrite) )
    {
      QMessageBox::warning(0,"Oops","cannot open "+ file_name +" file",QMessageBox::Ok);
      return;
    }
    if( !doc.setContent( &file ) )
    {
      file.close();
      QMessageBox::warning(0,"Oops","cannot set "+ file_name +" content",QMessageBox::Ok);
      return;
    }
    QDomElement root = doc.documentElement();
    if( root.tagName() != "simgrid" )
    {
      QMessageBox::warning(0,"Oops","invalid root name in "+ file_name +" file",QMessageBox::Ok);
      return;
    }

    // Load item values
    fillItemList(root);
}

void XMLReader::fillItemList(QDomElement elt)
{
   if(!elt.isNull())
    {
        Hitem *item = new Hitem;
        if (!elt.attribute("label","").isEmpty())
        {
            item->label = elt.attribute("label","");
            item->link  = elt.attribute("link","");
            this->itemList.append(item);
        }
    }
   QDomNode n = elt.firstChild();
   while(!n.isNull())
   {
    fillItemList(n.toElement());
    n = n.nextSibling();
   }

}

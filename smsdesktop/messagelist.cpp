#include "messagelist.h"


MessageList::MessageList()
{
    this->addString("hello");
    this->addString("how are you?");
    this->addString("doing well!");
}

MessageList::~MessageList()
{
    delete this;
}

void MessageList::addString(const QString& message)
{
    this->messages.append(message);
    this->setStringList(QList<QString>::fromVector(this->messages));
}

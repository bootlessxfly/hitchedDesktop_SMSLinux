#include "conversationlist.h"


ConversationList::ConversationList()
{
    this->addString("(404) 625-1913");
    this->addString("(256) 125-5413");
}

ConversationList::~ConversationList()
{
    delete this;
}

void ConversationList::addString(const QString& message)
{
    this->conversations.append(message);
    this->setStringList(QList<QString>::fromVector(this->conversations));
}

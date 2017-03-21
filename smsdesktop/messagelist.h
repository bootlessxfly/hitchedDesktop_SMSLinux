#ifndef MESSAGELIST_H
#define MESSAGELIST_H

#include "message.h"

#include <QStringListModel>

namespace Ui {
/**
 * @brief MessageList is a UI component for showing and interacting with a list
 * of Model::Messages.
 */
class MessageList;
}

class MessageList : public QStringListModel
{
    Q_OBJECT

public:
    explicit MessageList();
    ~MessageList();

    /**
     * @brief addMessage to the MessageList.
     */
    void addMessage(const Model::Message&);

private:
    QVector<QString> messages;

    void addString(const QString&);

};

#endif // MESSAGELIST_H

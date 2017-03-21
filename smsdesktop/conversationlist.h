#ifndef CONVERSATIONLIST_H
#define CONVERSATIONLIST_H

#include "conversation.h"
#include "messagelist.h"

#include <QStringListModel>

namespace Ui {
/**
 * @brief ConversationList is a UI component for showing and interacting with a
 * list of Model::Conversations.
 */
class ConversationList;
}

class ConversationList : public QStringListModel
{
    Q_OBJECT

public:
    explicit ConversationList();
    ~ConversationList();

    /**
     * @brief addConversation to the ConversationList.
     *
     * The Model::Conversation will be added to the UI.
     */
    void addConversation(const Model::Conversation&);
    /**
     * @brief removeConversation from the ConversationList.
     *
     * The Model::Conversation will be removed from the UI.
     */
    void removeConversation(const Model::Conversation&);

    /**
     * @brief setConversations to the QVector of Model::Conversations.
     *
     * All existing Model::Conversations will be removed and the passed QVector
     * will become the new ones.
     */
    void setConversations(const QVector<Model::Conversation>&);
    /**
     * @brief clearConversations clears the entire ConversationList making the UI
     * empty.
     */
    void clearConversations();

    /**
     * @brief messagesForConversation returns the MessageList for the
     * Model::Conversation.
     *
     * @return MessageList for the Model::Conversation.
     */
    MessageList* messagesForConversation(const Model::Conversation&);

private:
    QVector<QString> conversations;

    void addString(const QString&);

};

#endif // CONVERSATIONLIST_H

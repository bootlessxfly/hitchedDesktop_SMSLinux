#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "conversationlist.h"
#include "messagelist.h"

#include <QMainWindow>
#include <QListView>

namespace Ui {
/**
 * MainWindow is the main UI component.
 */
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    ConversationList* conversations;
    MessageList* messages;

    void addModel(const QString&, QAbstractListModel*);

};

#endif // MAINWINDOW_H

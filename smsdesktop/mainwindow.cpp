#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->conversations = new ConversationList;
    this->messages = new MessageList;

    this->addModel("conversationList", this->conversations);
    this->addModel("messageList", this->messages);
}

MainWindow::~MainWindow()
{
    delete this->messages;
    delete ui;
}

void MainWindow::addModel(const QString& modelName, QAbstractListModel* model)
{
    this->findChild<QListView*>(modelName)->setModel(model);
}

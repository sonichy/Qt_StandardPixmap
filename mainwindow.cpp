#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMetaEnum>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(style()->standardPixmap(QStyle::SP_TitleBarMenuButton)));
    showMaximized();
    QMetaEnum metaEnum = QMetaEnum::fromType<QStyle::StandardPixmap>();
    for (qint32 i = 0, count = metaEnum.keyCount(); i < count; i++) {
        QStyle::StandardPixmap SP = (QStyle::StandardPixmap)metaEnum.keyToValue(metaEnum.key(i));
        QListWidgetItem *LWI = new QListWidgetItem(QIcon(style()->standardPixmap(SP)), metaEnum.key(i));
        //LWI->setSizeHint(QSize(150,150));
        ui->listWidget->addItem(LWI);
    }    
}

MainWindow::~MainWindow()
{
    delete ui;
}

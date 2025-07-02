#include "HomePage.h"
#include "ui_HomePage.h"

HomePage::HomePage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    ui->liveScoresBtn->setToolTip("View real-time cricket scores");

    QIcon liveIcon(":/icons/live_icon.png");
    ui->liveScoresBtn->setIcon(liveIcon);

    
    ui->liveScoresBtn->setIconSize(QSize(16, 16));
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_addPlayerBtn_clicked()
{
    emit addPlayerClicked();
}

void HomePage::on_playerListBtn_clicked()
{
    emit playerListClicked();
}
void HomePage::on_liveScoresBtn_clicked()
{
    emit liveScoresClicked();  
}



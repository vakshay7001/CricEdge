#include "PlayerListPage.h"
#include "ui_PlayerListPage.h"
#include "logic/playermanager.h"
#include <QCoreApplication>
#include <QDebug>

PlayerListPage::PlayerListPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PlayerListPage)
{
    ui->setupUi(this);
   ui->playerTable->setColumnCount(6);
     QStringList headers = { "Name", "Age", "Matches", "Runs", "Wickets", "Team" };
       ui->playerTable->setHorizontalHeaderLabels(headers);

    
    ui->playerTable->horizontalHeader()->setStretchLastSection(true);
  ui->playerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->playerTable->setColumnWidth(0, 250); 
    ui->playerTable->setColumnWidth(1, 100);  
    ui->playerTable->setColumnWidth(2, 150);  
    ui->playerTable->setColumnWidth(3, 180); 
    ui->playerTable->setColumnWidth(4, 100);  
    ui->playerTable->setColumnWidth(5, 100);

}


PlayerListPage::~PlayerListPage()
{
    delete ui;
}

void PlayerListPage::loadPlayers()
{
    QString csvPath = QCoreApplication::applicationDirPath() + "/data/final.csv";
    PlayerManager pm(csvPath);
    QList<QStringList> players = pm.getAllPlayers();

    ui->playerTable->setRowCount(players.size());

    for (int row = 0; row < players.size(); ++row) {
        const QStringList &fields = players[row];

        ui->playerTable->setItem(row, 0, new QTableWidgetItem(fields[0]));
        
  ui->playerTable->setItem(row, 1, new QTableWidgetItem(fields[1])); 
  ui->playerTable->setItem(row, 2, new QTableWidgetItem(fields[3])); 
     ui->playerTable->setItem(row, 3, new QTableWidgetItem(fields[4])); 
    ui->playerTable->setItem(row, 4, new QTableWidgetItem(fields[5])); 
        ui->playerTable->setItem(row, 5, new QTableWidgetItem(fields[2])); 

        
        QFont boldFont;
        boldFont.setBold(true);
        ui->playerTable->item(row, 0)->setFont(boldFont);
        ui->playerTable->item(row, 5)->setFont(boldFont);
    }

}


void PlayerListPage::on_homeBtn_clicked()
{
    emit homeRequested();
}

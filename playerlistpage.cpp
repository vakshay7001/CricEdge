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

    // Setup table headers
    ui->playerTable->setColumnCount(6);
    QStringList headers = { "Name", "Age", "Matches", "Runs", "Wickets", "Team" };
    ui->playerTable->setHorizontalHeaderLabels(headers);

    // Make the last section stretch and disable editing
    ui->playerTable->horizontalHeader()->setStretchLastSection(true);
    ui->playerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->playerTable->setColumnWidth(0, 250); // Name (more space)
    ui->playerTable->setColumnWidth(1, 100);  // Age
    ui->playerTable->setColumnWidth(2, 150);  // Matches
    ui->playerTable->setColumnWidth(3, 180); // Runs
    ui->playerTable->setColumnWidth(4, 100);  // Wickets
    ui->playerTable->setColumnWidth(5, 100); // Team (last now)

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

        ui->playerTable->setItem(row, 0, new QTableWidgetItem(fields[0])); // Name (bold below)
        ui->playerTable->setItem(row, 1, new QTableWidgetItem(fields[1])); // Age
        ui->playerTable->setItem(row, 2, new QTableWidgetItem(fields[3])); // Matches
        ui->playerTable->setItem(row, 3, new QTableWidgetItem(fields[4])); // Runs
        ui->playerTable->setItem(row, 4, new QTableWidgetItem(fields[5])); // Wickets
        ui->playerTable->setItem(row, 5, new QTableWidgetItem(fields[2])); // Team

        // Bold Name
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

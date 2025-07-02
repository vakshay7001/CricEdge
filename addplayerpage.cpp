#include "addplayerpage.h"
#include "ui_addplayerpage.h"
#include "logic/playermanager.h"

#include <QMessageBox>
#include <QDebug>
#include <QCoreApplication>

AddPlayerPage::AddPlayerPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddPlayerPage)
{
    ui->setupUi(this);

    // Connect buttons
    connect(ui->submitBtn, &QPushButton::clicked,
            this, &AddPlayerPage::onSubmitClicked);

    connect(ui->homeBtn, &QPushButton::clicked,
            this, &AddPlayerPage::onHomeClicked);

    // Populate team combo box
    ui->teamComboBox->addItems({
        "India", "South Africa", "Australia", "New Zealand",
        "Pakistan", "Zimbabwe", "England", "Bangladesh",
        "West Indies", "Afghanistan"
    });

    // Adjust spin boxes max values
    ui->ageSpinBox->setMaximum(120);
    ui->matchesSpinBox->setMaximum(1000);
    ui->runsSpinBox->setMaximum(50000);
    ui->wicketsSpinBox->setMaximum(1000);
}

AddPlayerPage::~AddPlayerPage()
{
    delete ui;
}

void AddPlayerPage::onSubmitClicked()
{
    QString name = ui->playerNameLineEdit->text();
    int age = ui->ageSpinBox->value();
    QString team = ui->teamComboBox->currentText();
    int matches = ui->matchesSpinBox->value();
    int runs = ui->runsSpinBox->value();
    int wickets = ui->wicketsSpinBox->value();

    if (name.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Player name cannot be empty!");
        return;
    }

    QString csvPath = QCoreApplication::applicationDirPath() + "/data/final.csv";
    PlayerManager pm(csvPath);


    if (pm.playerExists(name)) {
        QMessageBox::warning(this, "Duplicate Player",
                             "Player with this name already exists!");
        return;
    }

    if (pm.addPlayer(name, age, team, matches, runs, wickets)) {
        QMessageBox::information(this, "Success", "Player added!");
    } else {
        QMessageBox::critical(this, "Error", "Could not save player to CSV!");
    }

}

void AddPlayerPage::onHomeClicked()
{
    emit homeRequested();
}

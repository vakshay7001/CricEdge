#include "LiveScoresPage.h"
#include "ui_LiveScoresPage.h"
#include <QDesktopServices>
#include <QUrl>

LiveScoresPage::LiveScoresPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LiveScoresPage)
{
    ui->setupUi(this);


    connect(ui->openCricbuzzBtn, &QPushButton::clicked,
            this, &LiveScoresPage::onOpenCricbuzzClicked);

    
    connect(ui->homeBtn, &QPushButton::clicked,
            this, &LiveScoresPage::onHomeClicked);
}

LiveScoresPage::~LiveScoresPage()
{
    delete ui;
}

void LiveScoresPage::onOpenCricbuzzClicked()
{
    QDesktopServices::openUrl(QUrl("https://www.cricbuzz.com/cricket-match/live-scores"));
}

void LiveScoresPage::onHomeClicked()
{
    emit homeRequested();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("CricEdge Dashboard");

    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);

    homePage = new HomePage(this);
    addPlayerPage = new AddPlayerPage(this);
    playerListPage = new PlayerListPage(this);
    liveScoresPage = new LiveScoresPage(this);

    stackedWidget->addWidget(homePage);         
    stackedWidget->addWidget(addPlayerPage);    
    stackedWidget->addWidget(playerListPage);   
    stackedWidget->addWidget(liveScoresPage);

    stackedWidget->setCurrentWidget(homePage);

    connect(homePage, &HomePage::addPlayerClicked,
     this, &MainWindow::showAddPlayerPage);
    connect(homePage, &HomePage::playerListClicked,
    this, &MainWindow::showPlayerListPage);
    connect(homePage, &HomePage::liveScoresClicked,
    this, &MainWindow::showLiveScoresPage);


    connect(addPlayerPage, &AddPlayerPage::homeRequested,
      this, &MainWindow::showHomePage);
     connect(playerListPage, &PlayerListPage::homeRequested, 
    this, &MainWindow::showHomePage);

    connect(liveScoresPage, &LiveScoresPage::homeRequested,
    this, &MainWindow::showHomePage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showAddPlayerPage()
{
    stackedWidget->setCurrentWidget(addPlayerPage);
}

void MainWindow::showPlayerListPage()  
{
    playerListPage->loadPlayers(); 
    stackedWidget->setCurrentWidget(playerListPage);
}

void MainWindow::showHomePage()
{
    stackedWidget->setCurrentWidget(homePage);
}
void MainWindow::showLiveScoresPage() {
    stackedWidget->setCurrentWidget(liveScoresPage);
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "HomePage.h"
#include "addplayerpage.h"
#include "playerlistpage.h"
#include "logic/livescorespage.h"

QT_BEGIN_NAMESPACE

    namespace Ui
    {
      class MainWindow;
    }

QT_END_NAMESPACE


    class MainWindow : public QMainWindow
     {
        Q_OBJECT

        public:
         explicit MainWindow(QWidget *parent = nullptr);
         ~MainWindow();

        private slots:
          void showAddPlayerPage();
          void showPlayerListPage();
          void showHomePage();
          void showLiveScoresPage();

        private:
           Ui::MainWindow *ui;

           QStackedWidget *stackedWidget;
           HomePage *homePage;
           AddPlayerPage *addPlayerPage;
           PlayerListPage *playerListPage;
           LiveScoresPage *liveScoresPage;
     };

#endif

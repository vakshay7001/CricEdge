#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

  namespace Ui
  {
    class HomePage;
  }

   class HomePage : public QWidget
   {
      Q_OBJECT

      public:
      explicit HomePage(QWidget *parent = nullptr);
        ~HomePage();

    signals:
       void addPlayerClicked();
       void playerListClicked();
       void liveScoresClicked();



    private slots:
        void on_addPlayerBtn_clicked();
        void on_playerListBtn_clicked();
        void on_liveScoresBtn_clicked();

    private:
       Ui::HomePage *ui;
  };

#endif

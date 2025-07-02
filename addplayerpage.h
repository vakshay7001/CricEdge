#ifndef ADDPLAYERPAGE_H
#define ADDPLAYERPAGE_H

#include <QWidget>

  namespace Ui
 {

   class AddPlayerPage;

 }

  class AddPlayerPage : public QWidget
 {
    Q_OBJECT

  public:
    explicit AddPlayerPage(QWidget *parent = nullptr);
    ~AddPlayerPage();

  signals:
    void homeRequested();

  private slots:
    void onSubmitClicked();
    void onHomeClicked();

  private:
    Ui::AddPlayerPage *ui;

 };

#endif

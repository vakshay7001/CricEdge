#ifndef LIVESCORESPAGE_H
#define LIVESCORESPAGE_H

#include <QWidget>

namespace Ui {
class LiveScoresPage;
}

class LiveScoresPage : public QWidget
{
    Q_OBJECT

public:
    explicit LiveScoresPage(QWidget *parent = nullptr);
    ~LiveScoresPage();

signals:
    void homeRequested();

private slots:
    void onOpenCricbuzzClicked();
    void onHomeClicked();

private:
    Ui::LiveScoresPage *ui;
};

#endif 

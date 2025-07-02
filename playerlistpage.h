#ifndef PLAYERLISTPAGE_H
#define PLAYERLISTPAGE_H

#include <QWidget>

namespace Ui {
class PlayerListPage;
}

class PlayerListPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerListPage(QWidget *parent = nullptr);
    ~PlayerListPage();

signals:
    void homeRequested();

    // optional: void playerSelected(...) etc.

public slots:
    void loadPlayers();

private slots:
    void on_homeBtn_clicked();

private:
    Ui::PlayerListPage *ui;
};

#endif // PLAYERLISTPAGE_H

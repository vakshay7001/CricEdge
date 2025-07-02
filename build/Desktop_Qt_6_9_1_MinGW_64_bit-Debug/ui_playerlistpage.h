/********************************************************************************
** Form generated from reading UI file 'playerlistpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERLISTPAGE_H
#define UI_PLAYERLISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerListPage
{
public:
    QVBoxLayout *mainLayout;
    QFrame *backgroundFrame;
    QVBoxLayout *frameLayout;
    QLabel *titleLabel;
    QTableWidget *playerTable;
    QPushButton *homeBtn;

    void setupUi(QWidget *PlayerListPage)
    {
        if (PlayerListPage->objectName().isEmpty())
            PlayerListPage->setObjectName("PlayerListPage");
        PlayerListPage->resize(1000, 700);
        mainLayout = new QVBoxLayout(PlayerListPage);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(0, 0, 0, 0);
        backgroundFrame = new QFrame(PlayerListPage);
        backgroundFrame->setObjectName("backgroundFrame");
        backgroundFrame->setStyleSheet(QString::fromUtf8("\n"
"QFrame#backgroundFrame {\n"
"    background-image: url(:/resources/222.jpg);\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;\n"
"    background-color: black;\n"
"}\n"
"      "));
        frameLayout = new QVBoxLayout(backgroundFrame);
        frameLayout->setObjectName("frameLayout");
        titleLabel = new QLabel(backgroundFrame);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"    color: gold;\n"
"    font-weight: bold;\n"
"    font-size: 32px;\n"
"}\n"
"         "));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        frameLayout->addWidget(titleLabel);

        playerTable = new QTableWidget(backgroundFrame);
        playerTable->setObjectName("playerTable");
        playerTable->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget {\n"
"    background-color: rgba(0, 0, 0, 180);\n"
"    color: white;\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    gridline-color: gold;\n"
"    font-size: 14px;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: gold;\n"
"    color: black;\n"
"    font-weight: bold;\n"
"    padding: 4px;\n"
"}\n"
"         "));

        frameLayout->addWidget(playerTable);

        homeBtn = new QPushButton(backgroundFrame);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homeBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid gold;\n"
"    border-radius: 10px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 black, stop:1 darkgoldenrod);\n"
"    color: gold;\n"
"    padding: 10px 25px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: gold;\n"
"    color: black;\n"
"    border: 2px solid white;\n"
"}\n"
"         "));

        frameLayout->addWidget(homeBtn);


        mainLayout->addWidget(backgroundFrame);


        retranslateUi(PlayerListPage);

        QMetaObject::connectSlotsByName(PlayerListPage);
    } // setupUi

    void retranslateUi(QWidget *PlayerListPage)
    {
        titleLabel->setText(QCoreApplication::translate("PlayerListPage", "\360\237\217\217 Player List", nullptr));
        homeBtn->setText(QCoreApplication::translate("PlayerListPage", "\360\237\217\240 Home", nullptr));
        (void)PlayerListPage;
    } // retranslateUi

};

namespace Ui {
    class PlayerListPage: public Ui_PlayerListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERLISTPAGE_H

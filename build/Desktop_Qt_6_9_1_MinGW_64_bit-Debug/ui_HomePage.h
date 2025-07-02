/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *backgroundFrame;
    QVBoxLayout *verticalLayout_3;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *liveScoresBtn;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *removePlayerBtn;
    QPushButton *playerListBtn;
    QPushButton *searchPlayerBtn;
    QPushButton *statsBtn;
    QPushButton *addPlayerBtn;
    QPushButton *updatePlayerBtn;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(1431, 856);
        HomePage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(HomePage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        backgroundFrame = new QFrame(HomePage);
        backgroundFrame->setObjectName("backgroundFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backgroundFrame->sizePolicy().hasHeightForWidth());
        backgroundFrame->setSizePolicy(sizePolicy);
        backgroundFrame->setStyleSheet(QString::fromUtf8("QFrame#backgroundFrame {\n"
"    background-image: url(:/resources/222.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-color: black;\n"
"}\n"
""));
        backgroundFrame->setFrameShape(QFrame::Shape::NoFrame);
        backgroundFrame->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayout_3 = new QVBoxLayout(backgroundFrame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        titleBar = new QWidget(backgroundFrame);
        titleBar->setObjectName("titleBar");
        horizontalLayout = new QHBoxLayout(titleBar);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(100, 0, -1, 11);
        label = new QLabel(titleBar);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bell MT")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);

        horizontalLayout->addWidget(label);

        liveScoresBtn = new QPushButton(titleBar);
        liveScoresBtn->setObjectName("liveScoresBtn");
        liveScoresBtn->setMaximumSize(QSize(100, 25));
        liveScoresBtn->setStyleSheet(QString::fromUtf8("QPushButton#liveScoresBtn {\n"
"    background-color: red;\n"
"    color: white;\n"
"    border-radius: 12px;\n"
"    padding: 4px 10px;\n"
"    font-weight: bold;\n"
"    qproperty-icon: url(:/icons/live_icon); /* Your icon in resources.qrc */\n"
"    qproperty-iconSize: 16px 16px;\n"
"}\n"
""));

        horizontalLayout->addWidget(liveScoresBtn);


        verticalLayout_3->addWidget(titleBar);

        widget = new QWidget(backgroundFrame);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(30, 20, 25, 20);
        removePlayerBtn = new QPushButton(widget);
        removePlayerBtn->setObjectName("removePlayerBtn");
        removePlayerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(removePlayerBtn, 1, 0, 1, 1);

        playerListBtn = new QPushButton(widget);
        playerListBtn->setObjectName("playerListBtn");
        playerListBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(playerListBtn, 1, 2, 1, 1);

        searchPlayerBtn = new QPushButton(widget);
        searchPlayerBtn->setObjectName("searchPlayerBtn");
        searchPlayerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(searchPlayerBtn, 0, 1, 1, 1);

        statsBtn = new QPushButton(widget);
        statsBtn->setObjectName("statsBtn");
        statsBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(statsBtn, 1, 1, 1, 1);

        addPlayerBtn = new QPushButton(widget);
        addPlayerBtn->setObjectName("addPlayerBtn");
        addPlayerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(addPlayerBtn, 0, 0, 1, 1);

        updatePlayerBtn = new QPushButton(widget);
        updatePlayerBtn->setObjectName("updatePlayerBtn");
        updatePlayerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 215, 0, 0.05);\n"
"    border: 2px solid gold;\n"
"    border-radius: 15px;\n"
"    color: gold;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    padding: 16px;\n"
"    margin: 5px;\n"
"    box-shadow: 0px 2px 6px rgba(255, 215, 0, 0.3);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                      stop:0 gold, stop:1 #ffcc00);\n"
"    color: black;\n"
"}\n"
""));

        gridLayout->addWidget(updatePlayerBtn, 0, 2, 1, 1);


        verticalLayout_3->addWidget(widget);


        verticalLayout_2->addWidget(backgroundFrame);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "CricEdge", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "\360\237\217\217 CricEdge Dashboard\n"
"", nullptr));
        liveScoresBtn->setText(QCoreApplication::translate("HomePage", "Live Score", nullptr));
        removePlayerBtn->setText(QCoreApplication::translate("HomePage", "Remove Player", nullptr));
        playerListBtn->setText(QCoreApplication::translate("HomePage", "Player List", nullptr));
        searchPlayerBtn->setText(QCoreApplication::translate("HomePage", "Search Player", nullptr));
        statsBtn->setText(QCoreApplication::translate("HomePage", "Player Stats", nullptr));
        addPlayerBtn->setText(QCoreApplication::translate("HomePage", "	Add Player", nullptr));
        updatePlayerBtn->setText(QCoreApplication::translate("HomePage", "Update Player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

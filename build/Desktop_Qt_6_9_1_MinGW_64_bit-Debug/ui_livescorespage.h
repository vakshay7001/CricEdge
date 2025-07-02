/********************************************************************************
** Form generated from reading UI file 'livescorespage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVESCORESPAGE_H
#define UI_LIVESCORESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiveScoresPage
{
public:
    QVBoxLayout *mainLayout;
    QFrame *backgroundFrame;
    QVBoxLayout *frameLayout;
    QLabel *titleLabel;
    QPushButton *openCricbuzzBtn;
    QPushButton *homeBtn;

    void setupUi(QWidget *LiveScoresPage)
    {
        if (LiveScoresPage->objectName().isEmpty())
            LiveScoresPage->setObjectName("LiveScoresPage");
        LiveScoresPage->resize(1000, 700);
        mainLayout = new QVBoxLayout(LiveScoresPage);
        mainLayout->setObjectName("mainLayout");
        backgroundFrame = new QFrame(LiveScoresPage);
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
        titleLabel->setAlignment(Qt::AlignHCenter);

        frameLayout->addWidget(titleLabel);

        openCricbuzzBtn = new QPushButton(backgroundFrame);
        openCricbuzzBtn->setObjectName("openCricbuzzBtn");
        openCricbuzzBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 gold, stop:1 #ffcc00);\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    color: black;\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    padding: 12px 24px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: gold;\n"
"    color: #111;\n"
"}\n"
"         "));

        frameLayout->addWidget(openCricbuzzBtn);

        homeBtn = new QPushButton(backgroundFrame);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    background-color: rgba(0, 0, 0, 180);\n"
"    color: gold;\n"
"    padding: 8px 20px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: gold;\n"
"    color: black;\n"
"}\n"
"         "));

        frameLayout->addWidget(homeBtn);


        mainLayout->addWidget(backgroundFrame);


        retranslateUi(LiveScoresPage);

        QMetaObject::connectSlotsByName(LiveScoresPage);
    } // setupUi

    void retranslateUi(QWidget *LiveScoresPage)
    {
        titleLabel->setText(QCoreApplication::translate("LiveScoresPage", "\360\237\217\217 Live Scores", nullptr));
        openCricbuzzBtn->setText(QCoreApplication::translate("LiveScoresPage", "\360\237\224\227 Open Cricbuzz Live Scores", nullptr));
        homeBtn->setText(QCoreApplication::translate("LiveScoresPage", "\360\237\217\240 Home", nullptr));
        (void)LiveScoresPage;
    } // retranslateUi

};

namespace Ui {
    class LiveScoresPage: public Ui_LiveScoresPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVESCORESPAGE_H

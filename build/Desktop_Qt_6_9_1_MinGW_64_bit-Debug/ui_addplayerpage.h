/********************************************************************************
** Form generated from reading UI file 'addplayerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPLAYERPAGE_H
#define UI_ADDPLAYERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPlayerPage
{
public:
    QVBoxLayout *mainLayout;
    QFrame *backgroundFrame;
    QVBoxLayout *backgroundLayout;
    QPushButton *homeBtn;
    QLabel *titleLabel;
    QWidget *formContainer;
    QFormLayout *formLayout;
    QLabel *playerNameLabel;
    QLineEdit *playerNameLineEdit;
    QLabel *ageLabel;
    QSpinBox *ageSpinBox;
    QLabel *teamLabel;
    QComboBox *teamComboBox;
    QLabel *matchesLabel;
    QSpinBox *matchesSpinBox;
    QLabel *runsLabel;
    QSpinBox *runsSpinBox;
    QLabel *wicketsLabel;
    QSpinBox *wicketsSpinBox;
    QPushButton *submitBtn;

    void setupUi(QWidget *AddPlayerPage)
    {
        if (AddPlayerPage->objectName().isEmpty())
            AddPlayerPage->setObjectName("AddPlayerPage");
        AddPlayerPage->resize(1000, 700);
        mainLayout = new QVBoxLayout(AddPlayerPage);
        mainLayout->setObjectName("mainLayout");
        mainLayout->setContentsMargins(0, 0, 0, 0);
        backgroundFrame = new QFrame(AddPlayerPage);
        backgroundFrame->setObjectName("backgroundFrame");
        backgroundFrame->setStyleSheet(QString::fromUtf8("\n"
"QFrame#backgroundFrame {\n"
"    background-image: url(:/resources/222.jpg);\n"
"    background-position: center;\n"
"    background-repeat: no-repeat;\n"
"    background-color: #000;\n"
"}\n"
"      "));
        backgroundFrame->setFrameShape(QFrame::Shape::StyledPanel);
        backgroundLayout = new QVBoxLayout(backgroundFrame);
        backgroundLayout->setObjectName("backgroundLayout");
        backgroundLayout->setContentsMargins(20, 20, 20, 20);
        homeBtn = new QPushButton(backgroundFrame);
        homeBtn->setObjectName("homeBtn");
        homeBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    background-color: rgba(0, 0, 0, 150);\n"
"    color: gold;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: gold;\n"
"    color: black;\n"
"}\n"
"         "));

        backgroundLayout->addWidget(homeBtn, 0, Qt::AlignmentFlag::AlignRight);

        titleLabel = new QLabel(backgroundFrame);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"    color: gold;\n"
"    font-weight: bold;\n"
"    font-size: 32px;\n"
"}\n"
"         "));

        backgroundLayout->addWidget(titleLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        formContainer = new QWidget(backgroundFrame);
        formContainer->setObjectName("formContainer");
        formLayout = new QFormLayout(formContainer);
        formLayout->setObjectName("formLayout");
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(200, -1, 200, -1);
        playerNameLabel = new QLabel(formContainer);
        playerNameLabel->setObjectName("playerNameLabel");
        playerNameLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));
        playerNameLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, playerNameLabel);

        playerNameLineEdit = new QLineEdit(formContainer);
        playerNameLineEdit->setObjectName("playerNameLineEdit");
        playerNameLineEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    background-color: rgba(0, 0, 0, 150);\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    padding: 5px;\n"
"}\n"
"            "));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, playerNameLineEdit);

        ageLabel = new QLabel(formContainer);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));
        ageLabel->setMargin(-1);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, ageLabel);

        ageSpinBox = new QSpinBox(formContainer);
        ageSpinBox->setObjectName("ageSpinBox");
        ageSpinBox->setStyleSheet(QString::fromUtf8("\n"
"QSpinBox {\n"
"    background-color: rgba(0, 0, 0, 150);\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    padding: 5px;\n"
"}\n"
"            "));
        ageSpinBox->setMaximum(120);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, ageSpinBox);

        teamLabel = new QLabel(formContainer);
        teamLabel->setObjectName("teamLabel");
        teamLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, teamLabel);

        teamComboBox = new QComboBox(formContainer);
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->addItem(QString());
        teamComboBox->setObjectName("teamComboBox");
        teamComboBox->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"    background-color: rgba(0, 0, 0, 150);\n"
"    border: 2px solid gold;\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    padding: 5px;\n"
"}\n"
"            "));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, teamComboBox);

        matchesLabel = new QLabel(formContainer);
        matchesLabel->setObjectName("matchesLabel");
        matchesLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, matchesLabel);

        matchesSpinBox = new QSpinBox(formContainer);
        matchesSpinBox->setObjectName("matchesSpinBox");
        matchesSpinBox->setStyleSheet(QString::fromUtf8("\n"
"QSpinBox { background-color: rgba(0, 0, 0, 150); border: 2px solid gold; border-radius: 8px; color: white; padding: 5px; }\n"
"            "));
        matchesSpinBox->setMaximum(1000);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, matchesSpinBox);

        runsLabel = new QLabel(formContainer);
        runsLabel->setObjectName("runsLabel");
        runsLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, runsLabel);

        runsSpinBox = new QSpinBox(formContainer);
        runsSpinBox->setObjectName("runsSpinBox");
        runsSpinBox->setStyleSheet(QString::fromUtf8("\n"
"QSpinBox { background-color: rgba(0, 0, 0, 150); border: 2px solid gold; border-radius: 8px; color: white; padding: 5px; }\n"
"            "));
        runsSpinBox->setMaximum(50000);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, runsSpinBox);

        wicketsLabel = new QLabel(formContainer);
        wicketsLabel->setObjectName("wicketsLabel");
        wicketsLabel->setStyleSheet(QString::fromUtf8("\n"
"QLabel { color: white; font-size: 16px; font-weight: bold; }\n"
"            "));

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, wicketsLabel);

        wicketsSpinBox = new QSpinBox(formContainer);
        wicketsSpinBox->setObjectName("wicketsSpinBox");
        wicketsSpinBox->setStyleSheet(QString::fromUtf8("\n"
"QSpinBox { background-color: rgba(0, 0, 0, 150); border: 2px solid gold; border-radius: 8px; color: white; padding: 5px; }\n"
"            "));
        wicketsSpinBox->setMaximum(1000);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, wicketsSpinBox);


        backgroundLayout->addWidget(formContainer, 0, Qt::AlignmentFlag::AlignHCenter);

        submitBtn = new QPushButton(backgroundFrame);
        submitBtn->setObjectName("submitBtn");
        submitBtn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 gold, stop:1 #ffcc00);\n"
"    border: 2px solid gold;\n"
"    border-radius: 12px;\n"
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

        backgroundLayout->addWidget(submitBtn, 0, Qt::AlignmentFlag::AlignHCenter);


        mainLayout->addWidget(backgroundFrame);


        retranslateUi(AddPlayerPage);

        QMetaObject::connectSlotsByName(AddPlayerPage);
    } // setupUi

    void retranslateUi(QWidget *AddPlayerPage)
    {
        homeBtn->setText(QCoreApplication::translate("AddPlayerPage", "\360\237\217\240 Home", nullptr));
        titleLabel->setText(QCoreApplication::translate("AddPlayerPage", "\360\237\217\217 Add New Player", nullptr));
        playerNameLabel->setText(QCoreApplication::translate("AddPlayerPage", "Player Name:", nullptr));
        ageLabel->setText(QCoreApplication::translate("AddPlayerPage", "Age:", nullptr));
        teamLabel->setText(QCoreApplication::translate("AddPlayerPage", "Team:", nullptr));
        teamComboBox->setItemText(0, QCoreApplication::translate("AddPlayerPage", "India", nullptr));
        teamComboBox->setItemText(1, QCoreApplication::translate("AddPlayerPage", "Australia", nullptr));
        teamComboBox->setItemText(2, QCoreApplication::translate("AddPlayerPage", "South Africa", nullptr));
        teamComboBox->setItemText(3, QCoreApplication::translate("AddPlayerPage", "New Zealand", nullptr));
        teamComboBox->setItemText(4, QCoreApplication::translate("AddPlayerPage", "England", nullptr));
        teamComboBox->setItemText(5, QCoreApplication::translate("AddPlayerPage", "Pakistan", nullptr));
        teamComboBox->setItemText(6, QCoreApplication::translate("AddPlayerPage", "Bangladesh", nullptr));
        teamComboBox->setItemText(7, QCoreApplication::translate("AddPlayerPage", "West Indies", nullptr));
        teamComboBox->setItemText(8, QCoreApplication::translate("AddPlayerPage", "Afghanistan", nullptr));
        teamComboBox->setItemText(9, QCoreApplication::translate("AddPlayerPage", "Zimbabwe", nullptr));

        matchesLabel->setText(QCoreApplication::translate("AddPlayerPage", "Matches:", nullptr));
        runsLabel->setText(QCoreApplication::translate("AddPlayerPage", "Runs:", nullptr));
        wicketsLabel->setText(QCoreApplication::translate("AddPlayerPage", "Wickets:", nullptr));
        submitBtn->setText(QCoreApplication::translate("AddPlayerPage", "Add Player", nullptr));
        (void)AddPlayerPage;
    } // retranslateUi

};

namespace Ui {
    class AddPlayerPage: public Ui_AddPlayerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPLAYERPAGE_H

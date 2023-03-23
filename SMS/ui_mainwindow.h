/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_11;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_10;
    QLabel *label;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_12;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *UsernameLineEdit;
    QLabel *label_3;
    QLineEdit *PasswordLineEdit;
    QLabel *label_4;
    QLineEdit *StudentIdLineEdit;
    QLabel *label_5;
    QLineEdit *EmailLineEdit;
    QLabel *label_6;
    QLineEdit *GenderLineEdit;
    QLabel *label_7;
    QLineEdit *AgeLineEdit;
    QLabel *label_8;
    QLineEdit *FirstNameLineEdit;
    QLabel *label_12;
    QLineEdit *LastNameLineEdit;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *TeacherUsername;
    QLabel *label_13;
    QLineEdit *TeacherPass;
    QLabel *label_14;
    QLineEdit *TeacherIdLineEdit;
    QLabel *label_16;
    QLineEdit *TeacherEmail;
    QLabel *label_17;
    QLineEdit *TeacherGender;
    QLabel *label_18;
    QLineEdit *TeacherAca;
    QLabel *label_19;
    QLineEdit *TeacherAddress;
    QLabel *label_15;
    QLineEdit *TeacherFirstName;
    QLabel *label_20;
    QLineEdit *TeacherLastName;
    QPushButton *pushButton_6;
    QLineEdit *TeacherAge;
    QLabel *label_21;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1282, 633);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        gridLayout = new QGridLayout(page_11);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 1, 1, 1);

        label_10 = new QLabel(page_11);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        lineEdit_9 = new QLineEdit(page_11);
        lineEdit_9->setObjectName("lineEdit_9");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_9, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);

        lineEdit_10 = new QLineEdit(page_11);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout_2->addWidget(lineEdit_10, 4, 2, 1, 1);

        label = new QLabel(page_11);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        label_11 = new QLabel(page_11);
        label_11->setObjectName("label_11");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(18);
        font.setBold(true);
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        pushButton = new QPushButton(page_11);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        horizontalLayoutWidget = new QWidget(page_12);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 1211, 501));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        stackedWidget->addWidget(page_12);
        page = new QWidget();
        page->setObjectName("page");
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        UsernameLineEdit = new QLineEdit(page);
        UsernameLineEdit->setObjectName("UsernameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, UsernameLineEdit);

        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        PasswordLineEdit = new QLineEdit(page);
        PasswordLineEdit->setObjectName("PasswordLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, PasswordLineEdit);

        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        StudentIdLineEdit = new QLineEdit(page);
        StudentIdLineEdit->setObjectName("StudentIdLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, StudentIdLineEdit);

        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        EmailLineEdit = new QLineEdit(page);
        EmailLineEdit->setObjectName("EmailLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, EmailLineEdit);

        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        GenderLineEdit = new QLineEdit(page);
        GenderLineEdit->setObjectName("GenderLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, GenderLineEdit);

        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_7);

        AgeLineEdit = new QLineEdit(page);
        AgeLineEdit->setObjectName("AgeLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, AgeLineEdit);

        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");

        formLayout->setWidget(12, QFormLayout::LabelRole, label_8);

        FirstNameLineEdit = new QLineEdit(page);
        FirstNameLineEdit->setObjectName("FirstNameLineEdit");

        formLayout->setWidget(12, QFormLayout::FieldRole, FirstNameLineEdit);

        label_12 = new QLabel(page);
        label_12->setObjectName("label_12");

        formLayout->setWidget(14, QFormLayout::LabelRole, label_12);

        LastNameLineEdit = new QLineEdit(page);
        LastNameLineEdit->setObjectName("LastNameLineEdit");

        formLayout->setWidget(14, QFormLayout::FieldRole, LastNameLineEdit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::FieldRole, verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(11, QFormLayout::FieldRole, verticalSpacer_9);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::FieldRole, verticalSpacer_10);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(19, QFormLayout::FieldRole, verticalSpacer_11);

        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");

        formLayout->setWidget(18, QFormLayout::FieldRole, pushButton_5);


        horizontalLayout_2->addLayout(formLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        TeacherUsername = new QLineEdit(page_2);
        TeacherUsername->setObjectName("TeacherUsername");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TeacherUsername);

        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        TeacherPass = new QLineEdit(page_2);
        TeacherPass->setObjectName("TeacherPass");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, TeacherPass);

        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_14);

        TeacherIdLineEdit = new QLineEdit(page_2);
        TeacherIdLineEdit->setObjectName("TeacherIdLineEdit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, TeacherIdLineEdit);

        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_16);

        TeacherEmail = new QLineEdit(page_2);
        TeacherEmail->setObjectName("TeacherEmail");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, TeacherEmail);

        label_17 = new QLabel(page_2);
        label_17->setObjectName("label_17");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_17);

        TeacherGender = new QLineEdit(page_2);
        TeacherGender->setObjectName("TeacherGender");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, TeacherGender);

        label_18 = new QLabel(page_2);
        label_18->setObjectName("label_18");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_18);

        TeacherAca = new QLineEdit(page_2);
        TeacherAca->setObjectName("TeacherAca");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, TeacherAca);

        label_19 = new QLabel(page_2);
        label_19->setObjectName("label_19");

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_19);

        TeacherAddress = new QLineEdit(page_2);
        TeacherAddress->setObjectName("TeacherAddress");

        formLayout_2->setWidget(6, QFormLayout::FieldRole, TeacherAddress);

        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_15);

        TeacherFirstName = new QLineEdit(page_2);
        TeacherFirstName->setObjectName("TeacherFirstName");

        formLayout_2->setWidget(7, QFormLayout::FieldRole, TeacherFirstName);

        label_20 = new QLabel(page_2);
        label_20->setObjectName("label_20");

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_20);

        TeacherLastName = new QLineEdit(page_2);
        TeacherLastName->setObjectName("TeacherLastName");

        formLayout_2->setWidget(8, QFormLayout::FieldRole, TeacherLastName);

        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName("pushButton_6");

        formLayout_2->setWidget(10, QFormLayout::FieldRole, pushButton_6);

        TeacherAge = new QLineEdit(page_2);
        TeacherAge->setObjectName("TeacherAge");

        formLayout_2->setWidget(9, QFormLayout::FieldRole, TeacherAge);

        label_21 = new QLabel(page_2);
        label_21->setObjectName("label_21");

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_21);


        verticalLayout_2->addLayout(formLayout_2);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1282, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "School information system", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Manage students", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Manage teachers", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Manage Courses", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "StudnetId", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "email", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "gender", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "age", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "TeacherId", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Academic background", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

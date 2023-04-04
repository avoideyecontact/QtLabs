/********************************************************************************
** Form generated from reading UI file 'lab8.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB8_H
#define UI_LAB8_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab8
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lab8)
    {
        if (lab8->objectName().isEmpty())
            lab8->setObjectName(QStringLiteral("lab8"));
        lab8->resize(579, 479);
        centralWidget = new QWidget(lab8);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 301, 411));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(0, 40));
        lineEdit_2->setFont(font);

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFont(font);
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(330, 11, 241, 211));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(12);
        comboBox->setFont(font1);

        verticalLayout_2->addWidget(comboBox);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setFont(font);

        verticalLayout_2->addWidget(pushButton_2);

        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        lab8->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(lab8);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 17));
        lab8->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lab8);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        lab8->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(lab8);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        lab8->setStatusBar(statusBar);

        retranslateUi(lab8);

        QMetaObject::connectSlotsByName(lab8);
    } // setupUi

    void retranslateUi(QMainWindow *lab8)
    {
        lab8->setWindowTitle(QApplication::translate("lab8", "lab8", Q_NULLPTR));
        pushButton->setText(QApplication::translate("lab8", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\274\320\260\321\202\321\200\320\270\321\206\321\203", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("lab8", "\320\235\321\203\320\273\320\265\320\262\321\213\320\265", Q_NULLPTR)
         << QApplication::translate("lab8", "\320\235\320\265\320\275\321\203\320\273\320\265\320\262\321\213\320\265", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("lab8", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lab8: public Ui_lab8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB8_H

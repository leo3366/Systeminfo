/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_4;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_9;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_15;
    QLineEdit *lineEdit_11;
    QLabel *label_10;
    QLabel *label_16;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_17;
    QLabel *label_18;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_19;
    QLineEdit *lineEdit_12;
    QLabel *label_20;
    QLabel *label_21;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QWidget *tab_2;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_14;
    QLabel *label_28;
    QWidget *tab_3;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *imglabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(835, 623);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 781, 521));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 151, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(1);
        label_4->setTextFormat(Qt::RichText);
        formLayoutWidget_2 = new QWidget(tab);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 30, 361, 171));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        lineEdit_5 = new QLineEdit(formLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        line_3 = new QFrame(tab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(370, 10, 20, 451));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(tab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 230, 741, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(390, 240, 151, 31));
        label_9->setFont(font);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setLineWidth(1);
        label_9->setTextFormat(Qt::RichText);
        formLayoutWidget_3 = new QWidget(tab);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(390, 270, 371, 181));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        lineEdit_7 = new QLineEdit(formLayoutWidget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_7);

        lineEdit_8 = new QLineEdit(formLayoutWidget_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_8);

        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_14);

        lineEdit_9 = new QLineEdit(formLayoutWidget_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_9);

        lineEdit_10 = new QLineEdit(formLayoutWidget_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_10);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_15);

        lineEdit_11 = new QLineEdit(formLayoutWidget_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEdit_11);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(390, 0, 151, 31));
        label_10->setFont(font);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setLineWidth(1);
        label_10->setTextFormat(Qt::RichText);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 240, 151, 31));
        label_16->setFont(font);
        label_16->setFrameShadow(QFrame::Plain);
        label_16->setLineWidth(1);
        label_16->setTextFormat(Qt::RichText);
        formLayoutWidget_4 = new QWidget(tab);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(390, 30, 361, 197));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_18);

        textEdit_2 = new QTextEdit(formLayoutWidget_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, textEdit_2);

        textEdit = new QTextEdit(formLayoutWidget_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, textEdit);

        formLayoutWidget_5 = new QWidget(tab);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(10, 270, 361, 207));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(formLayoutWidget_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_19);

        lineEdit_12 = new QLineEdit(formLayoutWidget_5);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEdit_12);

        label_20 = new QLabel(formLayoutWidget_5);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_5);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_21);

        textEdit_3 = new QTextEdit(formLayoutWidget_5);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, textEdit_3);

        textEdit_4 = new QTextEdit(formLayoutWidget_5);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, textEdit_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 70, 92, 27));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 141, 16));
        label->setFont(font);
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 70, 361, 25));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 190, 231, 16));
        label_2->setFont(font);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 330, 261, 16));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 210, 361, 25));
        lineEdit_13 = new QLineEdit(tab_2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(50, 350, 361, 25));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 210, 92, 27));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 350, 92, 27));
        lineEdit_14 = new QLineEdit(tab_2);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(540, 210, 113, 25));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(540, 190, 61, 16));
        label_28->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_22 = new QLabel(tab_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(20, 20, 201, 16));
        label_22->setFont(font);
        label_23 = new QLabel(tab_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 50, 211, 16));
        label_24 = new QLabel(tab_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(50, 70, 141, 16));
        label_25 = new QLabel(tab_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(50, 90, 221, 16));
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(190, 390, 391, 20));
        label_27 = new QLabel(tab_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(260, 410, 291, 16));
        formLayoutWidget = new QWidget(tab_3);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(280, 150, 211, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        imglabel = new QLabel(formLayoutWidget);
        imglabel->setObjectName(QStringLiteral("imglabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, imglabel);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 835, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "Datos de memoria", 0));
        label_5->setText(QApplication::translate("MainWindow", "Memoria Total:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Memoria Libre:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Memoria Swap:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Swap Libre:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Datos del sistema", 0));
        label_11->setText(QApplication::translate("MainWindow", "Version del kernel:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Procesos en ejecucion:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Usuario actual:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Fecha y hora", 0));
        label_15->setText(QApplication::translate("MainWindow", "Tiempo en Ejecuci\303\263n:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Datos de red", 0));
        label_16->setText(QApplication::translate("MainWindow", "Datos de discos", 0));
        label_17->setText(QApplication::translate("MainWindow", "Dispositivos de red:", 0));
        label_18->setText(QApplication::translate("MainWindow", "Ips Asignadas:", 0));
        label_19->setText(QApplication::translate("MainWindow", "Lista de discos:", 0));
        label_20->setText(QApplication::translate("MainWindow", "Lista de particiones:", 0));
        label_21->setText(QApplication::translate("MainWindow", "Uso de disco:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Informaci\303\263n del sistema", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Iniciar", 0));
        label->setText(QApplication::translate("MainWindow", "Lanzar Aplicaci\303\263n:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Conocer PID de un proceso:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Terminar Aplicaci\303\263n (Ingrese PID:)", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Obtener PID", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Terminar", 0));
        label_28->setText(QApplication::translate("MainWindow", "PID:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Lanzador de Aplicaciones", 0));
        label_22->setText(QApplication::translate("MainWindow", "Programa realizado por:", 0));
        label_23->setText(QApplication::translate("MainWindow", "Leonardo Jos\303\251 Fern\303\241ndez D\303\255az", 0));
        label_24->setText(QApplication::translate("MainWindow", "19236467", 0));
        label_25->setText(QApplication::translate("MainWindow", "leonardo.fernandez@unet.edu.ve", 0));
        label_26->setText(QApplication::translate("MainWindow", "Programa realizado para la materia de Sistemas Operativos", 0));
        label_27->setText(QApplication::translate("MainWindow", "de la carrera Ingenier\303\255a en Inform\303\241tica", 0));
        imglabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Acerca de", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *mainFileTree;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(823, 589);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(36);
        label->setFont(font);
        label->setTextFormat(Qt::TextFormat::AutoText);

        verticalLayout->addWidget(label);

        mainFileTree = new QTreeWidget(centralwidget);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(mainFileTree);
        __qtreewidgetitem->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setIcon(0, icon1);
        mainFileTree->setObjectName("mainFileTree");
        mainFileTree->setMinimumSize(QSize(761, 491));
        mainFileTree->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);

        verticalLayout->addWidget(mainFileTree);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FScope", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "FScope", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mainFileTree->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Percentage Full", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Size", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));

        const bool __sortingEnabled = mainFileTree->isSortingEnabled();
        mainFileTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = mainFileTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "C:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "\\Program Files", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "Video.mp4", nullptr));
        mainFileTree->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

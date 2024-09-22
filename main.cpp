#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include <QTableWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "untitled_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    int x = 10;
    for(int i = 0; i <=10; i++){
    }
    w.show();

    return a.exec();
}

#include "mainwindow.h"
#include <QApplication>
#include "Home.h"
#include "Activity.h"
#include "List.h"
#include "Person.h"
#include "Sub_Activity.h"
#include "Date.h"
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    Home home;

    List Lavoro;
    List Casa;
    Casa.setNameList("Casa");

    Lavoro.setNameList("Lavoro");
    List Ufficio;
    Ufficio.setNameList("Ufficio");

    home.addList("Lavoro");
    home.addList("Ufficio");
    home.addList("Casa");

    Activity stampa;
    stampa.setNameActivity("stampare");
    Activity penna;
    stampa.setNameActivity("penna");
    Activity ara;
    stampa.setNameActivity("ara");

    home.searchList("Lavoro")->addActivity("ara");
    home.searchList("Lavoro")->addActivity("stampare");
    home.searchList("Lavoro")->addActivity("penna");



    return a.exec();
}


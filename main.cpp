
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

    Lavoro.setName_list("Lavoro");
    List Ufficio;
    Ufficio.setName_list("Ufficio");

    home.addList("Lavoro");
    home.addList("Ufficio");

    Activity stampa;
    stampa.setName_activity("stampare");
    Activity penna;
    stampa.setName_activity("penna");
    Activity ara;
    stampa.setName_activity("ara");

    home.searchList("Lavoro")->addActivity("ara");
    home.searchList("Lavoro")->addActivity("stampare");
    home.searchList("Lavoro")->addActivity("penna");



    return a.exec();
}


#include "MedikamenteUi.h"
#include <iostream>
#include "../controller/MedikamenteController.h"
#include <stdio.h>
#include <string>
MedikamenteUi::MedikamenteUi()
{
    this->controller = MedikamenteController();
}

void MedikamenteUi::show_menu(){
    cout<<"\n1. Neues Medikament einfuegen\n2. Findet ein Medikament\n3. Sortieren nach den Namen\n"
          "4. Anzeigen alle Medikamente deren Wert kleiner als eine gegebene Zahl ist\n5. Gruppiert nach den Preis\n"
          "6. Undo\n7. Redo\n8.Loschen\n9.Medikament bearbeiten\n0. Exit";
}

void MedikamenteUi::add_Medikament(){
    string name;
    float konz, preis;
    int menge;
    cout<<"Name: ";
    cin>>name;
    cout<<"Konzentration: ";
    cin>>konz;
    cout<<"Menge: ";
    cin>>menge;
    cout<<"Preis(RON): ";
    cin>>preis;

    controller.add_Medikament(name, konz, menge, preis);
}

void MedikamenteUi::find_by_name_und_konzentration() {
    string name;
    float konz;
    cout<<"Name: ";
    cin>>name;
    cout<<"Konzentration: ";
    cin>>konz;

    controller.find_medikament(name,konz);
}

void MedikamenteUi::Name_sort(){
    string str;
    cout<<"Das Wort, das in den Namen sich befindet: "; cin>>str;
    controller.sort_by_Name_(str);
}

void MedikamenteUi::Menge(){
    float menge;
    cout<<"Es werden die Medikamente geschrieben, deren Menge kleiner als den Folgenden Nummer ist: "; cin>>menge;

    controller.weniger_als_Menge_(menge);
}

void MedikamenteUi::Preis(){
    cout<<"Liste gruppiert nach Preis\n ";
    controller.group_by_Preis();
}

void MedikamenteUi::Undo()
{
    cout<<"Die verfugbaren Medikamente:\n";
    controller.undo_ctrl();
}
void MedikamenteUi::Redo()
{
    cout<<"Die verfugbaren Medikamente:\n";
    controller.redo_ctrl();
}

void MedikamenteUi::Anschreiben()
{
    vector <Medikamente> vec;
    vec = controller.get_medikamente();
    for(auto i=vec.begin();i<vec.end();i++)
        cout<<i->get_Name()<<" "<<i->get_Konzentration()<<" "<<i->get_Menge()<<" "<<i->get_Preis()<<"\n";
}

void MedikamenteUi::Loschen()
{
    string name;
    float konz;
    cout<<"Name eintippen: ";
    cin>>name;
    cout<<"Konzentration eintippen: ";
    cin>>konz;

    controller.delete_elem(name, konz);
}

void MedikamenteUi::Bearbeiten()
{
    string name;
    float konz, preis;
    int menge;
    cout<<"Name: ";
    cin>>name;
    cout<<"Konzentration: ";
    cin>>konz;
    cout<<"neue Menge: ";
    cin>>menge;
    cout<<"neuer Preis(RON): ";
    cin>>preis;

    controller.bearbeiten_ctrl(name,konz,menge,preis);
}

void MedikamenteUi::startUI() {
    int input = -1;
    while (input != 0) {
        show_menu();
        cout<<"\nGeben Sie den Input ein: ";
        cin>>input;
        switch (input) {
            case 1:
                add_Medikament();
                Anschreiben();
                break;
            case 2:
                find_by_name_und_konzentration();
                break;
            case 3:
                Name_sort();
                break;
            case 4:
                Menge();
                break;
            case 5:
                Preis();
                break;
            case 6: {
                Undo();
                Anschreiben();
                break;
            }
            case 7: {
                Redo();
                Anschreiben();
                break;
            }
            case 8: {
                Loschen();
                Anschreiben();
                break;
            case 9: {
                Bearbeiten();
                Anschreiben();
                }
            }


            default:
                break;
        }
    }
}

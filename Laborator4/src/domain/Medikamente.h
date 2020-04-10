//
// Created by Teo on 06.04.2020.
//

#ifndef LABORATOR4_MEDIKAMENTE_H
#define LABORATOR4_MEDIKAMENTE_H
#include <iostream>
using namespace std;

class Medikamente {

private:
    string Name;
    float Konzentration;
    int Menge;
    float Preis;

public:
    //Konstruktor
    Medikamente(string name, float konz, int menge, float preis);

    //Getters
    string get_Name();//Gibt den Namen zuruck
    float get_Konzentration();//gibt die Konzentration zuruck
    int get_Menge();//gibt die Menge zuruck
    float get_Preis();//gibt den Preis zuruck

    //Setters
    void set_Name(string name);//Gibt dem Namen einen Wert
    void set_Konzentration(float konz);//gibt der Konzentration einen Wert
    void set_Menge(int menge);//gibt der Menge einen Wert
    void set_Preis(float preis);//gibt dem Preis einen Wert



};


#endif //LAB4_OLTEANU_TEODORA_MEDIKAMENTE_H

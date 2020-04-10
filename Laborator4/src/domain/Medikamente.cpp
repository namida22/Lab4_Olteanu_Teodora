#include "Medikamente.h"
Medikamente::Medikamente(string name, float konz, int menge, float preis)
{
    this->Name=name;
    this->Konzentration=konz;
    this->Menge=menge;
    this->Preis=preis;
}

string Medikamente::get_Name() {
    return Name;
}

float Medikamente::get_Konzentration() {
    return Konzentration;
}

int Medikamente::get_Menge() {
    return Menge;
}

float Medikamente::get_Preis() {
    return Preis;
}
void Medikamente::set_Name(string name) {
    this->Name=name;
}

void Medikamente::set_Konzentration(float konz) {
    this->Konzentration=konz;
}

void Medikamente::set_Menge(int menge) {
    this->Menge=menge;
}

void Medikamente::set_Preis(float preis) {
    this->Preis=preis;
}

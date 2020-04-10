#include "MedikamenteRepository.h"
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

MedikamenteRepository::MedikamenteRepository()
{
    medikamente={};
}
void MedikamenteRepository::add_Medikament(string name, float konz, int menge, float preis)
{
    update();
    for(auto i = medikamente.begin();i<medikamente.end();i++)
        if(i->get_Name()==name)
            i->set_Konzentration(konz);
    medikamente.emplace_back(Medikamente(name,konz,menge,preis));


}

void MedikamenteRepository::delete_Medikament(string name, float konz)
{
    update();
    for(auto i=0;i<medikamente.size();i++)
        if(name == medikamente[i].get_Name() && konz == medikamente[i].get_Konzentration())
            medikamente.erase(medikamente.begin() + i);
}
vector <Medikamente> MedikamenteRepository::search_Medikament(string name, float konz) {

        /*for(auto & i : medikamente)
            if(i.get_Name()==name && i.get_Konzentration()==konz)
                return i;
        cout<<"Das Medikment existiert nicht";*/
    vector<Medikamente> result = {};
    int found = 0;
    for (Medikamente med : get_all()) {
        if (med.get_Name() == name && med.get_Konzentration() == konz) {
            result.emplace_back(med);
            cout<<"Gefunden!";
            found =1;
        }
    }
    if(found==0)
        cout<<"Das Medikament gibt es nich!";
    return result;

}

vector <Medikamente> MedikamenteRepository::get_all() {
    return medikamente;
}

void MedikamenteRepository::sort_by_Name(string str) {
    vector <Medikamente> vect;
    int ct = 0;
    if(str==".")//gibt den Vektor sortiert an
    {
        for (auto i = medikamente.begin(); i < medikamente.end(); i++)
            vect.emplace_back(Medikamente(i->get_Name(),i->get_Konzentration(),i->get_Menge(),i->get_Preis()));
    }
    else {
        //nur die Elemente die die str Variable enthalt;

        for (auto i = medikamente.begin(); i < medikamente.end(); i++)
            if (i->get_Name().find(str) != std::string::npos)
            {
                vect.emplace_back(Medikamente(i->get_Name(),i->get_Konzentration(),i->get_Menge(),i->get_Preis()));
            }
    }
    for(auto i=vect.begin();i<vect.end()-1;i++)
        for(auto j=i+1;j<vect.end();j++)
            if(i->get_Name()>j->get_Name())
                iter_swap(i,j);
    for(auto i=vect.begin();i<vect.end();i++)
        cout<<i->get_Name()<<" "<<i->get_Konzentration()<<" "<<i->get_Menge()<<" "<<i->get_Preis()<<"\n";

}

void MedikamenteRepository::kleiner_als_Menge(float menge)
{
    for(auto i=medikamente.begin();i<medikamente.end();i++)
        if(i->get_Menge()<menge)
            cout<<i->get_Name()<<" "<<i->get_Konzentration()<<" "<<i->get_Menge()<<" "<<i->get_Preis()<<"\n";
}

void MedikamenteRepository::gruppiert_by_Preis() {

    for(int i=0;i<medikamente.size()-1;i++)
        for(int j=i+1;j<medikamente.size();j++)
            if(medikamente[i].get_Preis()>medikamente[j].get_Preis())
                swap(medikamente[i],medikamente[j]);
    anschreiben();
}

void MedikamenteRepository::update() {
    neues_vektor = medikamente;
}

void MedikamenteRepository::undo() {
    medikamente.swap(neues_vektor);
    undo_var = true;
}

void MedikamenteRepository::redo() {
    if (undo_var)
        undo();
    else
        std::cout << "Mankann kein redo machen" << '\n';
}

void MedikamenteRepository::anschreiben()
{
    for(auto i=medikamente.begin();i<medikamente.end();i++)
        cout<<i->get_Name()<<" "<<i->get_Konzentration()<<" "<<i->get_Menge()<<" "<<i->get_Preis()<<"\n";
}

bool MedikamenteRepository::bearbeiten(const std::string &name, float konz, int menge, float preis) {

    for (auto &i : medikamente)
        if (i.get_Name() == name && i.get_Konzentration() == konz) {
            i.set_Menge(menge);
            i.set_Preis(preis);
            return true;
        }
    return false;
}

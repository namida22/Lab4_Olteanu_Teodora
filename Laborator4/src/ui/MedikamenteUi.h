
#ifndef LABORATOR4_MEDIKAMENTEUI_H
#define LABORATOR4_MEDIKAMENTEUI_H

#include "../controller/MedikamenteController.h"
#include "../domain/Medikamente.h"

class MedikamenteUi {

private:
    MedikamenteController controller;
    static void show_menu();
    void add_Medikament();
    void find_by_name_und_konzentration();//Findet ein Medikament
    void Name_sort();//SOrtiert nach den Namen
    void Menge();// Anschreiben Medikamente kleiner als einen gegebenen Wert
    void Preis();//Gruppiert die mEdikamente nach dem Preis
    void Undo();
    void Redo();
    void Anschreiben();//Schreibt das Medikamenten Vektor an
    void Loschen();//Loscht einen Element
    void Bearbeiten();

public:

    MedikamenteUi();
    /*
     * Starts the UI with menu
     */
    void startUI();
};


#endif //LAB4_OLTEANU_TEODORA_MEDIKAMENTEUI_H

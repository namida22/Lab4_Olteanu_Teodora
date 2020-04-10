//
// Created by Teo on 07.04.2020.
//

#ifndef LABORATOR4_MEDIKAMENTECONTROLLER_H
#define LABORATOR4_MEDIKAMENTECONTROLLER_H
#include "../domain/Medikamente.h"
#include "../repository/MedikamenteRepository.h"

class MedikamenteController {
private:
    MedikamenteRepository repository;
public:
    /*
     * Konstrucktor
     * repository - eine Instanz von MedikamentenRepository
     */
    explicit MedikamenteController();
    /*
     * Fuegt ein Medikament ein
     * Name - Name des Medikaments
     * Konzentration - Wie viel Konzentration einer Substanz ist in das Medikament
     * Menge - Wie viele Stuecke von Medikamenten in einer Folie sind
     * Preis - Wie viel eine Schachtel von Medikamente kostet (in RON)
     */

    // Alle Funktionen benutzen die Funktionen von Repository
    void add_Medikament(string name, float konz, int menge, float preis);

    void delete_elem(string name, float konz);

    vector <Medikamente> find_medikament(const string& name, const float& konz);

    void sort_by_Name_(string str);

    void weniger_als_Menge_(float Menge);

    void group_by_Preis();

    void anschreiben_ctrl();

    vector <Medikamente> get_medikamente();

    void undo_ctrl();

    void redo_ctrl();

    bool bearbeiten_ctrl(const std::string &name, float konz, int menge, float preis);
};


#endif //LAB4_OLTEANU_TEODORA_MEDIKAMENTECONTROLLER_H

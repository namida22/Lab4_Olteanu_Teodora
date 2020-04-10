
#ifndef LABORATOR4_MEDIKAMENTEREPOSITORY_H
#define LABORATOR4_MEDIKAMENTEREPOSITORY_H
#include <vector>
#include "MedikamenteRepository.h"
#include "../domain/Medikamente.h"
using namespace std;

class MedikamenteRepository {

private:
    vector <Medikamente> medikamente, neues_vektor;
    bool undo_var;
public:

    explicit MedikamenteRepository();
/*
     * Fuegt ein Medikament zu der Repository ein
     * Name - Name des Medikamentes
     * Konzentration - Wie viel Konzentration einer Substanz ist in das Medikament
     * Menge - Wie viele Stuecke von Medikamenten in einer Folie sind
     * Preis - Wie viel eine Schachtel von Medikamente kostet (in RON)
     */

    void add_Medikament(string name, float konz, int menge, float preis);
    /*
     * Fuegt ein Objekt vom Typ Medikament in dem Medikamenten Vektor ein
     */

    void delete_Medikament(string name, float konz);
    /*
     * Entfernt ein Objekt vom Typ Medikament von dem Medikamenten Vektor
     * es wird nach den Namen name und nach der Konzentration konz identifieziert
     */

    vector <Medikamente> search_Medikament(string name, float konz);
    /*
     * Sucht ein Objekt vom Typ Medikament mit dem Namen name und mit der Konzentration konz in dem Medikamenten Vektor
     * return - Das Objekt wird zuruckgegeben
     */

    vector<Medikamente> get_all();
    /*
     * return - medikamenten vektor
     */

    void sort_by_Name(string str);
    /*
     * wenn str == "": sortiert den Vektor nach dem Namen
     * wenn str != "" : macht ein neues Vektor, dass alle Objekte speichert, die str in den Namen enthalt
     *                  sortiert dieses Vektor nach dem Namen
     */

    void kleiner_als_Menge(float menge);
    /*
     * Gibt an alle Medikamente Objekte deren menge kleiner als menge ist
     */

    void gruppiert_by_Preis();
    /*
     * Gruppiert den Medikamenten Vektor nach den Preis, in steigender Reihenfolge
     */

    void update();
    /*
     * einen Vektor neues_Vektor bekommt das Medikamenten Vektor, um es zu speicher jeden Mal bevor ein neues Medikament
     * eingefugt wird oder bevor ein Medikament geloscht wird um REDO und UNDO zu machen
     */

    void undo();

    void redo();

    void anschreiben();
    /*
     * schreibt den medikamenten Vektor an
     */

    bool bearbeiten(const std::string &name, float konz, int menge, float preis);
    /*
     * Man kann hier den Preis und die Menge eines Medikaments andern, das der Name name und Konzentration konz hat
     */
};


#endif //LAB4_OLTEANU_TEODORA_MEDIKAMENTEREPOSITORY_H

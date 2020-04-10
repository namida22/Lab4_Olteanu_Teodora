#include "MedikamenteController.h"

MedikamenteController::MedikamenteController(){
    this->repository = MedikamenteRepository();
}

void MedikamenteController::add_Medikament(string name, float konz, int menge, float preis)
{
    repository.add_Medikament(name,konz,menge,preis);
}

void MedikamenteController::delete_elem(string name, float konz)
{
    repository.delete_Medikament(name,konz);
}
vector <Medikamente> MedikamenteController::find_medikament(const string& name, const float& konz) {
    /*vector<Medikamente> result = {};
    for (Medikamente medikamente : repository.get_all()) {
        if (medikamente.get_Name() == name && medikamente.get_Konzentration()==konz) {
            result.emplace_back(medikamente);
        }
    }
    return result;*/
    return repository.search_Medikament(name,konz);
}

void MedikamenteController::sort_by_Name_(string str){
    repository.sort_by_Name(str);
}

void MedikamenteController::weniger_als_Menge_(float Menge){
    repository.kleiner_als_Menge(Menge);
}

void MedikamenteController::group_by_Preis(){
    repository.gruppiert_by_Preis();
}
void MedikamenteController::anschreiben_ctrl()
{
    repository.anschreiben();
}
vector <Medikamente> MedikamenteController::get_medikamente()
{
    return repository.get_all();
}

void MedikamenteController::undo_ctrl()
{
    repository.undo();
}

void MedikamenteController::redo_ctrl()
{
    repository.redo();
}

bool MedikamenteController::bearbeiten_ctrl(const std::string &name, float konz, int menge, float preis)
{
    repository.bearbeiten(name,konz,menge,preis);
}
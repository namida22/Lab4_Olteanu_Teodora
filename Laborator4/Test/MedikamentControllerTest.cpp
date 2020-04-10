#include "../src/controller/MedikamenteController.h"
#include "gtest/gtest.h"

TEST(MedikamenteControllerTest, AddAndFindMedikament) {
MedikamenteController controller = MedikamenteController();

controller.add_Medikament("Paracetamol", 11, 20, 10);

ASSERT_EQ(1, controller.get_medikamente().size());
    for(Medikamente med : controller.find_medikament("Paracetamol",11)) {
        ASSERT_EQ("Paracetamol", med.get_Name());
        ASSERT_EQ(11, med.get_Konzentration());
        ASSERT_EQ(20, med.get_Menge());
        ASSERT_EQ(10, med.get_Preis());
    }
}

TEST(MedikamenteControllerTest, DeleteMedikament) {
    MedikamenteController controller2 = MedikamenteController();

    controller2.add_Medikament("Paracetamol", 11, 20, 10.60);
    controller2.add_Medikament("Ibrupofen", 400, 10, 22);
    ASSERT_EQ(2, controller2.get_medikamente().size());
    controller2.delete_elem("Ibrupofen",400);
    //controller.anschreiben_ctrl();
    ASSERT_EQ(1, controller2.get_medikamente().size());

}
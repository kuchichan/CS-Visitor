#include "ExternalAppearance.hpp"
#include <iostream>

void ExternalAppearance::VisitLevelUp(LevelUp& lvlUp) {
    hairLength_ += 5;
    std::cout << "You look older..." << std::endl;
}

void ExternalAppearance::VisitLootFound(LootFound& lvlUp) {
    /*
       Literally nothing...
    */
}

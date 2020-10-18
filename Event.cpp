#include "Event.hpp"
#include "GameCharacter.hpp"
#include <iostream>

void LevelUp::UpdateStats(GameCharacterStats& stats) {
    stats.AddDexterity(5);
    stats.AddStrength(3);
    stats.AddIntelligence(2);
    AddLevel();
}

void LootFound::UpdateStats(GameCharacterStats& stats) {
    stats.DecrBackpackCount(1);

}

void LevelUp::AddLevel() {
  std::cout << "Something fancy... " << std::endl;
  
}

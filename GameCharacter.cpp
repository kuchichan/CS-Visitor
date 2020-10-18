#include "GameCharacter.hpp"
#include <iostream>

void GameCharacterStats::AddStrength(size_t strength) {
    strength_ += strength;
    std::cout << "Strength added" << std::endl;
}

void GameCharacterStats::AddDexterity(size_t dexterity) {
    dexterity_ += dexterity;
    std::cout << "Dexterity added" << std::endl;
}

void GameCharacterStats::AddIntelligence(size_t intelligence) {
    intelligence_ += intelligence;
    std::cout << "Intelligence added" << std::endl;
}

void GameCharacterStats::DecrBackpackCount(size_t items) {
    backpackCount_ -= items;
    std::cout << "Item added to packpack count" << std::endl;
}

void GameCharacterStats::DisplayStats() {
    std::cout << "Stats are displaying..."
              << "\n"
              << "Str: " << strength_ << '\n'
              << "Dex: " << dexterity_ << '\n'
              << "Int: " << intelligence_ << '\n'
              << "Capacity: " << backpackCount_ << '\n';
}

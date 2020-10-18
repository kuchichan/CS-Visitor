#include "Event.hpp"
#include "GameCharacter.hpp"
#include <iostream>

void LevelUp::Accept(EventVisitor& visitor) {
  visitor.VisitLevelUp(*this);
}

void LootFound::Accept(EventVisitor& visitor) {
  visitor.VisitLootFound(*this);
}

void LevelUp::AddLevel() {
  std::cout << "Something fancy... " << std::endl;
}

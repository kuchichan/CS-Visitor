#pragma once

#include <cstddef>
#include <vector>

#include "EventVisitor.hpp"

// This is in fact operation! (Gathering Character Stats)

class GameCharacterStats : public EventVisitor {
public:
    GameCharacterStats(size_t strength,
                       size_t dexterity,
                       size_t intelligence,
                       size_t backpackCount)
        : strength_(strength),
          dexterity_(dexterity),
          intelligence_(intelligence),
          backpackCount_(backpackCount) {}

    // This could be private or even put directly into Visit

    void AddStrength(size_t strength);
    void AddDexterity(size_t dexterity);
    void AddIntelligence(size_t intelligence);
    void DecrBackpackCount(size_t items);

    void VisitLevelUp(LevelUp& lvlUp) override;          // EventVisitor
    void VisitLootFound(LootFound& lootFound) override;  // EventVisitor

    void DisplayStats();

private:
    size_t strength_;
    size_t dexterity_;
    size_t intelligence_;
    size_t backpackCount_;
};

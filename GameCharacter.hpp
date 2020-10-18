#pragma once

#include <cstddef>
#include <vector>

class GameCharacterStats {
public:
    GameCharacterStats(size_t strength,
                       size_t dexterity,
                       size_t intelligence,
                       size_t backpackCount)
        : strength_(strength),
          dexterity_(dexterity),
          intelligence_(intelligence),
          backpackCount_(backpackCount) {}
    void AddStrength(size_t strength);
    void AddDexterity(size_t dexterity);
    void AddIntelligence(size_t intelligence);
    void DecrBackpackCount(size_t items);
    void DisplayStats();

private:
    size_t strength_;
    size_t dexterity_;
    size_t intelligence_;
    size_t backpackCount_;
};

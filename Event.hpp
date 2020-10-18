#pragma once

#include "GameCharacter.hpp"

// Obvious - class (LevelUp, LootFound) can be bloated, in diffferent files, has very
// little in common...

// Adding New Operation (different that UpdateStats) == new virtual method even if we do
// not want this in some cases! for example UpdateExternalAppearance()

class Event {
public:
    virtual void UpdateStats(GameCharacterStats& stats) = 0;
    virtual ~Event() = default;
};

class LevelUp : public Event {
public:
    void AddLevel();
    void UpdateStats(GameCharacterStats& stats) override;  // Event
};

class LootFound : public Event {
public:
    void UpdateStats(GameCharacterStats& stats) override;  // Event
};

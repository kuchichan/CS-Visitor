#pragma once

#include "GameCharacter.hpp"
class EventVisitor;

// Obvious - class (LevelUp, LootFound) can be bloated, in diffferent files, has very
// little in common...

// Adding New Operation (different that UpdateStats) == new virtual method even if we do
// not want this in some cases! for example UpdateExternalAppearance()

class Event {
public:
    virtual void Accept(EventVisitor& visitor) = 0;
    virtual ~Event() = default;
};

class LevelUp : public Event {
public:
    void AddLevel();
    void Accept(EventVisitor& visitor) override;  // Event
};

class LootFound : public Event {
public:
    void Accept(EventVisitor& stats) override;  // Event
};

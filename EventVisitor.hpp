#pragma once

class LevelUp;
class LootFound;

class EventVisitor {
public:
    virtual void VisitLevelUp(LevelUp& lvlUp) = 0;
    virtual void VisitLootFound(LootFound& lootFound) = 0;
    // similar Events like, CharacterDeath, GuildParticipation ...
};

#pragma once

#include <cstddef>

#include "EventVisitor.hpp"

class ExternalAppearance : public EventVisitor {
public:
    void VisitLevelUp(LevelUp& lvlUp) override;      // EventVisitor
    void VisitLootFound(LootFound& lvlUp) override;  // EventVisitor

private:
    size_t hairLength_;
    size_t muscles_;
};

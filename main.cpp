#include <memory>
#include <vector>

#include "Event.hpp"
#include "GameCharacter.hpp"
#include "ExternalAppearance.hpp"

int main() {
    GameCharacterStats stats{50, 25, 4, 10};
    ExternalAppearance appearance{};
    std::vector<std::shared_ptr<Event>> gameSeq{
        std::make_shared<LootFound>(),
        std::make_shared<LootFound>(),
        std::make_shared<LevelUp>(),
    };

    for (auto& elem : gameSeq) {
        elem->Accept(stats);
	elem->Accept(appearance);
    }
    stats.DisplayStats();
}

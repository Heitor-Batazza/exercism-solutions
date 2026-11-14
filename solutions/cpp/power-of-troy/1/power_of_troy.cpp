#include "power_of_troy.h"

#include <memory>
#include <string>
#include <utility>

using namespace std;

namespace troy {

    void give_new_artifact(struct human& human, const string& name) {
    
        human.possession = make_unique<struct artifact>(name);
        
    }

    void exchange_artifacts(unique_ptr<artifact>& artifactOne, unique_ptr<artifact>& artifactTwo) {
        auto artifactTemp = std::move(artifactOne);
        artifactOne = std::move(artifactTwo);
        artifactTwo = std::move(artifactTemp);
    }

    void manifest_power(struct human& human, const string& effect) {
        human.own_power = make_shared<struct power>(effect);
    }

    void use_power(struct human& humanCaster,struct human& humanTarget) {
        humanTarget.influenced_by = humanCaster.own_power;
    }

    int power_intensity(struct human& human) {
        if (human.own_power) {
            return human.own_power.use_count();
        } else {
            return 0;
        }
    }
    
}  // namespace troy

#pragma once

#include <memory>
#include <string>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {
    std::unique_ptr<struct artifact> possession;
    std::shared_ptr<struct power> own_power;
    std::shared_ptr<struct power> influenced_by;
};

void give_new_artifact(struct human& human, const std::string& name);

void exchange_artifacts(std::unique_ptr<artifact>& artifactOne, std::unique_ptr<artifact>& artifactTwo);

void manifest_power(struct human& human, const std::string& effect);

void use_power(struct human& humanCaster,struct human& humanTarget);

int power_intensity(struct human& human);

}  // namespace troy

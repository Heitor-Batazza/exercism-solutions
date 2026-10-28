#include "doctor_data.h"

namespace heaven {
    Vessel::Vessel(std::string name, int generation) {
        this->name = name;
        this->generation = generation;
        this->busters = 0;
        this->current_system = star_map::Sol;
    }

    Vessel::Vessel(std::string name, int generation, star_map::System system) {
        this->name = name;
        this->generation = generation;
        this->busters = 0;
        this->current_system = system;
    }

    Vessel Vessel::replicate(std::string name) {
        return Vessel(name, this->generation + 1, this->current_system);
    }

    void Vessel::make_buster() {
        this->busters++;
    }

    bool Vessel::shoot_buster() {
        if (this->busters > 0) {
            this->busters--;
            return true;
        }
        return false;
    }

    std::string get_older_bob(Vessel vessel1, Vessel vessel2) {
        if (vessel1.generation < vessel2.generation) {
            return vessel1.name;
        }
        return vessel2.name;
    }

    bool in_the_same_system(Vessel vessel1, Vessel vessel2) {
        return vessel1.current_system == vessel2.current_system;
    }

}


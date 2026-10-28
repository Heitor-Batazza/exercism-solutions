#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
        public:
            int busters;
            std::string name;
            int generation;
            star_map::System current_system;
            Vessel(std::string name, int number);
            Vessel(std::string name, int number, star_map::System system);
            Vessel replicate(std::string name);
            void make_buster();
            bool shoot_buster();
    };
    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);
}

#endif

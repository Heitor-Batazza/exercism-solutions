#include <iostream>

bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    bool output = power_pellet_active && touching_ghost;
    return output;
}

bool scored(bool touching_power_pellet, bool touching_dot) {
    bool output = touching_power_pellet || touching_dot;
    return output;
}

bool lost(bool power_pellet_active, bool touching_ghost) {
    bool output = !power_pellet_active && touching_ghost;
    return output;
}

bool won(bool has_eaten_all_dots, bool power_pellet_active, bool touching_ghost) {
    bool output = has_eaten_all_dots && !(!power_pellet_active && touching_ghost);
    return output;
}

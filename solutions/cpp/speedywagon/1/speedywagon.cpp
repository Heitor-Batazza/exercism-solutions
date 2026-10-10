#include "speedywagon.h"

namespace speedywagon {

bool connection_check(pillar_men_sensor* pointer) {
    if (pointer) {
        return true;
    } else {
        return false;
    }
}

int activity_counter(pillar_men_sensor* arraySensors, int arrayCapacity) {
    int totalActivity = 0;
    for (int i = 0; i < arrayCapacity; i++) {
        totalActivity += (arraySensors + i)->activity;
    }
    return totalActivity;
}

bool alarm_control(pillar_men_sensor* pointer) {
    if (!pointer || (pointer->activity <= 0)) {
        return false;
    } else {
        return true;
    }
}

bool uv_alarm(pillar_men_sensor* pointer) {
    if (!pointer) {
        return false;
    }
    
    return pointer->activity < uv_light_heuristic(&pointer->data);
}

int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon

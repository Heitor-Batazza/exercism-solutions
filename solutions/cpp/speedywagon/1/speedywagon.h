#pragma once

#include <string>
#include <vector>

namespace speedywagon {

struct pillar_men_sensor {
    int activity{};
    std::string location{};
    std::vector<int> data{};
};

bool connection_check(pillar_men_sensor* pointer);
int activity_counter(pillar_men_sensor* arraySensors, int arrayCapacity);
bool alarm_control(pillar_men_sensor* pointer);
bool uv_alarm(pillar_men_sensor* pointer);


int uv_light_heuristic(std::vector<int>* data_array);

}  // namespace speedywagon

#include <array>
#include <string>
#include <vector>
#include <cmath>

std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> new_vector = {};
    for (int i = 0; i < student_scores.size(); i++) {
        new_vector.push_back(std::floor(student_scores[i]));
    }
    return new_vector;
}

int count_failed_students(std::vector<int> student_scores) {
    int count = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) {
            count++;
        }
    }
    return count;
}

std::array<int, 4> letter_grades(int highest_score) {
    int interval = std::floor((highest_score - 44)/4);
    std::array<int, 4> output = {};
    int base = 41;
    for (int i = 0; i < 4; i++) {
        output[i] = base;
        base += interval + 1;
    }
    return output;
}

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> output;
    std::string output_element;
    for (int i = 0; i < student_scores.size(); i++) {
        output_element = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
        output.push_back(output_element);
    }
    return output;
}

std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}

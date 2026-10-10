#include "allergies.h"
#include <string>
#include <unordered_set>
#include <bitset>

namespace allergies {

    allergy_test::allergy_test(int number) {
        allergentNumber = number;
    }

    bool allergy_test::is_allergic_to(std::string allergent){
        std::unordered_set<std::string> allergents = this->get_allergies();
        if (allergents.count(allergent) > 0) {
            return true;
        } else {
            return false;
        }
    }

    std::unordered_set<std::string> allergy_test::get_allergies(){
        std::unordered_set<std::string> output = {};

        std::bitset<8> numberBinary(this->allergentNumber); 
        std::string stringBinary = numberBinary.to_string();

        if (stringBinary[stringBinary.size() - 1] == '1') {
            output.insert("eggs");
        } if (stringBinary[stringBinary.size() - 2] == '1') {
            output.insert("peanuts");
        }  if (stringBinary[stringBinary.size() - 3] == '1') {
            output.insert("shellfish");
        } if (stringBinary[stringBinary.size() - 4] == '1') {
            output.insert("strawberries");
        } if (stringBinary[stringBinary.size() - 5] == '1') {
            output.insert("tomatoes");
        } if (stringBinary[stringBinary.size() - 6] == '1') {
            output.insert("chocolate");
        } if (stringBinary[stringBinary.size() - 7] == '1') {
            output.insert("pollen");
        } if (stringBinary[stringBinary.size() - 8] == '1') {
            output.insert("cats");
        }

        return output;

    }
}

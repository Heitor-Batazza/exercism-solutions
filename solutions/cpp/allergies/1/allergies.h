#pragma once
#include <string>
#include <vector>
#include <unordered_set>


namespace allergies {

class allergy_test {
    private:
        int allergentNumber;
    public:
        allergy_test(int number);
    
        bool is_allergic_to(std::string allergent);
    
        std::unordered_set<std::string> get_allergies();

};

} 

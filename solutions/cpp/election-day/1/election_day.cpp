#include <string>
#include <vector>

namespace election {


struct ElectionResult {

    std::string name{};

    int votes{};
};

int vote_count(ElectionResult& person) {
    return person.votes;
}

void increment_vote_count(ElectionResult& person, int newVotes) {
    person.votes += newVotes;
}

ElectionResult& determine_result(std::vector<ElectionResult>& people) {
    int winnerIndex = 0;

    for (int i = 1; i < people.size(); i++) {
        if (people[i].votes > people[winnerIndex].votes) {  
            winnerIndex = i;
        }
    }

    people[winnerIndex].name = "President " + (people[winnerIndex]).name;
    
    return people[winnerIndex];
}

}  // namespace election

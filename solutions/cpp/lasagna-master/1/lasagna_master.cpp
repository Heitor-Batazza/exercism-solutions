#include "lasagna_master.h"

using namespace std;

namespace lasagna_master {

int preparationTime(const vector<string>& layers, int preparationTime) {
    return layers.size() * preparationTime;
}

struct amount quantities(const vector<string>& layers) {
    struct amount output;
    int sauceLayers = 0;
    int noodlesLayers = 0;

    for (const string& layer : layers) {
        if (layer == "sauce") {
            sauceLayers++;
        } else if (layer == "noodles") {
            noodlesLayers++;
        }
    }
    
    output.sauce = 0.2 * sauceLayers;
    output.noodles = 50 * noodlesLayers;

    return output;
}

void addSecretIngredient(vector<string>& myList, const vector<string>& friendsList) {
    myList[myList.size() - 1] = friendsList[friendsList.size() - 1]; 
}

void addSecretIngredient(vector<string>& myList, const string secretIngredient) {
    myList[myList.size() - 1] = secretIngredient; 
}

vector<double> scaleRecipe(const vector<double>& quantities, const int portions) {
    vector<double> newQuantities;

    for (const double& quantity : quantities) {
        newQuantities.push_back(quantity * portions / 2);
    }

    return newQuantities;
}

}  // namespace lasagna_master

#include <iostream>
#include <vector>

using namespace std; 

int main(){
    const long int numCombinations = 1E4;
    double baseProbability = 1;
    double probability = baseProbability;
    int numPasswords = 0;

    //passwords
    vector <int> password1;
    vector <int> password2;

    //reading passwords

    char digit;
    for (int i=0; i<4; i++){cin>>digit; password1.push_back(digit - 48);}
    for (int i=0; i<4; i++){cin>>digit; password2.push_back(digit - 48);}

    for (int i=0; i<4; i++){
        if (password1.at(i) == password2.at(i)) probability *= 0.1;
        else probability *= 0.2;
    }
    numPasswords = (probability/baseProbability)*numCombinations;

    cout << numPasswords <<endl;

    return 0;
}

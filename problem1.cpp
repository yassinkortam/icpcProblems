#include <iostream>
#include <vector>

using namespace std; 

int main(){

    double baseProbability = 1;
    double probability = baseProbability;
    int numPasswords;

    //passwords
    vector <int> password1;
    vector <int> password2;

    //reading passwords
    int digit;
    for (int i=0; i<4; i++){cin>>digit; password1.push_back(digit);}
    for (int i=0; i<4; i++){cin>>digit; password2.push_back(digit);}

    for (int i=0; i<4; i++){
        if (password1.at(i) == password2.at(i)) probability *= 0.1;
        else probability *= 0.2;
    }

    numPasswords = probability/baseProbability;

    cout << numPasswords <<endl;

}
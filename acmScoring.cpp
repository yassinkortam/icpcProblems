
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){

    unordered_map <string, int> unsolvedProblems;
    int timescore = 0;
    int numcorrect = 0;

    int time;
    string problem;
    string correct;

    while (true){

        cin >> time; if (time == -1) break;
        cin >> problem; if (problem == "-1") break;
        cin >> correct; if (correct == "-1") break;

        if (correct == "right"){
            if (unsolvedProblems.find(problem) == unsolvedProblems.end()){
                timescore += time;
                numcorrect++;
            }
            else{
                timescore += unsolvedProblems[problem] + time;
                numcorrect++;
            } 
        }

        else if (correct == "wrong"){
            if (unsolvedProblems.find(problem) == unsolvedProblems.end()){
                unsolvedProblems[problem] = 20;
            }
            else{
                unsolvedProblems[problem] += 20;
            }
        }

    }
    cout << numcorrect << " " << timescore;
}
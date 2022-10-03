#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int findClosestCup(int target, vector<int> cups){
    int radius = 0;
    int left;
    while (target - radius >= 0 && target + radius < cups.size()){
        left = cups[target - radius];
        if (left != -1) return left;
        radius++;
    }
    return -1;
}

int main(){

    vector <int> cups;
    
    int numCups;
    int target;
    int tempTarget;
    int waterMoved = 0;

    cin >> numCups;

    for (int cup = 0; cup < numCups; cup++){

        int capacity;
        cin >> capacity;

        while (cups.size() < capacity + 1) cups.push_back(-1);

        cups[capacity] = capacity;
    }

    cin >> target;

    if (cups.size() >= target){
        if (cups[target] == target){
            cout << target;
        }
    }

    tempTarget = target;
    while (true){
        int smaller = findClosestCup(tempTarget, cups);
        if (smaller == -1){cout << "impossible"; return 0;}

        waterMoved += smaller;
        tempTarget -= smaller;
        
         

    }
}
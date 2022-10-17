#include <iostream>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

int main(){
  int n;
  int k;
  int rounds;
  int numClose = 0;
  set<int> ratings;
  vector<int> ratingsL;

  cin>>n>>k;
  rounds = pow(2,n);

  for (int i=0; i<rounds; i++){
    int rating;
    cin >> rating;
    if (ratings.find(rating) != ratings.end()) numClose++;
    else{ratings.insert(rating); ratingsL.push_back(rating);}
  }

  for (auto rating : ratingsL){
    ratings.erase(rating);

    for (int i=0; i<=k; i++){
      int higher = rating - i;
      int lower = rating + i;
      if (ratings.find(higher) != ratings.end()){
        numClose++;
        //ratings.erase(higher);
        //cout << "matched " << higher << " with " << rating << endl;
        break;
      }
      if (ratings.find(lower) != ratings.end()){
        numClose++; 
        //ratings.erase(lower);
        //cout << "matched " << lower << " with " << rating << endl;
        break;}
    }
  }

  cout << numClose;
  return 0;
}

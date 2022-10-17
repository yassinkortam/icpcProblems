#include <iostream>

using namespace std;

int main(){
  const long int itr = 1E7;
  int N;
  cin >> N;
  int bins[N];
  int p[3*N];
  for (int i=0; i<3*N; i++) cin>>p[i];
  for (int i=0; i<N; i++) bins[i] = 0;

  int j = 0;
  double avgmoney = 0;
  while (j < itr){
    
    int money = 0;
    int i = 0;
    while(i < 3*N){

      //pick a random bin
      int bin = rand() % N;

      //increment balls in bin
      bins[bin]++;

      //optimal since always quitting before losing
      if(bins[bin] > 3) break;
      else money += p[i];

      i++;
    }
    //resetting bins for next simulation
    for (int i=0; i<N; i++) bins[i] = 0;

    //keeping track of money
    avgmoney += money;

    //iterate simulation
    j++;
  }

  avgmoney /= itr;

  cout << avgmoney;

}

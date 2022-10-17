#include <iostream>

using namespace std;

int main(){
  
  int G, T, N;
  int itemsWeight=0;
  int W;

  cin >> G;
  cin >> T;
  cin >> N;
  int item;
  for (int i=0; i<N; i++){cin>>item; itemsWeight += item;}

  W = 0.9*(G - T) - itemsWeight;

  cout << W;

}

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  int n;
  vector <vector<int>> queries;
  set<int> b;

  cin >> n;
  int a;
  for (int i=0; i<n; i++){cin>>a; b.insert(a);}
  int q;
  for (int r=0; r<q; r++){
    int i, m;
    vector <int> query;
    cin >> i;
    cin >> m;
    query.push_back(i);
    query.push_back(m);

    for (int s=0; s<m; s++){
      int myint;
      cin >> myint;
      query.push_back(myint);



    }

  }

}

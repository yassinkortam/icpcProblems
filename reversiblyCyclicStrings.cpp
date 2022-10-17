#include <iostream>
#include <string>

using namespace std;

string reverse(string s){
  string reversed = "";
  for (int i=s.length()-1; i >= 0; i--){
    reversed += s[i];
  }
  return reversed;
}

int main(){
  string s, r;

  cin >> s;
  if (s.length() < 2){cout << 0; return 0;}
  r = reverse(s);

  for (int i=1; i<r.length(); i++){
    if (r[i] != s[i-1]){cout << 0; return 0;}
  }

  cout << 1;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int N = 0, mn = 0, mc;
  for(int i = 0; i < 9; i++){
    cin >> N;
    if(N > mn){
      mn = N;
      mc = i + 1;
    }
  }
  cout << mn << endl << mc;
  return 0;
}
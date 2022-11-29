#include <iostream>
using namespace std;

int main() {
  float arr[1000] = {0}, n, max = -1, t, total = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> t;
    arr[i] = t;
    if(t > max) max = t;
  }
  for(int i = 0; i < n; i++){
    arr[i] = arr[i] / max * 100;
    total += arr[i];
  }
  cout << fixed;
  cout.precision(6);
  cout << (float)total/ n;
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int arr[31] = {0}, n;
  for(int i = 0; i < 28; i++){
    cin >> n;
    arr[n]++;
  }
  for(int i = 1; i <= 30; i++){
    if(arr[i] == 0) cout << i << endl;
  }
  return 0;
}
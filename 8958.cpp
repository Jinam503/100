#include <iostream>
using namespace std;

int main() {
  int N, cnt = 0, combo = 1;
  char arr[80];
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> arr;
    for(int j = 0; arr[j] != '\0'; j++){
      if(arr[j] == 'O'){
        cnt += combo;
        combo++;
      }
      else combo = 1;
      if(arr[j+1] == '\0'){
        cout << cnt << endl;
        cnt = 0;
        combo = 1;
      }
    }
  }
  
  return 0;
}
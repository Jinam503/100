#include <iostream>
using namespace std;

int main() {
  float N, arr[1000], t, total = 0, a = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> t;
    for(int j = 0; j < t; j++){
      cin >> arr[j];
      total += arr[j];
    }
    total /= t;
    for(int j = 0; j < t; j++){
      if(arr[j] > total) a++;
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    float f = a / t * 100;
    cout << f << "%" << endl;
    total = 0;
    t = 0; a = 0;
  }
  
  return 0;
}
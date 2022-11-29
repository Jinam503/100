#include <iostream>
using namespace std;

int main(){
    int n, arr[1000000], max = -9999999, min = 9999999;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    cout << min <<" "<< max;
    
    return 0;
}
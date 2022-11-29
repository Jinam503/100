#include <iostream>
using namespace std;

int main(){
    int n, arr[100], m, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> m;
    for(int i = 0; i < n; i++){
        if(arr[i] == m){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
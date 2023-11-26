#include<iostream>
using namespace std;

int main(){
    int n , x;
    cin >> n;
    cin >> x;
    int ans;

    int arr[n];
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
        if(arr[i] == x){
            ans = i;
            break;
        }else{
            ans = -1;
        }
    }
    cout << ans;
}
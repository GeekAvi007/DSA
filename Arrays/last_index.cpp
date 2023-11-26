#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
   int n;
   int x;
   cin >> x;
   cin >> n;
    int arr[n]; 
   int ans;
   for(int i = 0; i<n; i++){
       cin >> arr[i];
    }
    for(int i = n-1; i > 0; i-- ){
        if (arr[i]==x){
            ans = i;
            break;
        }else{
            ans = -1;
        }   
    }
    cout << ans;
}
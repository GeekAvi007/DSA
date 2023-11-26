#include<iostream>
using namespace std;

int duplicates(int num[] , int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans ^ num[i];
    }
    for(int i = 0; i<n; i++){
        ans = ans ^ i;
    }
    for(int count = 1; count <=n; count++){
        if(count == 2){

        }
    
}
}

int main(){
     
     int n;
     cin >> n;
     int num[100];
     for(int i=0;i<n;i++){
        cin >> num[i];
     }
     cout << duplicates(num,n);

}
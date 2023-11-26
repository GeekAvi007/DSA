#include<iostream>
using namespace std;

bool occurance(int arr[],int n){

    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }if(ans==0){
        cout << "False";
    }else{
        cout << "True";
    }
}

int main(){

    int arr[10]={-3,0,1,-3,1,1,1,-3,10,0};
    int ans = occurance(arr,10);
    cout << ans;

}
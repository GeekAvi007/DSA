#include<iostream>
using namespace std;

void print_array(int num[] , int n){
    for(int i=0;i<n;i++){
        cout << num[i] << " ";
    }
}

void swap_alternate( int num[] , int n){
    for(int i = 0; i<n; i+=2){
        if (i+1 < n){
            swap(num[i],num[i+1]);
           
        }
    }
}

int main(){

    int n;
    cin >> n;
    int arr[100];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    swap_alternate(arr,5);
    print_array(arr,5);

}
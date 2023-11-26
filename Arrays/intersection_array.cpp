#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int intersection(int arr1[],int n,int arr2[],int m){
    int ans = 0;
    for (int i = 0; i < n; i++){
        int element = arr1[i];
    for(int j = 0 ; j < m; j++){
        if(element == arr2[j]){
            ans = arr2[j];
        }
    }
 }
    return ans;
}
int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {5,6,7,8,9};
    cout << "Duplicate is :" << intersection(arr1,5,arr2,5);
}
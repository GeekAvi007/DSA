#include<iostream>
using namespace std;

int pairsum(int arr[], int n, int target){

  for(int i = 0; i<n; i++){

    for(int j = i+1; j<n; j++){

      if(arr[i] + arr[j] == target){

        cout << arr[i] << " " << arr[j];
      }
    }
  }
}
int main(){
   int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 10;
    int arr_size = sizeof(A) / sizeof(A[0]);
    int res = pairsum(A, arr_size, sum);
    return res;
}
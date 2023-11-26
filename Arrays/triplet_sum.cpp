#include<iostream>
using namespace std;

int triplet(int arr[],int n,int target){

    for(int i = 0;i<n;i++){

        for (int j = i+1; j<n; j++){

            for(int k = j+1; k<n ; k++){

                if (arr[i]+arr[j]+arr[k] == target){

                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                }
            }
        }
    }
}
int main(){
    
   int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 20;
    int arr_size = sizeof(A) / sizeof(A[0]);
    int res = triplet(A, arr_size, sum);
    return res;
}
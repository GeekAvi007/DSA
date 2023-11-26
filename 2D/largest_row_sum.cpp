#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[][3],int i,int j){

    int max = INT_MIN;
    int rowindex = -1;
    // printing sum of row
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            
            sum += arr[i][j];
        }
    // comparing row sums to find which is larger
        if(sum > max){
            max = sum;
            rowindex = i;
        }
        
    }
    cout << "The Maximum sum is " << max << endl;
    return rowindex;
}

int main(){
    int arr[3][3];

// taking row wise input
    cout << "Enter The Elements :" << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }
// printing the array row wise
    cout << "Printing The Elements :" << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    int ans = largest(arr,3,3);
    cout << "Max rowsum is at : " << (ans+1) ;
}
#include<iostream>
using namespace std;

void printsum(int arr[][3] , int i , int j){
    cout << "Printing Sum -> " << endl;
     for(int j = 0; j<3; j++){
        int sum = 0;
        for(int i = 0; i<3; i++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main(){

    int arr[3][3];

    cout << "Enter The Elements :" << endl;
    for(int j = 0; j<3; j++){
        for(int i = 0; i<3; i++){
            cin >> arr[i][j];
        }
    }
    cout << "Printing The Elements :" << endl;
    for(int j = 0; j<3; j++){
        for(int i = 0; i<3; i++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    printsum(arr,3,3);
}


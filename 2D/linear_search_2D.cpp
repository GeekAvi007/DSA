#include<iostream>
using namespace std;

int search( int arr[][4] , int i , int j , int target){

    for(i = 0 ; i<3 ; i++){
        for(j = 0 ; j<4 ; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];

    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<4 ; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    int target;
    cout << "Enter The Elements to be searched : " << endl;
    cin >> target;

    if(search(arr,3,4,target)){
        cout << "Element Found" << endl;
    }else{
        cout << "Element not found" << endl;
    }
    
}




























































































/*int search(int arr[][4] , int target , int i , int j){
    for(int i =0 ; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];

    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;

    if(search(arr , target , 3 ,4)){
        cout << "Element found" << endl;
    }else{
    cout << "Not Found";
    }

}*/
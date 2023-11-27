#include<iostream>
using namespace std;
int main(){

    int arr[10] = {2,3,99,88,6,7,8};
    cout << "Address of 1st memory block : " << arr << endl;
    cout << "Address of 1st memory block : " << arr[0] << endl;
    cout << "Address of 1st memory block : " << &arr << endl;
    cout << "Address of 1st memory block : " << &arr[0] << endl;
    cout << "Address of 1st memory block : " << *arr << endl;
    cout << "Address of 1st memory block : " << *arr+3 << endl;
    cout << "Address of 1st memory block : " << *(arr)+88 << endl;

    int i = 3;
    cout << i[arr] << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr) << endl;
    cout << sizeof(&arr) << endl;
    int *p = &arr[0] ;
    cout << sizeof(p)<<endl;
    cout << sizeof(*p)<<endl;
    cout << sizeof(&p)<<endl;


    int b[20] = {1,2,3,4,5};
    cout << &b << endl;

    int *pt = &b[0];
    cout << pt << endl;
    cout << *pt << endl;
    cout << "-> "<< &pt << endl;


    
    return 0;
}
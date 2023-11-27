#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[5] = "tbde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = "tbde8";
    cout <<"With Star : "<< *c << endl;
    cout <<"Without star : "<< c << endl;
}
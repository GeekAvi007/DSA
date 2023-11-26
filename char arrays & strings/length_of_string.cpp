#include<iostream>
using namespace std;

int lenght(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout << "Enter Your name : " << endl;
    cin >> name;

    cout << "Length of String is : " << lenght(name) << endl; 
}
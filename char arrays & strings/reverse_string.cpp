#include<iostream>
using namespace std;

void rev(char name[],int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        swap(name[s++],name[e--]);
    } 
}
int len(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout << "Enter Name :" << endl;
    cin >> name;

    int size = len(name);
    rev(name,size);
   cout << "Your name is :" << name << endl;
}
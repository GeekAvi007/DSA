#include<iostream>
using namespace std;

int pal(char a[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(a[start]!=a[end]){
            cout << "No its not palimdrome" << endl;
            break;
        }
        else
        {
            cout << "Yes it is a palinmdrome" << endl;
            start++;
            end--;
            break;
        }
    }
    //return 0;
    
}

int main(){
    int n;
    cout << "Enter size of string :" << endl;
    cin >> n;
    char check[n];
    cout << "Enter the string :" << endl;;
    cin >> check;
    cout << pal(check,n) << endl;
    return 0;

}
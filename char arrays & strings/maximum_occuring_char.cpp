#include<iostream>
using namespace std;

char getmax(string text)
{
    int arr[26] = {0};
    for(int i = 0; i<text.length();i++){
        char ch = text[i];
        int count = 0;
        count = ch - 'a';
        arr[count]++;
    }
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    
    return 'a'+ans;
}
int main(){

    string s;
    cin >> s;
    cout << getmax(s) << endl;
}
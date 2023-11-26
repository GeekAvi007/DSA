#include<iostream>
using namespace std;

void wave(int arr[][4], int mcols, int nrows) {
    for(int j = 0; j < mcols; j++) {
        if(j & 1) {
            for(int i = nrows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        } else {
            for(int i = 0; i < nrows; i++) {
                cout << arr[i][j] << " ";
            }cout << endl;
        }
    }
}

int main() {
    int arr[3][4];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    wave(arr, 4, 3);
    return 0;
}

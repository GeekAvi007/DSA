#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        if (n % 3 == 0 && n % 9 != 0) {
            cout << n ;
            break;
        }
    }
    return 0;
}

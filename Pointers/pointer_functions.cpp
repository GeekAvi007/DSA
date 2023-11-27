#include <iostream>
using namespace std;

int print(int *p)
{
    cout << *p << endl;
    cout << sizeof(&p) << endl;
}

void update(int *p)
{
    *p = *p + 1;
    cout << "Inside : " << *p << endl;
}

int getsum(int *arr[],int n)
{
    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0 ; i<=n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}
int main()
{

    int value = 5;
    int *p = &value;

    print(p);
    update(p);

    int arr[5] = {1,2,3,4,5};
    getsum(arr,5);
}




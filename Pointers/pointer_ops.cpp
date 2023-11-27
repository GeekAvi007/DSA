#include<iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    p += 1;
}
int main()
{
 
    // cout << "Address of 1st block is : " << &arr[0] << endl;
    // cout << arr[0] << endl;
    // cout << "Address of 1st block is : " << arr << endl;
    // cout << "Address of 9th block is : " << arr[9] << endl;
    // cout << "4th " << (*arr) << endl;
    // cout << *(arr+2)<<endl;
    // int i = 2;
    // cout << "OR" << endl << i[arr]; not error (MCQ)

    // int arr[10]= {1,2};
    // cout << sizeof(arr) << endl;
    // cout << sizeof(*arr) << endl;
    // cout << sizeof(&arr) << endl;

    // cout << "---" << endl;

    // int *ptr = &arr[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    // int a[20] = {1,2,3,4};
   
    // cout <<"1 " << &a[0] << endl;
    // cout <<"---" << endl;
    // cout << &a << endl;
    // cout << "---" << endl;
    // cout << a << endl;
    // cout << "---" << endl;
    // int *ptr = &a[0];
    // cout << ptr << endl;
    // cout << "---" << endl;
    // cout << *ptr << endl;
    // cout << "---" << endl;
    // cout << &ptr << endl;
    // cout << "---" << endl;

// symbol table cannot be changed
    // int arr[10];
    // int *p = &arr[10];
    // cout << p << endl;
    // p = p + 1;
    // cout << p << endl;

// CHARACTER ARRAYS

    // int arr[5] = {1,2,3,4,5};
    // //char ch[5] = "abcd";
    // cout << arr << endl;
    // cout << ch << endl; // implementation of cout is different in case of char arrays

    // char *c = &ch[0];
    // cout << c << endl;
    // cout << *arr << endl;
    // cout << &arr << endl;
    // char temp = 'z';
    // char *p = &temp;
    // cout << p << endl;
    // char ch[6] = "abcde";
    // char *c = "abcde"; // never do this ->
    // cout << ch << endl;
    // cout << " -- "<< endl;
    // cout << c << endl;


// PASSING FUNCTIONS

    int val = 5;
    int *p = & val;
    cout << "Before -> " << p << endl;
    update(p);
    cout << "After -> " << p << endl;


    return 0;
}
#include<iostream>
using namespace std;

int main(){

//     // int *p = 0;

//     // cout << *p << endl;

//     int i = 5;
//     //int *p = &i;
//     int *p = 0;
//     p = &i;

//     cout << p;

//     return 0;
// }


// int num = 5;
// int a = num;
// a++;

// //cout << num ;

// int *p = &num;
// cout << "Before" <<  *p << endl;
// (*p)++;
// cout << "After" <<*p << endl;

// // copying a pointer
// int *q = p;
// cout << p << " - " << q << endl;
// cout << *p << " - " << *q << endl;

// important concept

// int i = 4;
// int *t = &i;
// // cout <<  << endl;
// *t = *t+1;

// cout << *t << endl;
// cout << "Before t " << t << endl;
// t = t + 1;
// cout << "after t" << t << endl
// double d = 8.8;
// double *pd = &d;
// int num = 5;
// int *p = &num;
// cout << p << endl;
// cout << *p << endl;
// cout << sizeof(p) << endl;
// cout << sizeof(*p) << endl;
// cout << sizeof(num) << endl;
// cout << sizeof(d) << endl;
// cout << sizeof(*pd) << endl;
// int *garb=0;
// //cout << garb ;
// cout <<"is seg ?" <<*garb ;
// int i = 5;
// int *p = 0;
// p = &i;

// // cout << *p << endl;
// int num = 6;
// int *p = &num;

// cout << p << endl;
// num++;
// cout << p<< endl;
// cout << *p<< endl;
// ++num;
// cout << p << endl;
// cout << *p << endl;

// cout << "see :"<< *p++ << endl;
// cout << "see :"<< p++ << endl;

// int *q = p;
// cout <<"p : " <<p << endl;
// cout << "p star : " <<*p << endl;
// cout << "q:" <<q << endl;
// cout <<"q star : " <<*q << endl;
int i = 7;
int *t = &i;
// cout << (*t)++;
*t = *t + 1;
cout << *t << endl;
cout << t << endl;
t = t + 1;
cout << t << endl;
}
#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a(&a) is "<<&a<<endl;
    cout<<"The address of a(b) is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b(*b) is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b(&b) is "<<&b<<endl;
    cout<<"c(&b) is "<<c<<endl; 
    cout<<"The value at address c(*c) is "<<*c<<endl; 
    cout<<"The value at value at address c(**c) is "<<**c<<endl; 

    return 0;
}

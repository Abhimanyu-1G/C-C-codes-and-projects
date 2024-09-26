#include<iostream>
using namespace std;

int c=45; //this is a global variable
int main(){
int a,b,c;
cout<<"value of a:  "<<endl;
cin>>a;
cout<<"value of b:  "<<endl;
cin>>b;

c=a+b;
cout<<"c=a+b is:"<<c<<endl;
//"::c" means this is talking about the global value
cout<<"the global value of c is: "<<::c<<endl;
   float d=34.4;
   long double e=34.4;
 //number ke last me 'f' lagane se iski value float hojati hai
 //agar last me 'l' lagao to vo long double do jayegi
 //*********reference variables*********
 int x=3;
 int&y=x;
 cout<<"the value of x is"<<x<<endl;
 cout<<"the value of y is"<<y<<endl;
//*******typecasting**********used to change the datatypes of variables 
    int g = 45;   
    float h = 45.46;
    cout<<"The value of g is "<<(float)g<<endl;
    cout<<"The value of g is "<<float(g)<<endl;

    cout<<"The value of h is "<<(int)h<<endl;
    cout<<"The value of h is "<<int(h)<<endl;
    int j = int(h);

    cout<<"The expression is "<<g + h<<endl;
    cout<<"The expression is "<<g + int(h)<<endl;
    cout<<"The expression is "<<g + (int)h<<endl;

     return 0;
}
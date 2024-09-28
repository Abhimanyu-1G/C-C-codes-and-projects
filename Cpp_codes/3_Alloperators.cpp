#include<iostream>

using namespace std ;
int main(){
int a=5,b=6;
//arithematic operators 
cout<<"this is the value of a+b : "<<a+b<<endl;
cout<<"this is the value of a-b : "<<a-b<<endl;
cout<<"this is the value of a*b : "<<a*b<<endl;
cout<<"this is the value of a/b : "<<a/b<<endl;
cout<<"this is the value of a%b : "<<a%b<<endl;
//Comparision operators
cout<<"this is the value of a==b : "<<(a==b)<<endl;
cout<<"this is the value of a<b : "<<(a<b)<<endl;
cout<<"this is the value of a>b : "<<(a>b)<<endl;
cout<<"this is the value of a<=b : "<<(a<=b)<<endl;
cout<<"this is the value of a>=b : "<<(a>=b)<<endl;
cout<<"this is the value of a!=b : "<<(a!=b)<<endl;
cout<<endl;
//logical operators "&&" and "||" "&&=and" and "||= or" "!=not"
cout<<"this is the logical value of (a==b)&&(a<b) : "<<((a==b)&&(a<b))<<endl;
cout<<"this is the logical value of (a==b)||(a<b) : "<<((a==b)||(a<b))<<endl;
cout<<"this is the logical value of !(a==b) : "<<(!(a==b))<<endl;


    return 0;
}
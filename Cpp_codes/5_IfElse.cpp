//Asking the age with help of if else statements
#include<iostream>

using namespace std;

int main(){
int age;
cout<<"What is your age?"<<endl;
cin>>age;
if ((age<18)&&(age>1)){
    cout<<"You cannot access this content."<<endl;
}
else if (age==18){
    cout<<"You are a kid and will get limeted access."<<endl;
}
else if (age<=1){
    cout<<"Are you taking me for fool.Go back."<<endl;
}
else {
    cout<<"You have full access to the content."<<endl;
}
   return 0;
}
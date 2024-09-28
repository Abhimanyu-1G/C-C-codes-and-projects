#include<iostream>
using namespace std;
//****creating a function and using protofunctions****/
// type name(arguments){code};
// function which is created below main function can be implemented before itself by using protofunction
// you do not have to put return in end of the function
int sum(int a,int b);//this is proto function it makes a declaration of the func to main func

int sum(int a,int b){
    int c = a+b;

    }

int main(){
    int num1,num2;
    cout<<"Enter number 1-->"<<endl;
    cin>>num1;
    cout<<"Enter number 2-->"<<endl;
    cin>>num2;
    cout<<"The sum is--> "<<sum(num1,num2)<<endl;
    
    return 0;
}

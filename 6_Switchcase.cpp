//***********************SWITCH-CASE statements****************************

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Whats your age?"<<endl;
    cin>>age;

switch (age)//after one case if true all other are ignored 
{
case 18:
    cout<<"You are 18 and will have limeted access."<<endl;
    break;//break is important so that the system doesnt run the later codes if this case is satisfied.
case 20:
    cout<<"You are 20 and will have full access to the content."<<endl;
    break;
case 5:
    cout<<"You are 5 y/o why are you here?"<<endl;
    break;

default:
cout<<"your age is not a special case."<<endl;
    break;
}
cout<<"the switch case ends here."<<endl;//this sataement is out of the switch case.

    return 0;
}
#include<iostream>
using namespace std;
typedef struct employee
{
    int srno;
    string name;
    int salary;
}ep;
//********union is used to save memory**********
// and the total memory assigned to union is the max memory a variable uses in the union
union money
{
    float dollar;
    int rupees;
    int yen;    
};


int main(){
//enum 
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    Meal m2=lunch;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<breakfast<<endl;
    
    union money man;
    man.dollar=60.445;
    cout<<man.dollar<<endl;
    

    ep abhi;
    abhi.srno=1;
    abhi.name="Abhimanyu";
    abhi.salary=200000;

    cout<<"The Srno is "<<abhi.srno<<endl;
    cout<<"The Name is "<<abhi.name<<endl;
    cout<<"The Salary is "<<abhi.salary<<endl;

    return 0;
}
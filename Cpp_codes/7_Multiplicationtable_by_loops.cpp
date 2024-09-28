#include<iostream>
using namespace std;
int main(){


//*********for loops****************
// for (int i = 0; i<=100; i++)
// {
//     cout<<i<<endl;
// }


//***********while loops************
// int i=0;
// while(i<=50){
//     cout<<i<<endl;
//     i++;
// }


//***********do-while loops*********
    // int i=0;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=50);


//********creating a multiplication table*********/
    int x;
    cout<<"Enter the number you want the table of:"<<endl;
    cin>>x;

for(int i=0;i<=10;i++){
    cout<<x<<"*"<<i<<"="<<x*i<<endl;
    
}
    return 0;
}
#include <stdio.h>
void display(int arr[],int n){
for (int i=0;i<n;i++){
  printf("%d\t",arr[i]);
  }
printf("\n");
}
int insert_p(int arr[],int n,int x,int p){
for (int i=n-1;i>=p-1;i--){
  arr[i+1]=arr[i];
  }
arr[p-1]=x;
return n+1;
}
int delete_p(int arr[],int n,int x){
int i;  
  for (i=0;i<=n;i++){
      if(arr[i]==x){
        break;}
      }
  if(i==n){
    return n ;
  }
  for (int j=i;j<=n-1;j++){
    arr[j]=arr[j+1];
    }
return n-1;
}
int main(){
int arr[6]={10,11,12,13,14};
int n=5; int p=2; int x= 15;
display(arr,n);
n=insert_p(arr,n,x,p);
display(arr,n);
n=delete_p(arr,n,x);
display(arr,n);
}

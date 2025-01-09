
#include <stdio.h>
int fun1(int n);
int fun2(int n);
int fun3(int n);
int main() {
    int n;
    printf("Enter a number:-");
    scanf("%d",&n);
int q=fun1(n);
int r=fun2(n);
int s=fun3(n);
printf("%d %d %d",q,r,s);
    return 0;
}
int fun1(int n){
    return n*(n+1)/2;
}
int fun2(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int fun3(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
        }
    }
    return sum;
}

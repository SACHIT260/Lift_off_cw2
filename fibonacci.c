#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=0,b=1,c;
    c=a+b;
    printf("Fibonacci series:%d,%d,",a,b);
    for(i=3;i<=n;i++){
        printf("%d,",c);
        a=b;
        b=c;
        c=a+b;

    }
    return 0;
}
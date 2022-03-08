#include<stdio.h>
int main(){
    int a[10];
    int i,sum_even=0,sum_odd=0;
    for(i=0;i<10;i++){
        printf("Enter the number\n");
        scanf("%d",&a[i]);
    }
    for( i=0;i<10;i++){
        if(a[i]%2==0){
            sum_even+=a[i];
        }
        else{
            sum_odd+=a[i];
        }
    }
    printf("Sum of even number is %d\n",sum_even);
    printf("Sum of odd number is %d\n",sum_odd);
    return 0;

}
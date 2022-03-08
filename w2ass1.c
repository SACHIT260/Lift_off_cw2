#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    char b[20];
    printf("Enter the string\n");
    gets(a);
    printf("Enter the string\n");
    gets(b);
    strcat(a,b);
    printf("%s\n",a);
    int i,j,count=0;
    char rev[20];
    while(a[count]!='\0')
    {
        count++;
    }
    j=count-1;
    for(i=0;i<count;i++)
    {
rev[i]=a[j];
j--;
    }
    printf(" string after reverse is %s\n",rev);
    return 0;
}
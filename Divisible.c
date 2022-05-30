#include<stdio.h>

int main (){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if ((n%5==0 || n%11==0) && (n%5!=0 || n%11!=0))
    {
        printf("ONE");
    }
    else if (n%5==0 && n%11==0)
    {
       printf("BOTH");
    }
    else{
        printf("NONE");
    }
    return 0;
}
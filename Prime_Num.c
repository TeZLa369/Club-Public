#include<stdio.h>

int main (){
    int a, b, i, j;
    printf("Enter the range: ");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b ; i++)
    {
        if (a%i!=0)
        {
            printf("%d\n", i);
        }
        
    }
    // not working :)
    return 0;
}
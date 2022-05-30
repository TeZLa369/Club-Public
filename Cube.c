#include<stdio.h>

int main (){
    int a;
    printf("Enter the side of the cube: ");
    scanf("%d", &a);
    
    switch (a)
    {
    case (1):
        printf("6");
        break;
    case (2):
        printf("5");
        break;
    case (3):
        printf("4");
        break;
    case (4):
        printf("3");
        break;
    case (5):
        printf("2");
        break;
    case (6):
        printf("1");
        break;
    
    default:
    printf("Enter a valid input");
        break;
    }
    return 0;
}
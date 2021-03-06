#include<stdio.h>
void main()
{
    int op;
    int m,n;
    printf("\n*****Welcome To My Home Work*****\n\n");
    printf("Enter 1 For Add Two Numbers:\n");
    printf("Enter 2 For Multiply Two Numbers:\n\n");
    
    printf("Input Frist Numberic Value?:\n");
    scanf("%d",&m) ;
    printf("Which One sign You Want to Input(1='+' , 2='x')?:\n");
    scanf("%d",&op);
    printf("Input Second Numberic Value?:\n");
    scanf("%d",&n) ;


    switch (op)
    {
        case 1:
         printf("Add:  ");
        printf("%d + %d => %d",m,n,m+n);
        break;

        case 2:
        printf("Multiply:  ");
        printf("%d x %d => %d",m,n,m*n);
        break;
    
        default:
        printf("Please Check Your Input");
        break;
    }

printf("\n\n>.< Thank You For Checking My Home Work >.< \n");
}
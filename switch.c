#include<stdio.h>

int main(){
    int i,a,b, c, d;
    do{
        printf("Enter a Choice\n");
        scanf("%d", &i);
        

        switch (i){
            case 1:
            printf("Enter calue of two numbers\n");
            scanf("%d %d", &a,&b);
            c=a+b;
            printf("Sum of numbers %d",c);
            break;

            case 2:
            printf("Enter calue of two numbers\n");
            scanf("%d %d", &a,&b);
            d=a-b;
            printf("Subtraction of two numbers %d",d);
            break;

            case 3:
            printf("Exiting loop");
            break;
            
            default:
            printf("Wrong choice entered");
                  
        }
    }while(i!=3);
}
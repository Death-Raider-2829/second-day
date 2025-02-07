#include <stdio.h>

int main(){
    int i;

    do{
        printf("The value of i is \n");
        scanf("%d", &i);
         if(i<0){
            
             printf("The entered value is less than 0\n");
        }
        
    } while (i<0);
printf("%d",i);
return 0;
}

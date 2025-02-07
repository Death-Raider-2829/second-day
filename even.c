#include <stdio.h>

int main(){
    int i=0,n,s=0;
    printf("Enter the number of elements: ");   
    scanf("%d", &n);
    while (i<=n){
        if(i%2==0){
            s=i+s;
        }
        i++;
    }
    printf("The sum of the first %d even numbers is %d\n", n, s);
return 0;
}
#include <stdio.h>

int main(){
    int num1 = 10, num2 = 20, num3 = 10;
    if(num1 == num2 && num2 == num3){
        printf("All Inputs are Equal");
    }
    else if(num1 > num2 && num1 > num3){
        printf("%d is Greater than %d and %d", num1 , num2 , num3);
    }else if(num2 > num1 && num2 > num3){
        printf("%d is Greater than %d and %d ", num2 , num1 , num3);
    }else{
        printf("%d is Greater than %d and %d", num3 , num1 , num2);
    }

    return 0; 

}
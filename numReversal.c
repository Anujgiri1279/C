#include <stdio.h>
int main(){
    int a; 
    scanf("%d", &a);
    int reverse = 0;
    while(a != 0){
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a /= 10;
    }
    printf("The reverse of the number is: %d", reverse);

}
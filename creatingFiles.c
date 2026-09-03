#include <stdio.h>
int main(){
    
    FILE * readpointer = fopen("text.txt" , "w");
    fprintf(readpointer, "Hello this is my first time creating and writting a file using c \n Thank You " );

    return 0; 
}

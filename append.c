#include <stdio.h>



int main(){ 
    // If we want to edit a pre-exisiting file named test.txt which had like some info 
    FILE * pwrite = fopen("test.txt", "w"); 
    fprintf(pwrite , "This is is the pre existing text in the file ");
    // what we use the same memory address using the pointer so that we can append the file 
    
    // The next line will append text in the pre-existing file , we use \n to write the content on the next line 
    fprintf(pwrite , "\n This is how we edit a preexisting file");
    // pro tip we should always close the file we opened using fclose(); 
    fclose(pwrite); 

    return 0;
}

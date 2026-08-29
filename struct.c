#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{
    char name[20];
    char major[20];
    int age; 
    int Section; 
    
};

    int  main(){
    struct Student s1;
    s1.age = 20;
    s1.Section = 2;
    strcpy(s1.name, "John Doe");
    strcpy(s1.major, "Computer Science");

    printf("Name: %s\n", s1.name);
    printf("Major: %s\n", s1.major);
    printf("Age: %d\n", s1.age);
    printf("Section: %d\n", s1.Section);
    
    return 0;

}
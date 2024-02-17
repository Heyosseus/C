#include <stdio.h>

void get_credentials(char name[], int age); // function prototype is used to declare the function before the main function, so that the main function knows that the function exists, now it returns error if we accidentally misspell the function name or the arguments

int main(){
    char name[] = "John";
    int age = 21;
    get_credentials(name, age); // invoking the function and passing the name and age as arguments
    return 0;
}


void get_credentials(char name[], int age){
    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
}

//missing arguments will result in unexpected behavior
//function prototype causes the compiler to return an error if arguments are missing    
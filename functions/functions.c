#include <stdio.h>

void print_hello(char name[]){ // void means that the function does not return anything
    printf("hello %s\n", name);  // %s is used to print the string, name is the argument passed to the function
}

int square(int number){
    return number * number; // return is used to return the value from the function
}

int main(){
    char name[] = "John"; 
    print_hello(name); // invoking the function and passing the name as an argument

    int result = square(5); // invoking the function and passing 5 as an argument
    printf("The square of 5 is: %d\n", result); // printing the result
    return 0;
}
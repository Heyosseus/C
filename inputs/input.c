#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[20];
    printf("Enter your username: ");
    fgets(name, 20, stdin); // fgets is used to get the string input from the user 
    name[strlen(name) - 1] = '\0'; // to remove the '\n' character from the string, which is added by the fgets function. '\0' is used to terminate the string. '\n' is the newline character which is added by the fgets function. So, we are replacing the '\n' with '\0
    
    printf("Enter your age: ");
    scanf("%d", &age); // & is used to get the address of the variable, it cant read whitespaces

    printf("Your name is %s", name);
    printf("\nYour age is %d\n", age);
    return 0;
}
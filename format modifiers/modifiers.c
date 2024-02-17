#include <stdio.h>
#include <stdbool.h> // include the standard library for boolean data type

int main(){
    char string[] = "this is ur age"; // string is an array of characters in C
    int age = 21; // 4 bytes
    short int x = 10000; // 2 bytes
    unsigned int b = 100; // 4 bytes (0 to 4294967295) unsigned is always positive
    long long int y = 22222222222; // 8 bytes 
    float z = 3.141592; // 4 bytes (32 bits precision) 6-7 digits 
    double d = 3.141592653589793; // 8 bytes (64 bits precision) 15-16 digits 
    bool isTrue = true; // 1 byte
    char c = 'a'; // char is a single character, it is enclosed in SINGLE quotes

    printf("%s\n", string); // %s is a format specifier for string
    printf("u r %i\n", age ); // %i and %d is a format specifier for integer
    printf("%d\n", x); // %d is a format specifier for integer
    printf("%u\n", b); // %u is a format specifier for unsigned integer
    printf("%lld\n", y); // %lld is a format specifier for long long
    printf("%f\n", z); // %f is a format specifier for float
    printf("%lf\n", d); // %lf is a format specifier for double
    printf("%d\n", isTrue); // %d is a format specifier for boolean (0 or 1)
    printf("%c\n", c); // %c is a format specifier for character

    // ==========================
    float price = 10.5;

    printf("price is $%.2f\n", price); // %.2f is a format specifier for float with 2 decimal places
    printf("price is $%4.f\n", price); // %4.f is a format specifier for float with 4 spaces
    printf("price is $%-4.f\n", price); // %-4.f is a format specifier for float with 4 spaces and left aligned

    printf("%+f\n", price); // %+f is a format specifier for float with sign
    printf("% f\n", price); // % f is a format specifier for float with space
    printf("%04d\n", 10); // %04d is a format specifier for integer with 4 spaces and leading zeros
    return 0;
}
#include <stdio.h>
#include <math.h> // math.h is a header file in the C standard library for the C programming language containing the function prototypes for mathematical functions.

int main(){
    float A  = sqrt(9); // 3
    float B  = pow(2, 3); // 8   2^3 = 2*2*2 = 8
    double C = ceil(3.8); // 4
    double D = round(3.8); // 4
    double d = round(3.4); // 3
    double E = floor(3.8); // 3
    double F = fabs(-3.8); // 3.8

    int G = fmod(5, 2); // 1  fmod returns the remainder of the division of the two numbers, it works for doubles and floats unlike % operator which only works for integers

    int H = fmax(5, 2); // 5
    int I = fmin(5, 2); // 2
    int J = fma(5, 2, 3); // 13  fma returns the result of the multiplication of the first two numbers and then adds the third number to it
    int K = fdim(5, 2); // 3  fdim returns the positive difference between the two numbers

    int first_cadet;
    int second_cadet;
    int hipotenuse;

    printf("Enter the first cadet: ");
    scanf("%d", &first_cadet);

    printf("Enter the second cadet: ");
    scanf("%d", &second_cadet);

    // hipotenuse = sqrt(first_cadet * first_cadet + second_cadet * second_cadet);
    hipotenuse = sqrt(pow(first_cadet, 2) + pow(second_cadet, 2)); // both are the same

    printf("The hipotenuse is: %d\n", hipotenuse);
    return 0;
}
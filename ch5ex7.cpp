/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Patrick Iannini
 */

/*
Quadratic equations are of the form
a⋅x^2 +b⋅x+c=0
To solve these, one uses the quadratic formula:
x= (−b± sqrt(b^2−4ac)) / 2a
There is a problem, though: if b^2–4ac is less than zero, then it will fail. 
Write a program that can calculate x for a quadratic equation. 
Create a function that prints out the roots of a quadratic equation, given a, b, c. 
When the program detects an equation with no real roots, have it print out a message. 
How do you know that your results are plausible? Can you check that they are correct?
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c, r1, r2;
    printf("Please enter values for a, b, and c: \n");
    printf("a: ");
    scanf("%lf", &a);
    printf("\nb: ");
    scanf("%lf", &b);
    printf("\nc: ");
    scanf("%lf", &c);

    if (a==0) {
        printf("'a' cannot equal 0");
        return 1;
    }

    double discrim = b*b-4*a*c;

    if (discrim > 0) {
        r1 = (-b + sqrt(discrim)) / (2*a);
        printf("Root 1: %.2f\n", r1);
        r2 = (-b - sqrt(discrim)) / (2*a);
        printf("Root 2: %.2f\n", r2);  
    }

    if (discrim == 0) {
        r1 = (-b)/(2*a);
        printf("Root: %.2f\n", r1);
    }

    else {
        r1 = (-b)/(2*a);
        r2 = sqrt(-discrim) / (2*a);
        printf("Root 1: %.2f+%.2fi\n", r1, r2);
        printf("Root 2: %.2f-%.2fi\n", r1, r2);
    }

    return 0;
}
#include <stdio.h>
#include <conio.h>
void main()
{
    // declaration of local variable
    int x , y;
    printf ( " Enter the first number: \n ");
    scanf (" %d", &x);
    printf ( " Enter the second number: \n ");
    scanf (" %d", &y);
    printf (" GCD of two number %d and %d is %d", x, y, GetGCD( x, y));
    getch();
}

// use a recursive function to return GCD of two numbers x and y
int GetGCD (int x, int y)
{
    if ( y == 0) // if y is equal to 0, it returns x
    {
        return x;
    }
    // use modulo operator to perform the divisibility
    return GetGCD (y, x % y);
}  

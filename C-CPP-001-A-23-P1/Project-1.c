#include<stdio.h>

int main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;          /*tc lower limit of temperature table */
    upper = 1050.5;        /* upper limit */
    step = 12.5;          /*tc step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) /9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}
    
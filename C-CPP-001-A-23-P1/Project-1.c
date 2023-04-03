#include<stdio.h>

int main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;          /*tc lower limit of temperature table */
    upper = 453.3;        /* upper limit */
    step = 13.1;          /*tc step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) /9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}
    
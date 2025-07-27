#include <stdio.h>
#include <math.h>
#define DENS 21500
int main(void) {
    double radius;

    if( scanf("%lf", &radius) != 1) {
        printf("n/a");
        return 0;
    }

    if (radius < 0) {
         printf("n/a");
        return 0;
    }
    double volume = (4.0/3.0) * M_PI * pow(radius,3);
    double massa = volume * DENS;
    double rounded_mass = round(massa);
    printf("%.0lf", rounded_mass);
    return 0;
}
/*          
Looking at an above image, actually that image is zoomed up version of pdf file.
As we see there is ‘A’ shaped character, it has three vertices which has coordinates
(20.077, 11.598) , (26.526, 90.138) , (23.674, 32.579).
We have to cover the area under ‘A’ shaped character and colour it black.
Calculate area under ‘A’ shaped character
*/

#include <stdio.h>
#include "library.h"

int main() {
    double area_under_A;

    //double find_area(double x1, double y1, double x2, double y2, double x3, double y3)
    area_under_A = find_area(20.077, 11.598, 26.526, 90.138, 23.674, 32.579);
    printf("Area to be coloured black: %lf\n", area_under_A);

    return 0;
}

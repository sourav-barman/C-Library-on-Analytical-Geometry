/*
Suppose there are two roads,
Road 1: ABC Road, represented by equation 5x + y - 3 = 0
Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0
These two roads meet each other at a chowk, called 123 Chowk.
Determine at which angle , these two roads meet each other at chowk.
What you have to do :
Create a Program which determines angle at which these roads meet at 123 Chowk.
*/

#include <stdio.h>
#include "library.h"

int main() {
    double angle_at_chowk;
    
    //double find_angle(double a1, double b1, double a2, double b2)
    angle_at_chowk = find_angle(5, 1, 2, 3);
    printf("Angle at which these roads meet at 123 Chowk: %lf degree\n", angle_at_chowk);

    return 0;
}
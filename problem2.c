/*
Saurabh Sir stays in Bhopal,
Prateek Sir stays in Bangalore.
Using GPS:
Latitude and Longitude values of Bhopal as 23.259933 N, 77.412613 E.
Latitude and Longitude values of Bangalore as 12.9716 N, 77.5946 E.
Calculate distance between Saurabh Sir and Prateek Sir.
*/

#include <stdio.h>
#include "library.h"

int main() {
    double distance;

    //double find_distance(double lat1, double long1, double lat2, double long2)
    distance = find_distance(23.259933, 77.412613, 12.9716, 77.5946);
    printf("Distance Between Saurabh Sir and Prateek Sir: %lf km", distance);

    return 0;
}
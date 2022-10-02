#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

double find_angle(double a1, double b1, double a2, double b2) 
{
    double m1, m2, angle, theta, degree;

    if (b1 == 0 || b2 == 0) {
        printf("\nDivide By Zero Exception");
        exit(0);
    }

    m1 = -(a1 / b1);
    m2 = -(a2 / b2);
    angle = fabs((m1-m2) / (1 + m1*m2));
    theta = atan(angle);
    degree = (180 * theta) / PI;

    return degree;
}

double find_distance(double lat1, double long1, double lat2, double long2) 
{
    double distance, dlat, dlong, radius, tmp;

    lat1 = (lat1 * PI) / 180;
    lat2 = (lat2 * PI) / 180;
    long1 = (long1 * PI) / 180;
    long2 = (long2 * PI) / 180;

    //Haversine Formula
    dlat = lat2 - lat1;
    dlong = long2 - long1;
    radius = 6371;
    tmp = pow(sin(dlat/2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong/2), 2);
    distance = 2 * radius * asin(sqrt(tmp));

    return distance;
}

double find_area(double x1, double y1, double x2, double y2, double x3, double y3) 
{
    double area = fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2;
    return area;
}
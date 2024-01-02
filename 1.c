#include <stdio.h>
#include <math.h>

struct rectangle
{
    float height, width;
    double corner
}r;


int main(){

    printf("Enter width and height of rectangle:\n");
    scanf("%f %f", &r.width, &r.height);
    r.corner = sqrt(r.width*r.width+r.height*r.height);
    printf("The ")
}
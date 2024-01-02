#include <stdio.h>
#include <math.h>

struct rectangle
{
    float height, width;
    struct point{
        float x, y;
    }corner;
    
}r;


int main(){

    printf("Enter width and height of rectangle:\n");
    scanf("%f %f", &r.width, &r.height);
    r.corner.x = r.width/2;
    r.corner.y = r.height/2;
    printf("The co-ordinates of the midpoint of the rectangle is (%f,%f)", r.corner.x, r.corner.y);
}
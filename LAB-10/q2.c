
#include <stdio.h>
#include <math.h>
typedef struct Point
{
    float x;
    float y;
} Point;
float calculatedistance(Point p1,Point p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
void check(Point pointtocheck,Point bottomleft,Point topright)
{
    if((pointtocheck.x>=bottomleft.x && pointtocheck.x<=topright.x) && (pointtocheck.y>=bottomleft.y && pointtocheck.y<=topright.y))
    {
        printf("Lies within a specific boundary\n");
    }
    else
    {
        printf("Doesnot lie within a specific boundary\n");
    }
}

int main()
{
    Point p1,p2,bottomleft,topright,pointtocheck;
    printf("Enter Coordinate 1:\n");
    scanf("%f %f",&p1.x,&p1.y);
    printf("Enter Coordinate 2:\n");
    scanf("%f %f",&p2.x,&p2.y);
    float distance=calculatedistance(p1,p2);
    printf("Distance: %f",distance);
    printf("Enter the coordinates of bottom left:\n");
    scanf("%f %f",&bottomleft.x,&bottomleft.y);
    printf("Enter the coordinates of top right:\n");
    scanf("%f %f",&topright.x,&topright.y);
    printf("Enter the coordinates to check:\n");
    scanf("%f %f",&pointtocheck.x,&pointtocheck.y);
    check(pointtocheck,bottomleft,topright);

    return 0;
}
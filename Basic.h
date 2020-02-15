
#include<math.h>

class Point          //Class for point
{
public:
    float x,y,z;

    Point(){
    this->x=0;
    this->y=0;
    this->z=0;}

    Point(float x,float y,float z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }

    Point(float x,float y)
    {
        this->x=x;
        this->y=y;
        this->z=0;
    }

    float distOrigin()
    {
        return sqrt(x*x+y*y+z*z);
    }

};

float Distance(Point p1,Point p2)
{
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)+pow((p1.z-p2.z),2));
}


class Triangle{
public:
Point p1,p2,p3;

Triangle(){
this->p1.x=0;
this->p2.x=0;
this->p3.x=0;
this->p1.y=0;
this->p2.y=0;
this->p3.y=0;}

Triangle(Point p1, Point p2, Point p3){
this->p1.x=p1.x;
this->p2.x=p2.x;
this->p3.x=p3.x;
this->p1.y=p1.y;
this->p2.y=p2.y;
this->p3.y=p3.y;}

float area(){
float a=0.5*(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y));
return a;}
};




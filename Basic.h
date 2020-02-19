#include<math.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Point          //Class for point
{
public:
    float x,y,z;

    Point()
    {
        this->x=0;
        this->y=0;
        this->z=0;
    }

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


class Triangle
{
public:
    Point p1,p2,p3;

    Triangle()
    {
        this->p1.x=0;
        this->p2.x=0;
        this->p3.x=0;
        this->p1.y=0;
        this->p2.y=0;
        this->p3.y=0;
    }

    Triangle(Point p1, Point p2, Point p3)
    {
        this->p1.x=p1.x;
        this->p2.x=p2.x;
        this->p3.x=p3.x;
        this->p1.y=p1.y;
        this->p2.y=p2.y;
        this->p3.y=p3.y;
    }

    float area()
    {
        float a=0.5*(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y));
        if(a<0)
        {
            return -a;
        }
        return a;
    }

    float perimeter()
    {
        return Distance(p1,p2)+Distance(p2,p3)+Distance(p1,p3);
    }

    Point centroid()
    {
        Point p;
        p.x=(p1.x+p2.x+p3.x)/3;
        p.y=(p1.y+p2.y+p3.y)/3;
        return p;
    }


};

class Line
{
public:
    float slope,y_intercept;

    Line(float slope,float y_intercept)         //Line with slope and y intercept given
    {
        this->slope=slope;
        this->y_intercept=y_intercept;
    }

    Line(Point p1,Point p2)                     //Line passing through 2 points
    {
        this->slope=(p2.y-p1.y)/(p2.x-p1.x);
        this->y_intercept=p2.y-slope*p2.x;
    }

    int sign_line(Point p)
    {
        //If y-mx-c>0 returns 1,y-mx-c<0 returns -1,y-mx-c=0 i.e Point p on line--->returns 0
        float z;
        z=p.y-slope*p.x-y_intercept;
        if(z>0)
        {
            return 1;
        }
        if(z<0)
        {
            return -1;
        }
        return 0;
    }

};

/*
vector<Point> convexHull(Point p[],int n){
vector<Point> hull;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i!=j){
set<int> s;
Line l(p[i],p[j]);
for(int k=0;k<n;k++){
s.insert(l.sign_line(p[k]));}
if(s.size()){
if(find(hull.begin(),hull.end(),p[i])!=hull.end()){
hull.push_back(p[i]);}
if(find(hull.begin(),hull.end(),p[j])!=hull.end()){
hull.push_back(p[j]);}}}}

return hull;}}

*/

ostream & operator<<(ostream &out,const Point &p)
{
    out<<"("<<p.x<<","<<p.y<<")";
    return out;
}




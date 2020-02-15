#include"Basic.h"
#include<iostream>
using namespace std;

int main(){
Point p1(0,0),p2(0,10),p3(10,0);
Triangle t1(p1,p2,p3);
cout<<t1.centroid();
cout<<Distance(p1,p2)<<" "<<t1.area()<<" "<<t1.perimeter();}

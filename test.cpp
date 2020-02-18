#include"Basic.h"
#include"2DPhysics.h"
#include<iostream>
using namespace std;

int main(){
Point p1(0,0),p2(0,10),p3(10,0);
Triangle t1(p1,p2,p3);
cout<<t1.centroid();
cout<<Distance(p1,p2)<<" "<<t1.area()<<" "<<t1.perimeter()<<endl<<endl;

RigidBody r1(5,1,0),r2(5,3,0),r3(6,8,9),r4(2,2,2);
RigidBody r[4]={r1,r2,r3,r4};
cout<<CentreOfMass(r,4)<<endl;
r1.setVelocity(1,1,1);
r1.setAccleration(1,1,1);
r1.setPosition(6,4,-8);
cout<<r1.calculatePosition(5);}

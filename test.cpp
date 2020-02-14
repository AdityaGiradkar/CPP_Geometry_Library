#include"Basic.h"
#include<iostream>
using namespace std;

int main(){
Point p1(0,0),p2(1,1),p3(1,1);
Triangle t1(p1,p2,p3);
cout<<Distance(p1,p2)<<" "<<t1.area();}

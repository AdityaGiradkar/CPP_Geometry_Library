#include<iostream>
#include<math.h>

class RigidBody
{
public:
    float mass;
    Point position;
    float vx,vy,vz;  //Velocity Vector
    float ax,ay,az;  //Acceleration Vector

    RigidBody()
    {
        this->mass=0;
        position.x=0;
        position.y=0;
        position.z=0;
        vx=vy=vz=0;
        ax=ay=az=0;
    }

    RigidBody(float mass,float x,float y,float z)
    {
        this->mass=mass;
        position.x=x;
        position.y=y;
        position.z=z;
        vx=vy=vz=0;
        ax=ay=az=0;
    }

    RigidBody(float mass,float x,float y)
    {
        this->mass=mass;
        position.x=x;
        position.y=y;
        position.z=0;
        vx=vy=vz=0;
        ax=ay=az=0;
    }
    void setPosition(float x, float y,float z=0)
    {
        position.x=x;
        position.y=y;
        position.z=z;
    }

    void setVelocity(float vx,float vy,float vz=0)
    {
        this->vx=vx;
        this->vy=vy;
        this->vz=vz;
    }

    void setAccleration(float ax,float ay,float az=0)
    {
        this->ax=ax;
        this->ay=ay;
        this->az=az;
    }

    Point calculatePosition(float time)           //Calculate body's position after time specified
    {
        Point p;
        p.x=position.x+vx*time+(0.5)*ax*pow(time,2);
        p.y=position.y+vy*time+(0.5)*ay*pow(time,2);
        p.z=position.z+vz*time+(0.5)*az*pow(time,2);
        return p;
    }

};

Point CentreOfMass(RigidBody r[],int n)
{
    Point com;
    float s=0,m=0;
    for(int i=0; i<n; i++)
    {
        s+=r[i].mass*r[i].position.x;
        m+=r[i].mass;
    }
    com.x=s/m;

    s=0;
    for(int i=0; i<n; i++)
    {
        s+=r[i].mass*r[i].position.y;
    }
    com.y=s/m;

    s=0;
    for(int i=0; i<n; i++)
    {
        s+=r[i].mass*r[i].position.z;
    }
    com.z=s/m;

    return com;

}



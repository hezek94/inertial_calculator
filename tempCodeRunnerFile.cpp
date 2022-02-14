#include<iostream>
#include<cmath>
using namespace std;

class inertial_terso{
    public:
    void cuboid(double mass, double height, double width, double depth);
    void sphere(double mass, double radius);
    double cylinderical_rod(double mass, double height, double width=0);


    private:
    double mass;
    double height;
    double width;
    double depth;
    double radius;
};

int main(){
    double m, h, d, r, w;
    inertial_terso m_inert;
    int object_type;
    cout<<"what is the shape of the object? \n";
    cout<<"sphere is 1, block/cuboid is 2, cylinder is 3"; 
    cout <<"gave the value = ";
    cin>>object_type;
    switch (object_type)
    {
    case 1:
        cout<<"whaat is the mass of the body "<<"\n";
        cin>>m;
        cout<<"whaat is the radius of the body "<<"\n";
        cin>>r;
        m_inert.sphere(m, r);
       
        break;
    case 2:
        cout<<"whaat is the mass of the body "<<"\n";
        cin>>m;
        cout<<"whaat is the height of the body "<<"\n";
        cin>>h;
        cout<<"whaat is the width of the body "<<"\n";
        cin>>w;
        cout<<"whaat is the depth of the body "<<"\n";
        cin>>d;
        m_inert.cuboid(m, h, w, d);
       
        break;
    case 3:
        cout<<"whaat is the mass of the body "<<"\n";
        cin>>m;
        cout<<"whaat is the height of the body "<<"\n";
        cin>>h;
        cout<<"whaat is the width of the body "<<"\n";
        cin>>w;
        m_inert.cylinderical_rod(m, h, w);
       
        break;
    
    default:
        cout<<"nothin";
        break;
    }
    return 0;
}

void inertial_terso::cuboid(double mass, double height, double width, double depth){
    double inertial_x= (0.833)*mass*(pow(height, 2.0)+pow(depth,2.0));

    double inertial_y= (0.833)*mass*(pow(height, 2.0)+pow(width,2.0));
    double inertial_z= (0.833)*mass*(pow(width, 2.0)+pow(depth, 2.0));
    cout<<"ixx \n"<<inertial_x<<endl;
    cout<<"iyy \n"<<inertial_y<<endl;
    cout<<"izz \n"<<inertial_z<<endl;
};

void inertial_terso::sphere(double mass, double radius){
     double sphere_inertial_x= (0.4*mass)*pow(radius, 2.0);
     double sphere_inertial_y= (0.4*mass)*pow(radius, 2.0);
     double sphere_inertial_z= (0.4*mass)*pow(radius, 2.0);
     cout<<"ixx \n"<<sphere_inertial_x<<endl;
     cout<<"iyy \n"<<sphere_inertial_y<<endl;
     cout<<"izz \n"<<sphere_inertial_z<<endl;

};

double inertial_terso::cylinderical_rod(double mass, double height, double width){
    cout<<"is the rod slender along y axis press 1 if the CM is at \n";
    cout<<"the end but if it at center press 2 if it is solid cylinder press 3 with radius";
    int x;
    cin>>x;
    if (x==1){
        double cylin_inert_x=(0.3333)*mass*pow(height,2.0);
        double cylin_inert_z=(0.3333)*mass*pow(height,2.0);
        double cylin_inert_y=(0.3333)*mass*0.0;
        cout<<"ixx \n"<<cylin_inert_x<<endl;
        cout<<"iyy \n"<<cylin_inert_y<<endl;
        cout<<"izz \n"<<cylin_inert_z<<endl;
    }
    else if (x==2){
        double cylin_inert_x1=(0.8333)*mass*pow(height,2.0);
        double cylin_inert_z1=(0.8333)*mass*pow(height,2.0);
        double cylin_inert_y1=(0.8333)*mass*0.0;
        cout<<"ixx \n"<<cylin_inert_x1<<endl;
        cout<<"iyy \n"<<cylin_inert_y1<<endl;
        cout<<"izz \n"<<cylin_inert_z1<<endl;
    }
    else if (x==3)
    {
        double cylin_inert_x2=(0.3333)*mass*(3*pow(width,2.0)+ pow(height, 2));
        double cylin_inert_y2=(0.3333)*mass*(3*pow(width,2.0)+ pow(height, 2));
        double cylin_inert_z2=(0.3333)*mass*pow(width, 2);
        cout<<"ixx \n"<<cylin_inert_x2<<endl;
        cout<<"iyy \n"<<cylin_inert_y2<<endl;
        cout<<"izz \n"<<cylin_inert_z2<<endl;
    }
    else cout<<"no value in range";
    
    return 1;
 
}

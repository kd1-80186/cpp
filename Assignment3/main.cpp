/*Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/


#include "./cylinder.h"
#include "./menu.h"
int main()
{
    Cylinder c1(3,4);
    emenu choice;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case 1:
            c1.accept();
            break;

            case 2:
            c1.print();
            break;

            case 3:
            c1.Volume();
            break;

            case 4:
            c1.getradius();
            cout<<"radius :  "<<c1.getradius()<<endl;
            c1.setradius(80);
            break;

            case 5:
            c1.getheight();
            cout<<"height :  "<<c1.getheight()<<endl;
            c1.setheight(50);
            break;

            default:
            cout<<"invalid choice"<<endl;
            break;
        }
    }
    cout<<"thank you!!!"<<endl;
    return 0;
}

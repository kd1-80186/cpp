/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include <iostream>

using namespace std;

class Volume
{
    private:
    int length;
    int width;
    int height;

    public:
    Volume()
    {
        this->length=1;
        this->width=1;
        this->height=1;
    }
    void Accept_data()
    {
        cout<<"Enter the length : ";
        cin>>length;
        cout<<"Enter the width : ";
        cin>>width;
        cout<<"Enter the hight : ";
        cin>>height;
    }
    void Display_data()
    {
        cout<<"length : "<<length<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"hight : "<<height<<endl;
    }
    void volume()
    {
        int volume = length*width*height;
        cout<<"Volume of box : "<<volume<<endl;
    }
}; 
int menu()
{
    int choice;
    cout<<"******************"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept_data (length, width, height)"<<endl;
    cout<<"2. Display_data (length, width, height)"<<endl;
    cout<<"3. Volume"<<endl;
    cout<<"Enter your choice  ::";
    cin>>choice;
    cout<<"********************"<<endl;
    return choice;
}
int main()
{
    Volume v;
    int choice;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case 1:
            v.Accept_data();
            break;
            case 2:
            v.Display_data();
            case 3:
            v.volume();
            break;
            default:
            cout<<"invalid choice.....:"<<endl;
            break;
        }
    }
    cout<<"thank you!! Have a good day!!"<<endl;
    return 0;
}
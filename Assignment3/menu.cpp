#include "./menu.h"
#include <iostream>
using namespace std;
emenu menu()
{
    int choice;
    
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept Radius and Height"<<endl;
    cout<<"2.Print Details"<<endl;
    cout<<"3.Get volume"<<endl;
    cout<<"4.Get radius"<<endl;
    cout<<"5.Get height"<<endl;
    cout<<"Enter your choice=";
    cin>>choice;
   
    return emenu(choice);
}

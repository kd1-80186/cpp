/*Q2. Write a class Address. Implement constructors, getters, setters,
 accept(), and display() methods.*/

#include <iostream>

using namespace std;

class Address
{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:

    Address()
    {

    }

    Address(string building, string street, string city, int pin )
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void accept()
    {
       
        cout<<"Enter building name"<<endl;
        //getline(cin, this->buidling);
        cin>>this->building;
        getchar();
        cout<<"Enter street name"<<endl;
        getline(cin, this->street);
        cout<<"Enter city "<<endl;
        cin>>this->city;
        cout<<"Enter pincode "<<endl;
        cin>>this->pin;
    }

     void display()
     {
        cout<<"***Your Address details***"<<endl;
        cout<<"Building : "<<this->building<<endl;
        cout<<"Street : "<<this->street<<endl;
        cout<<"City  : "<<this->city<<endl;
        cout<<"Pincode : "<<this->pin<<endl;
     } 

     void set_building(string building)
     {
        this->building = building;
     }

     void set_street(string street)
     {
        this->street = street;
     }

     void set_city(string city)
     {
        this->city = city;
     }
     void set_pin(int pin)
     {
        this->pin = pin;
     }

     string get_building()
     {
        return this->building;
     }

     string get_street()
     {
        return this->street;
     }

     string get_city()
     {
        return this->city;
     }

     int get_pin()
     {
        return this->pin;
     }
};

int main()
{
    Address a1("Siddhi", "Malkapur", "Karad",415539);
    // a1.display();

    a1.accept();
    a1.display();
    cout<<"********************************************"<<endl;
    cout<<"***changed building name***"<<endl;
    a1.set_building("Krishnakunj");
    a1.display();
    cout<<"********************************************"<<endl;
    cout<<"***changed street name***"<<endl;
    a1.set_street("tsquare");
    a1.display();

    cout<<"********************************************"<<endl;
    cout<<"***changed city name***"<<endl;
    a1.set_city("Islampur");
    a1.display();

    cout<<"********************************************"<<endl;
    cout<<"***changed pincode***"<<endl;
    a1.set_pin(415571);
    a1.display();

    cout<<"********************************************"<<endl;
    cout<<"Building name :  "<< a1.get_building()<<endl;
    cout<<"Street name :  "<< a1.get_street()<<endl;
    cout<<"City name :  "<< a1.get_city()<<endl;
    cout<<"Pincode :  "<< a1.get_pin()<<endl;
    
    cout<<"Thank you for address details....have a good day!!";



    return 0;
}

/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/

#include <iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int total_cars;
    double total_amount;

public:
    Tollbooth()
    {
        this->total_cars = 0;
        this->total_amount=0;
    }
    int payingCar()
    {
        ++total_cars;
        total_amount = total_amount + 0.50;
        return 0;
    }
    int nopayCar()
    {
        ++total_cars;
        return 0;
    }
    void printOnConsole()
    {
        cout << "***************************************************"<<endl;
        cout << "Total cars are: " << this->total_cars<<endl;
        cout << "Total amount is: " << this->total_amount<<endl;
        cout << "The Paying Cars are: " << this->total_amount/0.5<<endl;
        cout << "The Non-Paying Cars are: " <<total_cars-(total_amount/0.5)<<endl;
    }
};
int main()
{
    Tollbooth T1;
    int choice;
    while (1)
    {
        cout << "**********************Details*******************"<<endl;
        cout << "1. Count Paying Cars"<<endl;
        cout << "2. Count Non-Paying Cars"<<endl;
        cout << "3. Show Totals"<<endl;
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            T1.payingCar();
            cout << "Paying Car Counted"<<endl;
            break;
        case 2:
            T1.nopayCar();
            cout << "Non-Paying Car Counted"<<endl;
            break;
        case 3:
            T1.printOnConsole();
            break;
        default:
            cout << "Thank you!";
            exit(1);
        }
    }
        return 0;
}



// #include <iostream>

// using namespace std;

// class Tollbooth
// {
// private:
//     unsigned int total_cars;
//     double total_amt;
//     unsigned int paying_car_total;
//     unsigned int notpaying_car_total;
    
// public:
//     Tollbooth()
//     {
//         this->total_cars = 0;
//         this->total_amt = 0;
//         this->paying_car_total=0;
//         this->notpaying_car_total=0;

//     }

//     int payingCar()
//     {
//         return ++paying_car_total;    
//     }

//     double total_amount()
//     {
//         return total_amt+=0.5;
//     }

//     int nopayCar()
//     {
//         return ++notpaying_car_total;
        
//     }
//     void printOnConsole()
//     {
//         cout << "***************************************************"<<endl;
//         cout << "Total number of cars  : " << this->total_cars<<endl;
//         cout << "Total amount is : " << total_amount()<<endl;
//         cout << "The number of paying cars : " << this->paying_car_total<<endl;
//         cout << "The number of non paying cars : " <<this->notpaying_car_total<<endl;
//     }

//     void accept_cardata()
//     {
//         cout<<"Enter car number and pay amount 0.50 cents :: ";
//         cin>>this->total_cars>>this->total_amt;
//         if(this->total_amt == 0.50)
//         {
//         payingCar();
//         total_amount();
//         }
//         else 
//         nopayCar();
//     }


// };
// int main()
// {
//     Tollbooth T1;
//     int choice;
//     while (1)
//     {
//         cout << "**********************Details*******************"<<endl;
//         cout << "1. Enter car number and amount to pay(0.50 cents)"<<endl;
//         cout << "2. Count of Paying Cars"<<endl;
//         cout << "3. Count of Non-Paying Cars"<<endl;
//         cout << "4. Show Totals"<<endl;
//         cout << "Enter the choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1: T1.accept_cardata();
//                 break;
//         case 2: cout<<"Total number of paying cars : "<<T1.payingCar()<<endl;
//                 break;
//         case 3: cout<<"Total number of not paying cars : "<<T1.nopayCar()<<endl;
//                 break;
//         case 4: T1.printOnConsole();
//                 break;
//         default:cout << "Thank you!";
//                 exit(1);
//         }
//     }
//         return 0;
// }
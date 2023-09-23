#include <iostream>

using namespace std;
struct Date
{
    int dd;
    int mm;
    int yy;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->dd = 05;
    ptrDate->mm = 02;
    ptrDate->yy = 1999;
}

void printDateOnConsole(struct Date *ptrDate)
{
    cout << "DATE = " << ptrDate->dd << "/" << ptrDate->mm << "/" << ptrDate->yy << endl;
}


void acceptDateFromConsole(struct Date *ptrDate)
{
    
    cout << "Enter day :"<< endl;
    cin >> ptrDate->dd;
    cout << "Enter month :" << endl;        
    cin >> ptrDate->mm;
    cout << "Enter year :"<< endl;
    cin >> ptrDate->yy;
    
}

int main()
{

    struct Date d1;
    int choice;

    do{
    cout<<"Choices"<<endl<<"1.View default date"<<endl<<"2.Enter date"<<endl;
    cout<<"Enter your choice :: ";
    cin>>choice;

    switch(choice)
    {
        case 0: break;

        case 1: initDate(&d1);
                printDateOnConsole(&d1);
                 break;

         case 2: acceptDateFromConsole(&d1);
                 printDateOnConsole(&d1);
                 break;

        
        
    }
    }while(choice!=0);




    
    return 0;
}
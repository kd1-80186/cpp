/*Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/

#include <iostream>
using namespace std;

namespace NStudent
{

    class Student
    {
    private:
        int Roll_no;
        string name;
        int marks;

    public:
        void initStudent()
        {
            this->Roll_no = 0;
            this->name = "NA";
            this->marks = 0;
        }

        void printStudentOnConsole()
        {
            cout << "Name :: " << this->name << endl;
            cout << "Roll_no :: " << this->Roll_no << endl;
            cout<< "Marks :: " << this->marks << endl;
        }

        void acceptStudentFromConsole()
        {

            cout << "Enter Roll_no : ";
            cin >> this->Roll_no;
            cout << "Enter Student name :";
            cin >> this->name;
            cout << "Enter Marks :";
            cin >> this->marks;
        }
    };
}

using namespace NStudent;

int main()
{
     struct Student s1;
    int choice;

    do
    {
        cout<<"**************************************"<<endl;
        cout << "Choices" << endl
             << "0.Exit" << endl
             << "1.View default student data" << endl
             << "2.Enter Student data and display it" << endl;
        cout << "Enter your choice :: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            	break;

        case 1:	s1.initStudent();
            	s1.printStudentOnConsole();
            	break;
            

        case 2: s1.acceptStudentFromConsole();
                s1.printStudentOnConsole();
                break;

        }
    } while (choice != 0);
    return 0;
}






























// int main()
// {

//     struct Student s1;
//     int choice;

//     do
//     {
//         cout<<"**************************************"<<endl;
//         cout << "Choices" << endl
//              << "0.Exit" << endl
//              << "1.View default student data" << endl
//              << "2.Enter Student data and display it" << endl;
//         cout << "Enter your choice :: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 0:
//             break;

//         case 1:
//             s1. initStudent();
//             s1.printStudentOnConsole();
//             break;

//         case 2: s1.acceptStudentFromConsole();
//                 s1.printStudentOnConsole();
//                 break;

//         }
//     } while (choice != 0);

//     return 0;
// }

// }

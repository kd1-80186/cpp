/*Q1. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.*/


// #include <iostream>

// using namespace std;

// class Student
// {
// private:
//     string name;
//     string gender;
//     int rollNumber, sum=0;
//     double marks[3];
//     double percent;

// public:
//     void accept()
//     {
//         cout << "Enter name  :" << endl;
//         cin >> this->name;
//         cout << "Enter gender (M/F) : " << endl;
//         cin >> this->gender;
//         cout << "Enter roll number :" << endl;
//         cin >> this->rollNumber;
//         cout << "Enter marks for (Physics, chemistry ana maths) : " << endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> marks[i];
//         }
//         for (int i = 0; i < 3; i++)
//         {
            
//             sum = sum + marks[i];
//         }
//         cout<<"Sum "<<sum<<endl;
//         percent = sum / 3;
//         cout << percent;
//     }

//     double calculatePercent()
//     {
//         return percent;
//     }
//     void print()
//     {
//         cout << "********Student Data********" << endl;
//         cout << "Student Name : " << this->name << endl;
//         cout << "Student Gender : " << this->gender << endl;
//         cout << "Student RollNumber : " << this->rollNumber << endl;
//         cout << "Student Percent : " << calculatePercent();
//         // for(int i=0;i<3;i++)
//         // {
//         //     cout<<this->marks[i]<<" ";
//         // }

//         cout << endl;
//     }

//     friend void sort(Student s, int max_size);
// };


// void sort(Student s[], int max_size)
// {
//     for (int i = 0; i < max_size; i++)
//     {
//         for (int j = i + 1; j < max_size - 1; j++)
//         {
//             if (s[i].calculatePercent() < s[j].calculatePercent())
//             {
//                 swap(s[i], s[j]);
//             }
//         }
//     }

// }
// void search()
// {
// }

// int main()
// {
//     int max_size;
//     cout << "Enter total number of students ";
//     cin >> max_size;

//     int choice;
//     Student s[max_size];
//     do
//     {
//         cout << "0. EXIT" << endl;
//         cout << "1. Add student" << endl;
//         cout << "2. Display student" << endl;
//         cout << "3. Sort students" << endl;
//         cout << "4. Search student" << endl;
//         cout << "Enter your choice" << endl;
//         cin >> choice;

//         switch (choice)
//         {
//         case 0:
//             break;

//         case 1:
//             for (int i = 0; i < max_size; i++)
//             {
//                 s[i].accept();
//             }
//             cout << "Students added successfully!!" << endl;
//             break;
//         case 2:
//             for (int i = 0; i < max_size; i++)
//             {
//                 s[i].print();
//             }
//             break;
//         case 3:
//             sort(s, max_size);
//             for (int i = 0; i < max_size; i++)
//             {
//                 s[i].print();
//             }
//             break;
//             // case 4 :
//         }
//     } while (choice != 0);

//     // s[max_size].accept();
//     // s[max_size].percentage();

//     return 0;
// }
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string gender;
    int rollNumber;
    double marks[3];
    double percent;

public:
    void accept()
    {
        cout << "Enter name: ";
        cin >> this->name;
        cout << "Enter gender (M/F): ";
        cin >> this->gender;
        cout << "Enter roll number: ";
        cin >> this->rollNumber;
        cout << "Enter marks for (Physics, Chemistry, and Maths): ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        percent = (sum / 300) * 100; // Calculate percentage as a percentage (out of 100)
    }

    double calculatePercent()
    {
        return percent;
    }

    void print()
    {
        cout << "********Student Data********" << endl;
        cout << "Student Name: " << this->name << endl;
        cout << "Student Gender: " << this->gender << endl;
        cout << "Student RollNumber: " << this->rollNumber << endl;
        cout << "Student Percentage: " << calculatePercent() << "%" << endl;
    }
};

void sort(Student s[], int max_size)
{
    for (int i = 0; i < max_size - 1; i++)
    {
        for (int j = i + 1; j < max_size; j++)
        {
            if (s[i].calculatePercent() < s[j].calculatePercent())
            {
                swap(s[i], s[j]);
            }
        }
    }
}

int search(Student s[], int max_size, double targetPercent)
{
    for (int i = 0; i < max_size; i++)
    {
        if (s[i].calculatePercent() == targetPercent)
        {
            return i; // Return the index of the found student
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int max_size;
    cout << "Enter total number of students: ";
    cin >> max_size;

    int choice;
    Student s[max_size];
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display students" << endl;
        cout << "3. Sort students by percentage" << endl;
        cout << "4. Search student by percentage" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            for (int i = 0; i < max_size; i++)
            {
                s[i].accept();
            }
            cout << "Students added successfully!!" << endl;
            break;

        case 2:
            for (int i = 0; i < max_size; i++)
            {
                s[i].print();
            }
            break;

        case 3:
            sort(s, max_size);
            cout << "Students sorted by percentage:" << endl;
            for (int i = 0; i < max_size; i++)
            {
                s[i].print();
            }
            break;

        case 4:
            double targetPercent;
            cout << "Enter the percentage to search for: ";
            cin >> targetPercent;
            int index = search(s, max_size, targetPercent);
            if (index != -1)
            {
                cout << "Student found at index " << index << ":" << endl;
                s[index].print();
            }
            else
            {
                cout << "Student not found." << endl;
            }
            break;
        }
    } while (choice != 0);

    return 0;
}

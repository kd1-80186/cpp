/*Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype*/

#include<iostream>
using namespace std;
class Date
{
private:
  int day;
  int month;
  int year;

public:
  Date()
  {
    this->day = 0;
    this->month = 0;
    this->year = 0;
  }
  Date(int day, int month, int year)
  {
    this->day = day;
    this->month = month;
    this->year = year;
  }
  int getday()
  {
    return this->day;
  }
  void setday(int day)
  {
    this->day = day;
  }
  int getmonth()
  {
    return this->month;
  }
  void setmonth(int month)
  {
    this->month = month;
  }
  int getyear()
  {
    return this->year;
  }
  void setyear(int year)
  {
    this->year = year;
  }
  void acceptdate()
  {
    cout << "Enter the day : ";
    cin >> this->day;
    cout << "Enter the month : ";
    cin >> this->month;
    cout << "Enter the year : ";
    cin >> this->year;
  }
  bool isLeapYear()
  {
    if (this->year % 4 == 0 )
      return true;
    else
      return false;
  }

  void displaydate()
  {
    cout << this->day << "/" << this->month << "/" << this->year << endl;
    if (isLeapYear())
      cout << "year is leap year" << endl;
    else
      cout << "year is not a leap year" << endl;
  }
};

class person
{
private:
  string name;
  string addr;
  Date dob;

public:
  person()
  {
    this->name = "";
    this->addr = "";
  }
  person(string name, string addr)
  {
    this->name = name;
    this->addr= addr;
  }
  string getname()
  {
    return name;
  }
  void setname(string name)
  {
    this->name = name;
  }
  string getaddr()
  {
    return addr;
  }
  void setaddres(int addr)
  {
    this->addr = addr;
  }
  Date getdob()
  {
   return this->dob;
  }
  void setdob(Date dob)
  {
    this->dob = dob;
  }

  void accept()
  {
    cout << "Enter name : ";
    cin >> this->name;
    cout << "Enter address : ";
    cin >> this->addr;
    cout << "Enter Date_of_birth : "<<endl;
    dob.acceptdate();
  }
  void display()
  {
    cout << "Name :  " << this->name << endl;
    cout << "Salary :  " << this->addr << endl;
    cout << "Date_of_birth : ";
    dob.displaydate();
  }
};

class Employee : public person
{
private:
  int empid;
  float sal;
  string dept;
  Date doj;

public:
  Employee()
  {
    this->empid = 0;
    this->sal = 0;
    this->dept = "";
  }
  Employee(int empid, float sal, string dept)
  {
    this->empid = empid;
    this->sal = sal;
    this->dept = dept;
  }

  int getempid()
  {
    return this->empid;
  }
  void setid(int empid)
  {
    this->empid = empid;
  }
  int getsal()
  {
    return this->sal;
  }
  void setsal(float sal)
  {
    this->sal = sal;
  }
  string getdept()
  {
    return this->dept;
  }
  void setdept(string dept)
  {
    this->dept = dept;
  }
  Date getdoj()
  {
    return this->doj;
  }
  void setdoj(Date doj)
  {
    this->doj = doj;
  }
  
  void accept()
  {
    person::accept();
    cout << "Enter empid : ";
    cin >> this->empid;
    cout << "Enter sal : ";
    cin >> this->sal;
    cout << "Enter dept :  ";
    cin >> this->dept;
    cout << "Enter date of joining :  "<<endl;
    doj.acceptdate();
  }
  void display()
  { cout<<"*****Employee information*****"<<endl;
    person::display();
    cout << "Empid : " << this->empid << endl;
    cout << "Salary : " << this->sal<< endl;
    cout << "Dept : " << this->dept << endl;
    cout << "Date of joining : ";
    doj.displaydate();
  }
};

int main()
{
  Employee e1;
  e1.accept();
  e1.display();
 
  return 0;
}
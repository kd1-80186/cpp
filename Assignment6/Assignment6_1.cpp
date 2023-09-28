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
  void acceptDate()
  {
    cout << "Enter the day :  ";
    cin >> this->day;
    cout << "Enter the month :  ";
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

  void displayDate()
  {
    cout << this->day << "/" << this->month << "/" << this->year << endl;
    if (isLeapYear())
      cout << "year is leap year" << endl;
    else
      cout << "year is not a leap year" << endl;
  }
};

class Employee
{
private:
  int id;
  float sal;
  string dept;
  Date dobj;

public:
  Employee()
  {
    this->id = 0;
    this->sal = 0;
    this->dept = "";
  }
  Employee(int id, float sal, string dept)
  {
    this->id = id;
    this->sal = sal;
    this->dept = dept;
  }

  int getid()
  {
    return this->id;
  }
  void setid(int id)
  {
    this->id = id;
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
  Date getdobj()
  {
    return this->dobj;
  }
  void setdobj(Date dobj)
  {
    this->dobj = dobj;
  }
  void acceptEmployee()

  {
    cout << "Enter employee id :   ";
    cin >> this->id;
    cout << "Enter sal :  ";
    cin >> this->sal;
    cout << "Enter dept :  ";
    cin >> this->dept;
    cout << "**Enter date of joining** "<<endl;
    dobj.acceptDate();
  }
  void displayEmployee()
  {
    cout<<"********Employee details**********"<<endl;
    cout << "Employee id : " << id << endl;
    cout << "Employee salary : " << sal<< endl;
    cout << "Employee dept :  " << dept << endl;
     cout << "Employee Date of joining : ";
    dobj.displayDate();
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

  void acceptperson()
  {
    cout << "Enter Person name : ";
    cin >> this->name;
    cout << "Enter address : ";
    cin >> this->addr;
    cout << "Enter Dateofbirth : "<<endl;
    dob.acceptDate();
  }
  void displayperson()
  {
    cout<<"********Person details*********"<<endl;
    cout << "Person name : " << name << endl;
    cout << "Person salary : " << addr << endl;
    cout << "Person Dateofbirth : "<<endl;
    dob.displayDate();
  }
};


int main()
{
  Employee e;
  e.acceptEmployee();
  e.displayEmployee();

  person p;
  p.acceptperson();
  p.displayperson();
  return 0;
}

/*Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype.*/

#include <iostream>

using namespace std;

class employee
{   private :
    int id;
    protected:
    float sal;

    public:
    employee(int id, float sal)
    {
        cout<<"Inside employee"<<endl;
        this->id = id;
        this->sal=sal;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }

    int get_id()
    {
        return this->id;
    }

    float get_sal()
    {
        return this->sal;
    }

    protected:

    void accept()
    {
        cout<<"Enter employee id : ";
        cin>>this->id;

        cout<<"Enter employee salary : ";
        cin>>this->sal;
    }

    void display()
    {
        cout<<"Employee's id is : "<<this->id<<endl; 
        cout<<"Employee's salary is :"<<this->sal<<endl;
    }
    
};

 class manager : public virtual employee 
 {  private :
    float bonus;

    public:
    manager(int id, float sal,float bonus) : employee(id,sal),bonus(bonus)
    {
        cout<<"Inside manager"<<endl;
        this->bonus=bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    float get_bonus()
    {
        return this->bonus;
    }

    protected :
    void accept_manager()
    {
        accept();
        cout<<"Enter manager's bonus : ";
        cin>>this->bonus;

    }
    void display_manager()
    {   display();
        cout<<"manager's bonus is  "<<this->bonus<<endl; 
    }
 };

 class salesman : public virtual employee
 {  private:
    float comm;

    public:
    salesman(int id, float sal,float comm) : employee(id,sal),comm(comm)
    {
        cout<<"Inside salesman"<<endl;
        this->comm=comm;
    }

    void set_comm(float comm)
    {
        this->comm=comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    protected:
    void accept_salesman()
    {
        cout<<"Enter salesman's commission : ";
        cin>>this->comm;

    }

    void display_salesman()
    {
        cout<<"salesman's commission is "<<this->comm<<endl; 
    }

 };

 class sales_manager : public manager, public salesman
 {  public:
    sales_manager(int id,float sal,float bonus,float comm) : employee(id,sal),manager(id,sal,bonus), salesman(id,sal,comm)
    {
        cout<<"Inside sales_manager"<<endl;
    }

    void accept()
    {
        accept_manager();
        accept_salesman();

    }

    void display()
    {   cout<<"*******Employee details********"<<endl;
        display_manager();
        display_salesman(); 
    }
 };



int main()
{
    sales_manager s(1,1000.00,0.1,0.1);
    s.accept();
    s.display();

    cout<<"********Changes in employee details********"<<endl;
    s.set_id(12);
    cout<<"Employee's changed id is "<<s.get_id()<<endl;

    s.set_sal(900000.123);
    cout<<"Employee's changed salary is "<<s.get_sal()<<endl;

    s.set_bonus(0.6);
    cout<<"Employee's changed id is "<<s.get_bonus()<<endl;

    s.set_comm(6000);
    cout<<"Employee's changed id is "<<s.get_comm()<<endl;

    s.display();   
  
    return 0;
}

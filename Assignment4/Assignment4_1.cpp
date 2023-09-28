/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/

#include <iostream>

using namespace std;
class Time
{
    private:
    int *hr;
    int *min;
    int *sec;

   
    Time()
    {
        *this->hr=10;
        *this->min=10;
        *this->sec=10;

    }

    int getHour()
    {
        return *this->hr;
    }

    int getMinute()
    {
        return *this->min;
    }

    int getSecond()
    {
        return *this->sec;
    }

    void setHour()
    {
        *this->hr = 12;
    }

     void setMinute()
    {
        *this->min = 36;
    }

     void setSecond()
    {
        *this->sec = 59;
    }

    public:

    Time(int h,int m,int s)
    {
        this->hr = new int; 
        this->min = new int;
        this->sec = new int;

        *this->hr= h;
        *this->min= m;
        *this->sec= s;

        
    }
    void acceptTime()
    {
        cout<<"Enter Time (hr,min,sec) :: ";
        cin>>*this->hr>>*this->min>>*this->sec;
    }
     void printTime()
    {
        cout<<"Time = "<<*this->hr<< ":"<<*this->min<<":"<<*this->sec<<endl;
    }

    ~Time()
    {
        delete this->hr;
        delete this->min;
        delete this->sec;

        this->hr = NULL;
        this->min=NULL;
        this->sec= NULL;
    }


};

int main()
{
    
    Time *T[2];
    cout<<"Time after ctor"<<endl;
    T[0] = new Time(03,06,41);

    T[1] = new Time(04,18,41);

    for(int i = 0;i<2;i++)
    {
        cout<<"Time for T["<<i<<"] object = ";
        T[i]->printTime();
        
    }
 
    // cout<<"**************************************************"<<endl;
    // for(int i = 0;i<2;i++)
    // {
    //     T[i]->setHour();
    //    cout<<"After updating hours for T["<<i<<"] object = "<<T[i]->getHour()<<endl;
    // }

    // cout<<"**************************************************"<<endl;
    // for(int i = 0;i<2;i++)
    // {
    //     T[i]->setMinute();
    //    cout<<"After updating minutes for T["<<i<<"] object = "<<T[i]->getMinute()<<endl;
    // }
    

    // cout<<"**************************************************"<<endl;
    // for(int i = 0;i<2;i++)
    // {
    //     T[i]->setSecond();
    //    cout<<"After updating seconds for T["<<i<<"] object = "<<T[i]->getSecond()<<endl;
    // }
 

    // cout<<"**************************************************"<<endl;
    // for(int i = 0;i<2;i++)
    // {
    //     cout<<"Time for T["<<i<<"] object = ";
    //     T[i]->printTime();
    // }
    // cout<<endl;

    for(int i=0;i<2;i++)
    {
        T[i]->acceptTime();
        T[i]->printTime();
    }


    delete T[0];
    delete T[1];
    return 0;
}
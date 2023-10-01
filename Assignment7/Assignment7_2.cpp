/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage*/


#include<iostream>
using namespace std;

class Products
{
    private :
    int id;
    string title;
    int price;
    char type;

    public :

    Products(int id , string title, int price, char type)
    {
        this->id = id;
        this->title = title;
        this->price = price;
        this->type = type;
    }

    char get_type()
    {
        return this->type;
    }

    int get_price()
    {
        return this->price;
    }

};

class Books : public Products
{
    private :
    string author;

    public :
   

    Books(int id , string title, int price, char type, string author) : Products(id,title,price,type)
    {
            this->author = author;
    }

};

class Tapes : public Products
{
    private :
    string artist;

    public :

    Tapes(int id, string title, int price, char type, string artist) : Products(id,title,price,type)
    {
            this->artist = artist;
    }
};

int menu()
 {
    int choice;
    cout<<"-------------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Buy Product"<<endl;
    cout<<"2. Total price"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    return choice;
 }


int main()
{
    int choice;
    Products *arr[3];
    int index =0;

    while((choice =menu())!= 0)
    {
        switch (choice)
        {
            case 0: break;

            case 1: 
                    int choice1;
                    cout<<"-----------------"<<endl;
                    cout<<"Which product do you want to buy?"<<endl;
                    cout<<"1. Books(10% discount)"<<endl;
                    cout<<"2. Tapes(5% discount)"<<endl;
                    cout<<"-----------------"<<endl;
                    cout<<"Enter your choice ";
                    cin>>choice1;

                    switch(choice1)
                    {
                        case 1: 
                                if(index<3)
                                {
                                arr[index] = new Books(1,"the_secrets",200,'B',"Rhonda Byrne");
                                index++;
                                }
                                else
                                cout<<"Limit reached, cannot buy nother Book"<<endl;
                                break;

                        case 2:
                                if(index<3)
                                {
                                arr[index] = new Tapes(2,"At the edge",300,'T',"Picasso Chales");
                                index++;
                                }
                                else
                                cout<<"Limit reached, cannot buy nother Tape"<<endl;
                                break;

                        default:
                                cout<<"Entered wrong choice!!"<<endl;
                    }
                    break;


            case 2 :
                    cout << "-----------------" << endl;
                    int book_sum = 0;
                    int tapes_sum = 0;
                    for (int i = 0; i < index; i++)
                    {
                        if (arr[i]->get_type() == 'B')
                        {
                            book_sum += arr[i]->get_price();
                        }
                        else if (arr[i]->get_type() == 'T')
                        {
                            tapes_sum += arr[i]->get_price();
                        }
                    }
                    cout<<"Prices after getting discounts"<<endl;
                    book_sum = book_sum * 0.90;
                    cout << "Book price : " << book_sum << endl;
                    tapes_sum = tapes_sum * 0.95;
                    cout << "Tapes price : " << tapes_sum << endl;

                    int total_price = book_sum + tapes_sum; 
                    cout<< "Total price : " << total_price << endl;
                    break;

        }
                    
    }

    for(int i = 0;i<index;i++)
    delete arr[i];
    cout<<"Thank you for buying product!!"<<endl;

    return 0;
}
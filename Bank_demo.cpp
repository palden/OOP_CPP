#include<iostream>
#include<string>
using namespace std;
class bank
{
    string customer_name;
    double balance;
    public:
        bank(string,double);
        void withdraw(double);
        void deposit(double);
        void display();
};
bank::bank(string name,double bal)
{
    customer_name=name;
    balance=bal;
}
void bank::deposit(double amt)
{
    balance=balance+amt;
   cout<<amt<<"deposited into your account:"<<endl;

}
void bank::withdraw(double amt)
{
    if(amt<balance)
    {
        cout<<"insufficient fund!!!"<<endl;
    }
   else
    {
    cout<<amt<<"sucessfully withdraw"<<endl;
    }
}
void bank::display()
{
    cout<<"following are the customer details:"<<endl;
    cout<<"name:"<<customer_name<<endl;
    cout<<"balance amount: "<<balance<<endl;
}
int main()
{
    bank b("dipesh",0.0),c("smaran",1000);
    b.display();
    c.display();
    return 0;
}

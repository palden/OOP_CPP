#include<iostream>
using namespace std;
class bank
{
    string costumer_name;
    double balance_amount;

public:

    bank(string name,double balance)
    {
        costumer_name=name;
        balance_amount=balance;
        return;
    }
    string getName();
    double getBalance();
    double newBalance(int);
    double Withdraw(int);

};

    string bank:: getName()
    {
        return(costumer_name);
    }

  double bank:: getBalance()
  {
        return(balance_amount);
  }
    double bank:: newBalance(int d)
    {
        return((balance_amount+d));
    }
    double bank:: Withdraw(int w)
    {
    	if(w<balance_amount)
    	return((balance_amount-w));
    	else
    	return balance_amount;
    }
int main()
{
    int choice;
    string p;
    double b;
    int d;
    int c;
    cout<<"Enter the name of costumer"<<endl;
    cin>>p;
    bank ob(p,500000);
    cout<<"1.Detail"<<endl<<"2.Deposit"<<endl<<"3.Withdraw"<<endl;

    cout<<"Enter the option: ";
    cin>>choice;
    switch (choice)
    {
    	case 1:
    	     cout<<"The required detail are : "<<endl;
    	     cout<<"The name of costumer : "<<ob.getName()<<endl;
    	     cout<<"The balance of costumer : "<<ob.getBalance()<<endl;
    	     break;
    	 case 2:
    	     cout<<"Enter the amount to be deposited: ";
    	     cin>>d;
    	     cout<<"New balance : "<<ob.newBalance(d);

    	     break;

    	     case 3:
    	         cout<<"Enter the amount to withdraw : ";
    	         cin>>c;
    	         cout<<"New balance : "<<ob.Withdraw(c);
    	     default:
    	     break;
    }



    return 0;


}

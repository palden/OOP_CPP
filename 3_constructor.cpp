#include<iostream>
using namespace std;
class box
{
    double length;
    double breadth;
    double height;
public:
    box()
    {
        cout<<"constructor get called"<<endl;
    }
    box(double l,double b,double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double getvolume();
};
double box::getvolume()
{
    return(length*breadth*height);
}
int main()
{
    box b(10,20,5);
    cout<<"volume= "<<b.getvolume()<<endl;
    return 0;
}

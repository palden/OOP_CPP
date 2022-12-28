#include<iostream>
using namespace std;
class box
{
    double length;
    double height;
    double breadth;
    public:
    void setlength(double l);
    void setbreadth(double b);
    void setheight(double h);

    double getlength();
    double getbreadth();
    double getheight();
    double getvolume();

};
double box::getvolume()
{
    return(length*(breadth*height));
}
void box::setlength(double l)
{
    length=1;
}
void box::setbreadth(double b)
{
    breadth=b;
}
void box::setheight(double h)
{
    height=h;
}
double box::getlength()
{
    return length;
}
double box::getbreadth()
{
    return breadth;
}
double box::getheight()
{
    return height;
}

int main()
{
    box b;
    b.setheight(10);
    b.setbreadth(20);
    b.setlength(5);
    cout<<"volume= "<<b.getvolume()<<endl;
    cout<<"length="<<b.getlength()<<" breadth= "<<b.getbreadth()<<" height= "<<b.getheight()<<endl;
    return 0;
}

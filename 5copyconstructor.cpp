#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
public:
    rectangle();
    rectangle(int l,int b);
    int area();
    rectangle(const rectangle &obj)
    {
        length= obj.length;
        breadth= obj.breadth;
    }
};
int rectangle::area()
{
    return(length*breadth);
}
rectangle::rectangle(){
length=10;
breadth=20;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
    int main()
    length=10;
    breadth=20;
}
{
rectangle obj1,obj2(2,5);
cout<<"area= "<<obj1.area()<<endl;
cout<<"area= "<<obj2.area()<<endl;
rectangle ob3=ob2;
cout<<"area ="<<obj3.area()<<endl;
return 0;
}

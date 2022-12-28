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
    rectangle compare(rectangle o1,rectangle o2)
    {
        if(o1.area()> o2.area())
            return o1;
        else return o2;
    }
    rectangle (const rectangle &obj)
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
    {

rectangle obj1,obj2(2,5);
cout<<"area= "<<obj1.area()<<endl;
cout<<"area= "<<obj2.area()<<endl;
rectangle obj3=obj2;
cout<<"area ="<<obj3.area()<<endl;
rectangle temp=obj2.compare(obj2,obj1);
cout<<"The largest Area is "<<temp.area()<<endl;
return 0;
}

#include<iostream>
using namespace std;
class converter
{
    float kilogram;
public:
    converter(float k):kilogram(k){}
    operator int()
{
    int gram;
    gram=static_cast<int>(kilogram*1000);
    return gram;
}
};

int main()
{
    converter c(10);
    int gm=c;
    cout<<gm<<endl;
}

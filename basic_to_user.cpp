#include<iostream>
using namespace std;
class Distance
{
    int centimeter;
    float meter;
    public:
        Distance(float cm):centimeter(cm)
        {
            meter =static_cast<float>(centimeter/100.0);
        }
        void display()
        {
            cout<<centimeter<<"cm ="<<meter<<"m"<<endl;
        }
};
int main()
{
    Distance d=125;
    d.display();
    return 0;
}

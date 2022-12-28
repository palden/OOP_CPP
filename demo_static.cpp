#include<iostream>
using namespace std;
class test{
public:
    static int ob_count;
    test();
    static int getcount()
    {
        return ob_count;
    }
    };
    test::test(){
    cout<<"default constructor"<<endl;
  ob_c

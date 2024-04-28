#include <iostream>
using namespace std;

class sum
{
    protected:
        int x;
    public:
    sum():x(0)
    {}
    void get(){
        cout<<"Enter the number: ";
        cin>>x;
    }
    int operator +(sum m)
    {
        return x + m.x;
    }
};

class subt: public sum
{
    public:
    int operator -(subt m)
    {
        return x - m.x;
    }
};

int main(){
    subt p1,p2;
    p1.get();
    p2.get();
    cout<<p1+p2<<endl;
    cout<<p1-p2<<endl;
}
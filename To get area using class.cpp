#include <iostream>
using namespace std;
class circle
{
    int r;
    public:
        void getdata(int);
        int getarea();
};
void circle::getdata(int x)
{
    r=x;
}
int circle::getarea()
{
    float pi;
    pi = 3.14;
    int c=pi*r*r;
    return c;
}
int main()
{
    circle c;
    int r,s;
    cout<<"enter the radius";
    cin>>r;
    c.getdata(r);
    s=c.getarea();
    cout<<s;
    return 0;
}
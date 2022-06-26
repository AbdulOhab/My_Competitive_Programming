#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int v;

public:
    void setx(int a,int b)
    {
       this-> x=a;
       this-> v=b;
    }
    int area()
    {
        return x*v;
    }
};
Point scan()
{
    int h,w;
    cin>>h>>w;
    Point ob;
    ob.setx(h,w);
    return ob;

}
void good(Point sa)
{
    cout<<sa.area()<<endl;
}
main()
{
    Point obj;
    obj=scan();
    good(obj);

    return 0;
}


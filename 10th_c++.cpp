#include<iostream>
#include<cmath>

using namespace std;
class point
{
    int a,b;
    friend void distance(point p1,point p2);
    public:
    point(int x,int y){
        a=x;
        b=y;
    }
    void printpoint(){
        cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }

};
void distance(point p1,point p2)
{
    double d;
    int val1=(p2.a-p1.a)*(p2.a-p1.a);
    int val2=(p2.b-p1.b)*(p2.b-p1.b);
    d =sqrt(val1+val2);
    cout<<"Distance is "<<d;
}

int main(){
    point p1(2,4);
    p1.printpoint();

    point p2(1,2);
    p2.printpoint();

    distance(p1,p2);

    return 0;
}

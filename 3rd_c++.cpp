#include <iostream>
using namespace std;

int main()
{
    int r;
    const float pie = 3.14;
    cout << "Enter the value for radius" << endl;
    cin >> r;
    cout << "The area of the circle is :" << pie * pie * r;
    return 0;
}
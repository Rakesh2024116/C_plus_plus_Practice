#include <iostream>
using namespace std;

class solution
{

public:
    int multiplication()
    {
        int a, b;
        cout << "Enter the two numbers" << endl;
        cin >> a >> b;
        return a * b;
    }
};

int main()
{
    int c;
    solution mul;
    c = mul.multiplication();
    cout << "the multiplication of two numbers is\n"
         << c;
    return 0;
}
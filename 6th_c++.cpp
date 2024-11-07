#include <iostream>
using namespace std;
class solution
{
public:
    float sum()
    {
        float a, b;
        cout << "Enter the two numbers" << endl;
        cin >> a >> b;
        return a + b;
    }
};

int main()
{
    float c;
    solution sum;
    c = sum.sum();
    cout << "The sum of the two numbers is " << c << endl;
    return 0;
}
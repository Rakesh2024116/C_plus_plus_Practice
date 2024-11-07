/* using Macro*/
#include <iostream>
using namespace std;

#define mul(a, b) (a * b) //macros defined.
class solution
{

public:
    int macro();
};
int solution::macro()
{
    int a1, b1, c;
    cout << "Enter the two numbers\n";
    cin >> a1 >> b1;
    c = mul(a1, b1);//gives the value of a*b.
    return c;
}

int main()
{
    int multiplication;
    solution Macro_Code;
    multiplication = Macro_Code.macro();
    cout << "The Output is=" << multiplication;
    return 0;
}
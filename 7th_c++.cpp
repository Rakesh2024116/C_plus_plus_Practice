#include <iostream>
using namespace std;

class solution
{
public:
    int getsum();
};
int solution::getsum()
{
    int a[100], n, sum = 0;
    cout << "Enter the number of elements\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "enter the "<< i + 1<<" th element"<<endl;
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    int c;
    solution sum_of_numbers_in_array;
    c = sum_of_numbers_in_array.getsum();
    cout << "The sum of elements in an array is " << c;
    return 0;
}
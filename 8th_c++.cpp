#include <iostream>
using namespace std;
class solution
{
public:
    int find_element();
};
int solution::find_element()
{
    int arr[100], n, i, k, c;
    cout << "Enter the number of the element " << endl;
    cin >> n;
    cout << "Enter the array elements\n";
    for (i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    cout << "Enter the element place you want to find\n";
    cin >> k;
    for (i = 0; i < n; i++)
    {
        /* code */
        if (i == k)
        {
            c = arr[i - 1];
        }
    }
    return c;
}

int main()
{
    int element;
    solution find_array_Element;
    element = find_array_Element.find_element();
    cout << "The element is " << element;
    return 0;
}
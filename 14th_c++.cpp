/*Linear serach program without using any library function*/

#include <iostream>

using namespace std;

class linearSearch
{
    public:
        linearSearch(int *arr, int *size, int* element); // constructor(same name as class name)

};

int main()
{
    int arr[] = {12, 23, 45, 67, 89, 12, 34, 56, 78, 90, 12, 34, 56, 78, 90, 12, 34, 56, 78, 90, 12, 34, 56, 78, 90};

    int len = sizeof(arr) / sizeof(arr[0]);

    int searchElement;
    cout << "Enter the element to be searched : ";
    cin >> searchElement;

    linearSearch obj(arr, (&len), (&searchElement)); // Constructor call
    return 0;
}

linearSearch::linearSearch(int *arr, int *size, int* element)
{
    for(int i=0; i< *size; i++)
    {
        if(arr[i] == *element)
        {
            cout << "element found at index " << i << "\n";
            break;
        }
        else if(i == *size - 1)
        {
            cout << "element not found\n";
        }
    }
}

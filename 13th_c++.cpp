/* print max and min element of an array */

#include <iostream>

using namespace std;

class maxminArr
{
    public:
        maxminArr(int *arr, int *size); // constructor(same name as class name)
};

int main()
{
    int arr[]={12, 13, 43, 65, 18, 15, 95, 86, 74};
    int len = sizeof(arr) / sizeof(arr[0]);
    maxminArr obj(arr, (&len));
    return 0;
}

maxminArr::maxminArr(int *arr, int *size)
{
    int temp = 0;
    
    cout << "length of the array is " << size << "\n";
    // sorting array in ascending order
    for (int i = 0; i < *size; i++)
    {
        for (int j = i+1; j < *size; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "array elements are : \n";
    for (int a = 0; a < *size; a++)
    {
        cout << arr[a] << "\n"; 
    }

    cout << "The largest element of the array is "<< arr[*size-1] << "\n";
    cout << "The smallest element of the array is "<< arr[0] << "\n";
}


/*C++ program to find minimum (or maximum) element  
in an array using built in library which uses recursive function with less time complexity */ 
// #include <bits/stdc++.h>  
// using namespace std;  
  
// int getMin(int arr[], int n)  
// {  
//     return *min_element(arr, arr + n);  
// }  
  
// int getMax(int arr[], int n)  
// {  
//     return *max_element(arr, arr + n);  
// }  
  
// int main()  
// {  
//     int arr[] = { 12, 1234, 45, 67, 1 };  
//     int n = sizeof(arr) / sizeof(arr[0]);  
//     cout << "Minimum element of array: " << getMin(arr, n) << " ";  
//     cout << "Maximum element of array: " << getMax(arr, n);  
//     return 0;  
// }
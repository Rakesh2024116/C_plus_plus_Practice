/******compare 2 array elements are equal or not (With Implementation of Class and Member functions)*****/

#include <iostream>
// #include <bits/stdc++.h> // library for sorting the elements of array
#include <cmath>

using namespace std;

class compareArr{            
    public:
        void sortArr(int arr[], int n);
        void arrayInput(int arr1[], int arr2[], int size);
        bool arrayCompare();
};


// Sorting array function
void compareArr :: sortArr(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }  
    }

    cout << "array elements are : \n";
    for (int a = 0; a<n; a++)
    {
        cout << arr[a] << "\n"; 
    }

}

void compareArr::arrayInput(int arr1[], int arr2[], int size)
{
    cout << "Enter the array elements for the 1st array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the array elements for the 2nd array \n";
    for (int j = 0; j < size; j++)
    {
        cin >> arr2[j];
    }
    
}


bool compareArr::arrayCompare()
{
    int arr1[10], arr2[10];
    arrayInput(arr1, arr2, 10);

    sortArr(arr1, 10);
    sortArr(arr2, 10);

    for(int i = 0;i<10;i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}


int main()
{ 
    compareArr ca;
    if(ca.arrayCompare())
    {
        cout<< "Equal";
    }
    else
    {
        cout<<"Not Equal";

    }
    return 0;
}
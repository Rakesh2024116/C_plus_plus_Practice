/*find the average of an array*/

#include <iostream>


class avgArr
{
    public:
        void calAvg(int arr[], int size);

};

int main()
{
    int arr[]={12, 14, 15, 17, 65, 28, 84};
    int size = sizeof(arr) / sizeof(int);
    avgArr a;
    a.calAvg(arr, size);
    return 0;
}

void avgArr::calAvg(int arr[], int size)
{
    int sum = 0;
    float avg;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / size;
    std :: cout << "Average = " << avg;
}

#include <iostream>

using namespace std;

void change(int *arr, int size);

int main()
{
    int size = 5, loop = 0;
    //cin >> size;
    //cin >> loop;

    //int arr[] = {2, -5, 2, 0, 4};
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < loop; i++)
    {
        change(arr, size);
    }

    int sum = 0;
    while(size)
    {
        sum += arr[size - 1];
        size--;
    }

    cout << sum;

    return 0;
}


void change(int *arr, int size)
{
    int arr_min = 1001;

    for(int i = 0; i < size; i++)
    {
        if (arr_min > arr[i]) arr_min = arr[i];
    }

    while(size)
    {
        arr[size-1] = arr_min - arr[size-1];
        size--;
    }
}

#include <iostream>
using namespace std;

// 冒泡排序
void sort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        // j从0开始，相邻比较
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    // windows
    int arr[] = {12,4,89,43,21,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    // commit注释
    return 0;
}
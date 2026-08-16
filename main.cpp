#include <iostream>
using namespace std;

// 快速排序
void sort(int arr[], int i, int j)
{
    int val = arr[i];
    int l = i;
    int r = j;
    while(l <r){
        while(l < r && arr[r] >= val){
            r--;
        }
        if(l < r){
            arr[i++] = arr[r];
        }
        while(l < r&& arr[i] <= val){
            l++;
        }
        if(l < r){
            arr[i--] = arr[r];
        }
        arr[l] = val;
        sort(arr, i, l - 1);
        sort(arr, l + 1, j);
}

/*
函数重载不只限于类的成员函数，全局 / 命名空间内的普通函数完全支持重载。重载规则一致
*/ 
void sort(int arr[], int size){
    sort(arr, 0, size);
}

int main()
{
    // windows
    int arr[] = {12,4,89,43,21,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
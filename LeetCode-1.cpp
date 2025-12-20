#include<iostream>
using namespace std;

int* twosum(int arr[],int n, int target)
{
    int *drr = new int[2];
    for (int i = 0; i <n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                drr[0] = i;
                drr[1] = j;
                return drr;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 3, 5, 7, 4};
    int *ptr = twosum(arr, 5, 8);
    for (int i = 0; i < 2;i++)
    {
        cout << ptr[i]<<" ";
    }
        return 0;
    system("pause>nul");
}
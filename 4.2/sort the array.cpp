#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void sortArray(T arr[], int n)
{
    sort(arr, arr + n);
}
int main()
{
    int arr[] = {20, 40, 4, 65, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

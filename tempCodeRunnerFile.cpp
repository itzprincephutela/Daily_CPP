Total Number Of Ouccerence with Binary SEARCH
#include <iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key <arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key <arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[6] = {1, 2, 2, 2, 2, 2};
    int firstnum = firstocc(even, 6, 2);
    int lastnum = lastocc(even, 6, 2);
    cout << "first occ of even 2 is : " << firstnum << endl;
    cout << "first occ of even 2 is : " << lastnum << endl;
    int total = lastnum - firstnum + 1;
    cout << "TOTAL 2 in ARRAY IS : "<<total<<endl;
}
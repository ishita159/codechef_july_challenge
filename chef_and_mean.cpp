#include <bits/stdc++.h>
using namespace std;
int MAX = 100008;

int binarySearch(int *arr, int l, int r, double x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int search(int *arr, int n, double x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i+1;
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, array[MAX];
        double sum;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            sum += array[i];
        }
        sum = sum /n;
        int result = binarySearch(array,0, n-1, sum);
        (result == -1) ? printf("Impossible\n")
                       : printf("%d\n",
                                result);
    }
}

#include <bits/stdc++.h>
using namespace std;

bool ispossible(int arr[], int n, int k, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }

        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if (studentCount > k)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
}

int findPages(int arr[], int n, int k)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        s = max(s, arr[i]); 
    }

    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (ispossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findPages(arr, n, k);
    return 0;
}

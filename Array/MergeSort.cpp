#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    vector<int> v;
    int i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            v.push_back(a[i]);
            i++;
        }
        else
        {
            v.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        v.push_back(a[i]);
        i++;
    }
    while (j <= r)
    {
        v.push_back(a[j]);
        j++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        a[l + i] = v[i];
    }
}

void mergesort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergesort(a, l, mid);
    mergesort(a, mid + 1, r);
    merge(a, l, mid, r);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
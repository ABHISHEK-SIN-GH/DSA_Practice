#include <bits/stdc++.h>
using namespace std;

void Union(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout<<*itr<<" ";
    }
}

void Intersection(int a[], int n, int b[], int m)
{
    int ai = 0, bi = 0;
    while (ai < n && bi < m)
    {
        if (a[ai] > b[bi])
        {
            bi++;
        }
        else if (b[bi] > a[ai])
        {
            ai++;
        }
        else
        {
            cout << a[ai] << " ";
            ai++;
            bi++;
        }
    }
}

int main()
{
    int a[] = { 1, 3, 2, 3, 3, 4, 5, 5, 6 };
    int b[] = { 3, 3, 5 };
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    
    cout<<"Union : ";

    Union(a,n,b,m);

    cout<<endl;

    cout<<"Intersection : ";

    Intersection(a,n,b,m);

    cout<<endl;

    return 0;
}
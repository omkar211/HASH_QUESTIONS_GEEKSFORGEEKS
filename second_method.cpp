
// CPP program to find the only repeating
// element in an array where elements are
// from 1 to n-1.
#include <bits/stdc++.h>
using namespace std;

int findRepeating(int arr[], int n)
{
   // Find array sum and subtract sum
   // first n-1 natural numbers from it
   // to find the result.
   return accumulate(arr , arr+n , 0) -
                   ((n - 1) * n/2);
}

// driver code
int main()
{
    int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findRepeating(arr, n);
    return 0;
}

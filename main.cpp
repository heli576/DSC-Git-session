#include<iostream>
#include "mergeSort.cpp"
using namespace std;

void printArray(int A[], int n)
{
    fn  cout << A[i] << " ";
}

// Entry point of file
int main()
{
    // File Input
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
// online submission
#endif
    int n;
    cin>>n;
    int arr[n];
    fn cin>>arr[i];

    cout << "Given array is \n";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array is \n";
    printArray(arr, n);
    return 0;
}
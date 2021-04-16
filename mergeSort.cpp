#include "merge.cpp"

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return; //returns recursively
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
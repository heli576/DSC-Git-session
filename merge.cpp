// Macro to operate upon an array
#define fn for(int i=0; i<n; i++)

void merge(int arr[], int l, int m, int r)
{
    // Number of elements in first half
    int n1 = m - l + 1;
    // Number of elements in second half
    int n2 = r - m;
    // Arrays for the two halves
    int L[n1], R[n2];

    // Temporary integer to use the macro
    int n = n1;
    // Initialise the first half
    fn  L[i] = arr[l + i];
    n = n2;    
    // Initialise the second half
    fn  R[i] = arr[m + 1 + i];
    // Initial index of first subarray
    int i = 0;
    // Initial index of second subarray
    int j = 0;
    // Initial index of merged subarray
    int k = l;
    
    while (i < n1 && j < n2)
    {
        // Select the smaller number from the two arrays
        if (L[i] <= R[j])
            arr[k] = L[i], i++;
        else
            arr[k] = R[j], j++;
        // Increment the counter
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1)
        arr[k] = L[i], i++, k++;

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2)
        arr[k] = R[j], j++, k++;
}
// Jonathan Nguyen
// Prabhdeep Brar
// CS-413-01
#include <iostream>
using namespace std;

int countDuplicates(int arr[], int n) // Question #1
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break; // stops duplicates from being counted twice
            }
        }
    }
    return count;
}

int countDuplicatesSorted(int arr[], int n) // Question #2
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Question #1
    int arr[] = {1, 2, 1, 3, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicates = countDuplicates(arr, n);

    cout << "Question #1: {1, 2, 1, 3, 3, 4, 3}" << endl;
    cout << "The array has " << duplicates << " duplicates.\n"
         << endl;

    // Question #2
    int arrSorted[] = {1, 1, 2, 3, 3, 3, 4}; // Sorted list.
    n = sizeof(arrSorted) / sizeof(arrSorted[0]);

    duplicates = countDuplicatesSorted(arrSorted, n);

    cout << "Question #2: {1, 1, 2, 3, 3, 3, 4}" << endl;
    cout << "The array has " << duplicates << " duplicates." << endl;

    return 0;
}

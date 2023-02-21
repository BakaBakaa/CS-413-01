#include <iostream>
using namespace std;

int countDuplicates(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;  // stops duplicates from being counted twice
            }
        }
    }
    return count;
}

int main()
{
    // Question #1
    int arr[] = {1, 2, 1, 3, 3, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicates = countDuplicates(arr, size);

    cout << "Question #1: {1, 2, 1, 3, 3, 4, 3}" << endl;
    cout << "The array has " << duplicates << " duplicates.\n" << endl;

    // Question #2
    int arrSorted[] = {1, 1, 2, 3, 3, 3, 4};
    size = sizeof(arr) / sizeof(arr[0]);

    duplicates = countDuplicates(arr, size);

    cout << "Question #1: {1, 1, 2, 3, 3, 3, 4}" << endl;
    cout << "The array has " << duplicates << " duplicates." << endl;

    return 0;
}

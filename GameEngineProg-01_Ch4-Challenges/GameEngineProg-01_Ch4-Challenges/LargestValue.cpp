#include "LargestValue.h"

int LargestValue::FindLargestValue(int intArr[], int arrSize)
{
    int largestValue = intArr[0];

    for (int i = 1; i < arrSize; i++)
    {
        if (intArr[i] > largestValue)
        {
            largestValue = intArr[i];
        }
    }

    return largestValue;
}

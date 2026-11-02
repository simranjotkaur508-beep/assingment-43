#include <stdio.h>

int highestMarks(int *ptr[], int size[], int n)
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            if (*(ptr[i] + j) > max)
            {
                max = *(ptr[i] + j);
            }
        }
    }

    return max;
}

int main()
{
    int c1[] = {45, 67, 89};
    int c2[] = {56, 78, 92, 34};
    int c3[] = {65, 88};
    int c4[] = {90, 76, 55};
    int c5[] = {72, 85, 95};

    int *ptr[5] = {c1, c2, c3, c4, c5};

    int size[5] = {3, 4, 2, 3, 3};

    int result = highestMarks(ptr, size, 5);

    printf("Highest marks = %d", result);

    return 0;
}
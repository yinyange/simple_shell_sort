/* shellsort: sort v[0]...v[n1] into increasing order */
#include <stdio.h>

void shellsort(int v[], int n)
{
    int gap = 0;
    int i = 0;
    int j = 0; 
    int temp = 0;
    
    for (gap = n/2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) 
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
    }
    n = 100;
}

int main()
{
    int numbers[] ={9, 8, 7, 6, 5, 4, 3, 2, 1, 0,};
    int a = 0;
    int n = 10;
    
    shellsort(numbers, n);
    for(a=0; a<n; ++a)
    {
        printf("%6d", numbers[a]);
    }
    return 0;
}
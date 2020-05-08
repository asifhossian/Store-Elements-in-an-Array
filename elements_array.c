#include <stdio.h>

int main()
{
    int n,i;

    printf("Input how many elements in the array :\n",n);

    scanf("%d",&n);

    int arr[n];

    if(n == 0)
    {
        printf("Zero elements in this array\n");
        return 0;
    }
    else if(n < 0)
    {
        printf("Array elements can't be negative\n");
        return 0;
    }

    else
    {

        printf("Input %d elements in the array :\n",n);

        for(i=0; i<n; i++)
        {
            printf("Array index [%d] and Elements no. (%d): ",i,i+1);
            scanf("%d", &arr[i]);
        }

        printf("\nElements in array are: ");

        for(i=0; i<n; i++)
        {
            printf("%d  ", arr[i]);
        }
        printf("\n");

    }

    return 0;
}

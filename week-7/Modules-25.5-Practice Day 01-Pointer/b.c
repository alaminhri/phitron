#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void bubble(int b[], int l)
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (b[i] > b[j])
            {
                swap(&b[i], &b[j]);
            }
        }
    }
}

int main()
{
    int ar[100];
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    bubble(ar, n);

    printf("Sorted Array :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
/*#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

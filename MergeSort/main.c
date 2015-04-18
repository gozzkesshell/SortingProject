#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 100
#define i 1

void MergeSort(int *, int);
void merge (int *, int , int );
void randInput(int *,int );
void bestInput(int *,int );
void worstInput(int *,int );

int main ()
{
    int *a;
    int n;
    int i;

   // printf("Input the number of numbers\n");
   // scanf("\n%d", &n);
    a=(int *)malloc(n*sizeof(int));
   // printf("Choose how to full unsorted massive: 1 - rand,2 - best,3 - worst\n");
    //scanf("%d",&i);
        switch(i)
        {
            case 1: randInput(a,n);
            break;
            case 2: bestInput(a,n);
            break;
            case 3: worstInput(a,n);
            break;
            default: exit(EXIT_FAILURE);
        }

    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i],  i%20 == 0 ? "\n" : " ");}
    MergeSort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i],  i%20 == 0 ? "\n" : " ");}
    return 0;
}

void merge (int *a, int n, int m) {
    int i, j, k;
    int *x = malloc(n * sizeof (int));
    for (i = 0, j = m, k = 0; k < n; k++) {
        x[k] = j == n      ? a[i++]
             : i == m      ? a[j++]
             : a[j] < a[i] ? a[j++]
             :               a[i++];
    }
    for (i = 0; i < n; i++) {
        a[i] = x[i];
    }
    free(x);
}

void MergeSort (int *a, int n) {
    if (n < 2)
        return;
    int m = n / 2;
    MergeSort(a, m);
    MergeSort(a + m, n - m);
    merge(a, n, m);
}



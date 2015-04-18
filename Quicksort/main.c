#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define n 100
#define i 1
 void QuickSort (int *a, int n);
 void randInput(int *,int );
 void bestInput(int *,int );
 void worstInput(int *,int );



void QuickSort (int *a, int n) {
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    QuickSort(a, i);
    QuickSort(a + i, n - i);
}

int main () {
    int *a;
    int n;
    int i;

    //printf("Input the number of numbers\n");
    //scanf("\n%d", &n);
    a=(int *)malloc(n*sizeof(int));
   // printf("Choose how to full unsorted massive: 1 - rand,2 - best,3 - worst\n");
   // scanf("%d",&i);
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
    //int n = sizeof a / sizeof a[0];
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i],  i%20 == 0 ? "\n" : " ");}
    QuickSort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i],  i%20 == 0 ? "\n" : " ");}
    return 0;
}



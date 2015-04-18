#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 100
#define v 1

void QuickSort(int *a, int );
void randInput(int *);
void bestInput(int *);
void worstInput(int *);

int main () {
    int *a;
    int f;
    int i;
    f=n;
 //   printf("Input the number of numbers\n");
 //   scanf("\n%d", &n);
    a=(int *)malloc(n*sizeof(int));
   // printf("Choose how to full unsorted massive: 1 - rand,2 - best,3 - worst\n");
   // scanf("%d",&i);
        switch(v)
        {
            case 1: randInput(a);
            break;
            case 2: bestInput(a);
            break;
            case 3: worstInput(a);
            break;
            default: exit(EXIT_FAILURE);
        }
    //int n = sizeof a / sizeof a[0];
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
    QuickSort(a,f);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
    return 0;
}


void QuickSort (int *a, int N) {
    int i, j, p, t;
    if (N < 2)
        return;
    p = a[N / 2];
    for (i = 0, j = N - 1;; i++, j--) {
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
    QuickSort(a + i, N - i);
}

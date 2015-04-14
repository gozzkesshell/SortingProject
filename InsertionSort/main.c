#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 100
#define i 1

void InsertionSort(int *a, int n);
void randInput(int *,int );
void bestInput(int *,int );
void worstInput(int *,int );

int main () {
    int *a;
    int n;
    int i;

 //   printf("Input the number of numbers\n");
 //   scanf("\n%d", &n);
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
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
    (a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
    return 0;
}

void InsertioSort(int *a, int n) {
    int i, j, t;
    for (i = 1; i < n; i++) {
        t = a[i];
        for (j = i; j > 0 && t < a[j - 1]; j--) {
            a[j] = a[j - 1];
        }
        a[j] = t;
    }
}

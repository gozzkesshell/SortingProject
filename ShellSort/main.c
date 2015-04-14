#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 100
#define i 1

void ShellSort(int *, int);
void randInput(int *,int );
void bestInput(int *,int );
void worstInput(int *,int );

int main () {
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
    ShellSort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i],  i%20 == 0 ? "\n" : " ");}
    return 0;
}

void ShellSort (int *a, int n) {
    int h, i, j, t;
    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            t = a[i];
            for (j = i; j >= h && t < a[j - h]; j -= h) {
                a[j] = a[j - h];
            }
            a[j] = t;
        }
    }
}


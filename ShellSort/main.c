#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void ShellSort(int *, int);
void randInput(int *,int );
void bestInput(int *,int );
void worstInput(int *,int );

int main () {
    int *a;
    int n;
    int i;
    int c=0;
    printf("Input the number of numbers\n");
    scanf("\n%d", &n);
    a=(int *)malloc(n*sizeof(int));
    printf("Choose how to full unsorted massive: 1 - rand,2 - best,3 - worst\n");
    scanf("%d",&i);
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
    {   c+=20;
        printf("%d%s", a[i], i == c - 1 ? "\n" : " ");}
    ShellSort(a, n);
    for (i = 0; i < n; i++)
    {   c+=20;
        printf("%d%s", a[i], i == c - 1 ? "\n" : " ");}
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


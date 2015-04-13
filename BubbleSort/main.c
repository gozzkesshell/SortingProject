#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void BubbleSort (int *a, int n);
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
    (a, n);
    for (i = 0; i < n; i++)
    {   c+=20;
        printf("%d%s", a[i], i == c - 1 ? "\n" : " ");}
    return 0;
}

void BubbleSort (int *a, int n) {
    int i, t, s = 1;
    while (s) {
        s = 0;
        for (i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                s = 1;
            }
        }
    }
}

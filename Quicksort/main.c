#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 50000
#define v 3


void QuickSort(int *a, int );
void randInput(int *);
void bestInput(int *);
void worstInput(int *);
int q=0;// перестановки
int s=0;// sravnenia

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
         printf("\nKol-vo perestanovok i sravneniy: %d, %d",q,s);
    return 0;
}


void QuickSort (int *a, int N) {
    int i, j, p, t;
    if (N < 2)
        return;
    p = a[N / 2];
    for (i = 0, j = N - 1;; i++, j--) {
        while (a[i] < p){
            i++;
            s++;}
        while (p < a[j]){
            j--;
            s++;}
        if (i >= j){
            s++;
            break;}
        t = a[i];
        a[i] = a[j];
        q++;
        a[j] = t;
    }
    QuickSort(a, i);
    QuickSort(a + i, N - i);
}

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 100000
#define v 1

void  InsertionSort(int *a);
void randInput(int *);
void bestInput(int *);
void worstInput(int *);

 long long int q=0;// перестановки
 long long int s=0;// sravnenia
int main () {
    int *a;

    int i;

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
    InsertionSort(a);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
        printf("\nKol-vo perestanovok i sravneniy: %d, %d",q,s);
    return 0;
}
void  InsertionSort(int *a) {
    int i, j, t;
    for (i = 1; i < n; i++) {
        t = a[i];
        for (j = i; j > 0 ; j--) {
            s++;
            if(t < a[j - 1]){
            a[j] = a[j - 1];
            q++;}
            else break;
        }
        a[j] = t;
    }
}

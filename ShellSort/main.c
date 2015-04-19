#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 50000
#define v 1


void ShellSort(int *a);
void randInput(int *);
void bestInput(int *);
void worstInput(int *);
int q=0;// перестановки
int s=0;

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
    ShellSort(a);
    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i%20 == 0 ? "\n" : " ");}
        printf("\nKol-vo perestanovok i sravneniy: %d, %d",q,s);
    return 0;
}

void ShellSort (int *a) {
    int d, i, j, t;
    for (d = n; d > 0;d /= 2) {// d is choosing by Shell method
        for (i = d; i < n; i++) {
            t = a[i];
            for (j = i; j >= d; j -= d) {
                s++;
                if(t < a[j - d]){
                a[j] = a[j - d];
                q++;}
                else break;
            }
            a[j] = t;

        }
    }

}



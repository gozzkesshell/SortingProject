#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 50000

 void randInput(int * );
 void bestInput(int * );
 void worstInput(int * );


void randInput(int *a)
{
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%n;
    }
}

void bestInput(int *a)
{
    int i;
    a[0]=0;
    for(i=0;i<n;i++)
    {
        a[i]=i+1;


    }
	a[2]=348;

}

void worstInput(int *a)
{
    int i;
    a[0]=0;
    for(i=0;i<n;i++)
    {
        a[i]=n-i;


    }
	 a[99]=348;
}

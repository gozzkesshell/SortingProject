#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 void randInput(int *,int );
 void bestInput(int *,int );
 void worstInput(int *,int );


void randInput(int *a, int n)
{
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%n;
    }
}

void bestInput(int *a, int n)
{
    int i;
    a[0]=0;
    for(i=0;i<n;i++)
    {
        a[i]+=i;


    }
	a[2]=348;

}

void worstInput(int *a, int n)
{
    int i;
    a[0]=0;
    for(i=0;i<n;i++)
    {
        a[i]=n-i;


    }
	 a[99]=348;
}

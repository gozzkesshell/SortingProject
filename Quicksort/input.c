#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 10000

 void randInput(int *,int );
 void bestInput(int *,int );
 void worstInput(int *,int );


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
    for(i=1

        ;i<n;i++)
    {
<<<<<<< HEAD
        a[i]=i;
=======
        a[i]+=i;
<<<<<<< HEAD


    }
	a[2]=348;

=======


>>>>>>> origin/master
    }
	a[2]=348;
>>>>>>> origin/master
}

void worstInput(int *a)
{
    int i;
    a[0]=0;
    for(i=0;i<n;i++)
    {
        a[i]=n-i;
<<<<<<< HEAD

=======
<<<<<<< HEAD


=======


>>>>>>> origin/master
>>>>>>> origin/master
    }
	 a[99]=348;
}

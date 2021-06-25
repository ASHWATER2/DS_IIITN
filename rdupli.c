/*  This program will delete all the repeated elements from the array. */
#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"
#define R 5
int main()
{
    int a[R]={2,2,1,2,2};
    int i,j,r=R,m=0,x=R,t,b;
    printf("hello\n");
    for(i=0;i<r;i++)
    {
        t=i+1;x=x-m;m=0;
        for(j=(i+1);j<x;j++)
        {
            if(a[j]==a[i])
            {
                r=r-1;
                m++;
            }
            else
            {
                a[t++]=a[j];               
            }
        }
    }
    printf("r=%d\n",r);
    for(i=0;i<r;i++)
    printf("%d\n",a[i]);
    printf("after sorting\n");
    bubbleSort(a, r);
    for(i=0;i<r;i++)
    printf("%d\n",a[i]);
}
#include  "csl102lab0.h"
#include <stdio.h>
 int main()
{
    int x,y,z;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    swap(&x,&y,&z);
    //value of x, y, z after swapping
    printf("x=%d\ny=%d\nz=%d",x,y,z);
    return 0;
}
void swap(int *ptrFirst, int *ptrSecond, int *ptrThird)
{
    int t = *ptrFirst;
    *ptrFirst = *ptrThird;
    *ptrThird = *ptrSecond;
    *ptrSecond = t;
}
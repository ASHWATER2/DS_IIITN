//function to compute power of number
float power(int n,int m)
{  
    if(m>=0)
    { 
       int i;
       float f=1.0;
       for(i=0;i<m;i++)
           f*=n;
       return f;
    }
    else
    {
       int i;
       float f=1.0;
       for(i=0;i<(-m);i++)
           f*=1.0/n;
       return f;
    }
}
//function to compute factorial of number
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int f=n*fact(n-1);
    return f;
}
//functions for string comparison
int strcompa(char *s1,char *s2)
{
    while(*s1!='\0' &&(*s1==*s2))
    {
        s1++;
        s2++;
    }
    return (*s1-*s2);
}

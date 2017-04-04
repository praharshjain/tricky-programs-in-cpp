#include<stdio.h>
#define myFun(i,l,o,v,e,u,d) i##l##e##o
#define begin myFun(m,a,n,s,i,o,n)
int begin()
{
	printf("Hello, World!");
    return 0;
}
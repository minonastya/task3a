//1 способ возведения в степень
#include <stdio.h>
int main()
{ 
float a,b;
int n,i;
scanf("%f""%d", &a, &n);
if (n==0) a=b=1;
if (n>0) b=a;
if (n<0) {
a=b=1/a;
n=(-1)*n;
}
for(i=1;i<n;i++) a*=b;
printf("%f",a);
return 0;
}

//2 способ возведения в степень
#include <stdio.h>
int main()
{
float a,b,c;
int n,i;
scanf("%f""%d", &a, &n);
if (n==0) c=b=1;
if (n>0) c=b=a;
if (n<0) {
c=b=1/a;
n=(-1)*n;
}
a=1;
for(i=1;n>0;) {
if (n>=2*i) {
b*=b;
i*=2;
}
else {
a*=b;
b=c;
n-=i;
i=1;
}
}
printf("%f",a);
return 0;
}

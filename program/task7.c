//Простые числа, не превосходящие данного 
#include <stdio.h>
int main()
{ 
int a,j,i;
int s=0;
scanf("%d", &a);
for (i=2;a>=i;i++) {
for (j=2;j<i;j++) { 
if (i%j==0) s++;
}
if (s==0) printf("%d ", i);
s=0;
}  
return 0;
}

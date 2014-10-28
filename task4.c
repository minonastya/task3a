//Количество нулевых элементов в массиве
#include <stdio.h>
int main()
{ 
int a[10];
int i,s;
for (i=0;i<10;i++) scanf("%d", &a[i]);
s=0;
for (i=0;i<10;i++) {
if (a[i]==0) s++;
}
printf("%d",s);
return 0;
}

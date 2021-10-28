#include <stdio.h>

int Sum(int * A, const int size, int pos)
{
static int result = 0;
result += A[pos];
pos++;
return ( pos < size ) ? Sum(A,size,pos) : result;
}

int main()
{
const int n = 2;
int A[n];
for(int x = 0; x < n; x++)
{
printf("Введіть число-");
scanf("%d", &A[x]);
}

printf("Вивід:%d\n", Sum(A,n,0));

return 0;
}

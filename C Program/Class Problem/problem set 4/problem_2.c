#include <stdio.h>

int main()
{
  int n, i, j;
  scanf("%d", &n);
  // pattern 1
  for (i = 0; i <= n; i++)
  {
    for (j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  // pattern 2
  for (i = 0; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  printf("\n");

  // pattern 3
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
  printf("\n");

  // pattern 4
  int x = n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", x);
    }
    x--;
    printf("\n");
  }
  printf("\n");

  // pattern 5
  for (i = 1; i <= n; i++)
  {
    int x = n;
    for (j = 1; j <= i; j++)
    {
      printf("%d ", x--);
    }
    printf("\n");
  }
  return 0;
}

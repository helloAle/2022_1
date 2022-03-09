#include <stdio.h>
 
int main()
{
  int array[100], n, i, d, troca;

  printf("\n\t Insira  aquantidade de elementos\n\t ");
  scanf("%d", &n);
 
  printf("\n\t Insira %d numeros: \n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    
 
  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (d = 0 ; d < n - i - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        troca       = array[d];
        array[d]   = array[d+1];
        array[d+1] = troca;
      }
    }
  }
 
  printf("\n\t Numeros organizados em ordem crescente: \n\t");
 
  for ( i = 0 ; i < n ; i++ )
     printf(" %d ", array[i]);
 
  return 0;
}

#include "T2.h"
//Сложить все элементы массива, под чётными номерами

int summ_even_elem_mas(int massiv[], int n);

void test();

int main()
{
  const int n = 5;

  int seq[n] = {};  
  filling_massiv(seq, n);
  
  test();
  
  printf("summ = %d\n", summ_even_elem_mas(seq, n));
  
  return 0;
}


int summ_even_elem_mas(int massiv[], int n)
{
  int summ = 0;

  for (int i = 0; i < n; i+=2)
    summ = summ + massiv[i];
  
  return summ;
}


void test()
{
  const int n = 5;

  int result[n] = {1, 2, 3, 4, 5};

  int summ_ref = 9;
  
  if (summ_even_elem_mas(result, n) == summ_ref)
      printf("test is OK\n");
  else
      printf("test is not OK\n");
}
#include "T2.h"
/*Есть 2 массива, 
умножить последний элемент первого массива на самый больший элемент первого массива и 
умножить на самый меньшей эелемент из второго массива*/

int multiply_elem_mass(int seq_1[], int seq_2[], int n);

void test();


int main()
{
  test();
  
  return 0;
}


int multiply_elem_mass(int seq_1[], int seq_2[], int n)
{
  int product = seq_1[n - 1]*max_elem_mass(seq_1, n)*min_elem_mass(seq_2, n);

  return product;
}


void test()
{
  const int n = 3;

  int seq_1[n] = {};
  int seq_2[n] = {};

  massiv_init(seq_1, n, 1, 1);
  massiv_init(seq_2, n, 2, 2);

  int product = seq_1[n - 1]*max_elem_mass(seq_1, n)*min_elem_mass(seq_2, n);

  if (multiply_elem_mass(seq_1, seq_2, n) == product)
    printf("test is OK\n");
  else
    printf("test is not OK\n");
}
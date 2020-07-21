#include "T2.h"

int multiply_summ_elem_mass(int seq[], int n);

void test();


int main()
{
  test();  
  
  return 0;
}


int multiply_summ_elem_mass(int seq[], int n)
{
  int multiply = summ_elem_mass(seq, n)*min_elem_mass(seq, n);

  printf("multiply = %d \n", multiply);
  
  return multiply;
}


void test()
{
  const int n = 3;

  int seq_1[n] = {};
  int seq_2[n] = {};
   
  massiv_init(seq_1, n, 2, 2);
  massiv_init(seq_2, n, 3, 3);
  
  int multiply_1 = summ_elem_mass(seq_1, n)*min_elem_mass(seq_1, n);
  int multiply_2 = summ_elem_mass(seq_2, n)*min_elem_mass(seq_2, n);

  if (multiply_1 ==  multiply_summ_elem_mass(seq_1, n))
    printf("test_1 is OK\n");
  else
    printf("test_1 is not OK\n");

  if (multiply_2 ==  multiply_summ_elem_mass(seq_2, n))
    printf("test_2 is OK\n");
  else
    printf("test_2 is not OK\n");
}
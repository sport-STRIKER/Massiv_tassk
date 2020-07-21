#include "T2.h"
// Есть 2 массива, сравни их и копируй все нечетные числа из второго массива в первый

void copy_mass(int seq_1[], int seq_2[], int n);

void test(int seq_ref_1[], int seq_ref_2[], int n);


int main()
{
  const int n = 3;

  int seq_ref_1[n] = {1, 3, 0};
  
  int seq_ref_2[n] = {3, 0, 0};

  
  test(seq_ref_1, seq_ref_2, n);

  
  output(seq_ref_1, n, "seq_ref_1 ");
  output(seq_ref_2, n, "seq_ref_2 ");

  return 0;
}


void copy_mass(int seq_1[], int seq_2[], int n)
{
  int i = 0;
  
  for (int j = 0; j < n; j++)
  {
    if (seq_2[j] % 2 != 0)
    {  
        seq_1[i] = seq_2[j];
          
        i++;
    }
  }
}


void test(int seq_ref_1[], int seq_ref_2[], int n)
{
  int seq_answ_1[n] = {};

  int seq_answ_2[n] = {};

  int seq_1[n] = {1, 2, 3};

  int seq_2[n] = {2, 3, 4};

  
  copy_mass(seq_answ_1, seq_1, n);

  if (check_equal_massiv(seq_answ_1, seq_ref_1, n) == 1)
    printf("test_1 is OK\n");
  else
    printf("test_1 is not OK\n");

  
  copy_mass(seq_answ_2, seq_2, n);

  if (check_equal_massiv(seq_answ_2, seq_ref_2, n) == 1)
    printf("test_2 is OK\n");
  else
    printf("test_2 is not OK\n");

  
  output(seq_answ_1, n, "seq_answ_1");
  output(seq_answ_2, n, "seq_answ_2");
}
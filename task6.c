#include "T2.h"

int summ_masiv(int seq_1[], int seq_2[], int n);

void test();

int main()
{
  test();  

  return 0;
}


int summ_masiv(int seq_1[], int seq_2[], int n)
{
  int summ = summ_elem_mas(seq_1, n) + summ_elem_mas(seq_2, n);

  return summ;
}


void test()
{
  const int n = 3;

  int seq_1[n] = {};
  int seq_2[n] = {};

  massiv_init(seq_1, n, 2, 2);
  massiv_init(seq_2, n, 1, 2);

  int summ = summ_elem_mas(seq_1, n) + summ_elem_mas(seq_2, n);

  if (summ == summ_masiv(seq_1, seq_2, n))
    printf("test is OK\n");
  else
    printf("test is not OK\n");
}
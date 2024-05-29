/*calculate income tax paid by the employee to government as per the slab mentioned
income slab         Tax
25,000 - 50,000     5%
50,000 -1,00,000    20%
above 1,00,000      30%
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
  float income, tax = 0;
  printf("Enter the income of the employee = ");
  scanf("%f", &income);
  // if (income < 25000)
  // {
  //   tax = 0;
  // }
  if (income >= 25000 && income <= 50000)
  {
    tax = tax + 0.05 * (income - 25000);
  }
  if (income >= 50000 && income <= 100000)
  {
    tax = tax + 0.20 * (income - 50000);
  }
  if (income >= 100000)
  {
    tax = tax + 0.30 * (income - 100000);
  }
  printf("The amount of tax to be paid by the employee is %0.2f", tax);
  return 0;
}
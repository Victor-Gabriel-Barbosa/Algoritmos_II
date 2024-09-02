// Unit test for the selected code

#include <stdio.h>
#include <assert.h>

// Function to be tested
int main(void) {
  int dias = 0, dias_aux = 0, meses = 0, anos = 0;
  printf("Digite a idade da pessoa em dias: ");
  scanf("%d", &dias);  
  dias_aux = dias;
  dias = 0;
  while (dias_aux > 0) {
    if (dias_aux >= 360) {
      dias_aux = dias_aux - 360;
      anos++;
    }
      else if (dias_aux >= 30) {
        dias_aux = dias_aux - 30;
        meses++;
      }
        else if (dias < 30) {
          dias_aux--;
          dias++;
        }
  }
  printf( "A idade da pessoa é %d anos, %d meses e %d dias", anos, meses, dias);
  return 0;
}

// Unit test code
void test_calculate_age_for_leap_year_born() {
  int dias = 366; // Leap year has 366 days
  int dias_aux = dias;
  int meses = 0, anos = 0;

  while (dias_aux > 0) {
    if (dias_aux >= 360) {
      dias_aux = dias_aux - 360;
      anos++;
    }
      else if (dias_aux >= 30) {
        dias_aux = dias_aux - 30;
        meses++;
      }
        else if (dias < 30) {
          dias_aux--;
        }
  }

  assert(anos == 1);
  assert(meses == 0);
  assert(dias == 0);
}

int main() {
  test_calculate_age_for_leap_year_born();
  printf("All tests passed!\n");
  return 0;
}
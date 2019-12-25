#include <ostream>
#include<stdio.h>
#include <iostream>

class ReverseLong {
  public:

    ReverseLong(long value) {
      long num = value;
      bool leading = true;
      this->value = 0;
      this->leading_zeros = 0;

      while (num != 0) {
        int digit = num % 10;
        num = num / 10;

        if (leading && digit == 0) {
          this->leading_zeros += 1;
        } else {
          this->value = this->value * 10 + digit;
          leading = false;
        }
      }
    };

    friend std::ostream & operator<<(std::ostream& out, ReverseLong const & r);

  private:
    long value;
    int leading_zeros;

};

std::ostream & operator<<(std::ostream& out, ReverseLong const & r) {

  for (int i =0; i < r.leading_zeros; i++) {
    out << 0;
  }

  out << r.value;

  return out;
};

int main () {
    int num;
    printf("Enter a number:");
    scanf("%d",num);
  ReverseLong f = ReverseLong(num); // also works with numbers like "0"!

  std::cout << f << std::endl; // prints 0052
};

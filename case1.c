#include <stdio.h>
int main(int argc, char const *argv[])
{
      float huashi, sheshi;
      float lower, upper, step;
      lower = 0;
      upper = 300;
      step = 20;
      huashi = sheshi = 0;
      while (huashi <= upper)
      {
            sheshi = (5/9)*(huashi-32);
            printf("%3.0f\t%6.1f\n", huashi, sheshi);
            huashi += step;
      }
      return 0;
}

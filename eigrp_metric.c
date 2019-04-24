#include <stdio.h>
int metric(double x, double y)
{
  double z;
  z = 10000000000 / x + y / 10;
  z *= 256;
  return z;
}
int main(void)
{
  double k1 = 0, k3 = 0;
  double met;
  printf("最小帯域を入力(bgs)\n");
  scanf("%lf", &k1);
  printf("合計遅延\n");
  scanf("%lf", &k3);
  met = metric(k1, k3);
  printf("メトリック値は%.0lf", met);
  return 0;
}
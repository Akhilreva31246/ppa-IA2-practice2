#include <stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base :");
  scanf("%f",base);
  printf("Enter the height:");
  scanf("%f",height);
  }
void find_area(float base,float height,float*area)
{
  *area=0.5*base*height;
}
void output(float bas,float height, float area)
{
  printf("Area of triangle is %f",area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}
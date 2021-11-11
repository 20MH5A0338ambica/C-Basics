#include<stdio.h>
void main()
{ 
  int side, area, perimeter;
  printf("enter side length");
  scanf("%d", &side);
  area = side*side;
  perimeter = 4*side;
  printf("area of the square is %d\n", area);
  printf("perimeter of the square is %d ",perimeter);
}

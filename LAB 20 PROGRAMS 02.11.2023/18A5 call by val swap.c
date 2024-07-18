//Swap two numbers using call by value and call by reference
//call by value
#include <stdio.h>
void swap(int, int);
int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d %d",&x,&y);
   printf("Before Swapping x y = %d %d\n", x, y);
   swap(x, y); 
   printf("After Swapping x y = %d %d\n", x, y);
}
void swap(int a, int b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}

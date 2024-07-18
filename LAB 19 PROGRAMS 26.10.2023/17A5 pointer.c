//Store n elements in an array and print the elements using pointer
#include<stdio.h>
void main (){
	int n,i;
	printf("Enter number of elements = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
      {
	  printf("Enter element into a[%d]: ",i);
	  scanf("%d",a);
	  }
   printf("The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf("Element [%d] : %d \n",i,*(a));
	  }
}

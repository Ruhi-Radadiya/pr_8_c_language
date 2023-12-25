//Q.1 Write a Program to find the length of a string using a Pointer.
//For example,
//Input:
//Enter any string: hello world
//
//Output:
//The length of a string is: 11
#include<stdio.h>
int cube(int *p){

   p=&cube;
   return *p;
}
void main()
{
	int n;
	int a[n][n];
	printf("enter the array size:");
	scanf("%d",&n);

	int i,j;
	int cube=0;
	int *p;

	printf("enter the array element:\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		cube=a[i][j]*a[i][j]*a[i][j];
		p=&cube;
		printf("cube of all elements:%d\n\n",*p);
	}
}
}
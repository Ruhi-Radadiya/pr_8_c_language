//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//27    8
//125 64
#include<stdio.h>
void  main()
{	
    char str[100];
	int i,c=0;
	
	printf("Enter any string: ");
    gets(str);
    
    char *p;
    p=&str;
   
   for(i=0;str[i]!='\0';i++){
        c++;
        p++;
    }
    printf("The length of the string is: %d", c);
}
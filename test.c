//Program for Matrix Addition, Multiplication and Transpose
#include <stdio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3];
  int i,j,k,choice ;
  up :printf("cleared");

  printf("\n\t--------------M  E  N  U---------------");
  printf("\n\t 1 ------ Matrix Addtion");
  printf("\n\t 2 ------ Matrix Multiplication");
  printf("\n\t 3 ------ Matrix Transpose");
  printf("\n\t 4 ------ exit");
  printf("\n\t----------------------------------------");
  printf("\n\t Enter your choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      printf("\n enter 9 elements of first matrix \n");
      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  scanf("%d",&a[i][j]);

      printf("\n enter 9 elements of second matrix \n");
      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  scanf("%d",&b[i][j]);

      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  c[i][j] = a[i][j] + b[i][j];
      printf("\n\t First  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",a[i][j]);
	}
	printf("\n");
      }
      printf("\n\t Second  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",b[i][j]);
	}
	printf("\n");
      }
      printf("\n\t Third  Resultant  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",c[i][j]);
	}
	printf("\n");
      }
     break;
/////////////////////////////////////////////
    case 2:
      printf("\n enter 9 elements of first matrix \n");
      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  scanf("%d",&a[i][j]);

      printf("\n enter 9 elements of second matrix \n");
      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  scanf("%d",&b[i][j]);
///////multiplication
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  c[i][j] = 0;
	  for(k=0; k<3; k++)
	  {
	    c[i][j] = c[i][j] + a[i][k] * b[k][j];
	  }
	}
      }
      printf("\n\t First  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",a[i][j]);
	}
	printf("\n");
      }
      printf("\n\t Second  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",b[i][j]);
	}
	printf("\n");
      }
      printf("\n\t Third  Resultant  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",c[i][j]);
	}
	printf("\n");1
      }
    break;
    case 3:
      printf("\n enter 9 elements of first matrix \n");
      for(i=0; i<3; i++)
	for(j=0; j<3; j++)
	  scanf("%d",&a[i][j]);
      printf("\n\t The  Original  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",a[i][j]);
	}
	printf("\n");
      }

      printf("\n\t The  Transpose  of  Matrix  Is \n");
      for(i=0; i<3; i++)
      {
	for(j=0; j<3; j++)
	{
	  printf("%3d",a[j][i]);
	}
	printf("\n");
      }
    break;
    case 4:
      printf("\n You  are  now  exiting  from  program ....");
      goto call;
    default:
      printf("\n Invalid Choice entered ????");

  }			//end of switch statement
 goto up;
 call:printf("end");
}
			//end of main function
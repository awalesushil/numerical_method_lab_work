#include<stdio.h>
#include<math.h>
int main()
{
  float mat[4][4],temp,temp1,x,y,z;
  int i,n=3,j;
     
    
    mat[0][0]=2;
    mat[0][1]=-1;
    mat[0][2]=3;
    mat[0][3]=9;
    mat[1][0]=1;
    mat[1][1]=1;
    mat[1][2]=1;
    mat[1][3]=6;
    mat[2][0]=1;
    mat[2][1]=-1;
    mat[2][2]=1;
    mat[2][3]=2;


  printf("\n Your Matrix \n\n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n+1;j++)
   {
    printf(" %g ",mat[i][j]);
   }
   printf("\n\n");
  }

  temp=mat[1][0]/mat[0][0];
  temp1=mat[2][0]/mat[0][0];
  for(i=0,j=0;j<n+1;j++)
  {
   mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
   mat[i+2][j]=mat[i+2][j]-(mat[i][j]*temp1);
  }

  temp=mat[2][1]/mat[1][1];
  for(i=1,j=0;j<n+1;j++)
  {
   mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
  }


  for(i=0;i<n;i++)
  {
   for(j=0;j<n+1;j++)
   {
    printf(" %.3f ",mat[i][j]);
   }
   printf("\n\n");
  }

  z = mat[2][3]/mat[2][2];
  y = (mat[1][3] - mat[1][2]*z)/mat[1][1];
  x = (mat[0][3] - mat[0][2]*z - mat[0][1]*y)/mat[0][0];
  printf("\n\nx = %.3f",x);
  printf("\n\ny = %.3f",y);
  printf("\n\nz = %.3f",z);
  return 0;
}


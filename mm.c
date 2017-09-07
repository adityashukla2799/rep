#include<stdio.h>
#include<conio.h>
int main()
{
int a[40][40],b[40][40],c[40][40],m,n,o,p,i,j,k;
printf("Enter the row and column size of matrix 1 : ");
scanf("%d",&m);
scanf("%d",&n);
printf("Enter the row and column size of matrix 2 : ");
scanf("%d",&o);
scanf("%d",&p);
if(n==o){
printf("Enter the matrix 1 : ");
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the matrix 2 : ");
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=a[i][k]*b[k][j];
}
}
}
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<p;j++)
{
printf("%d\t",c[i][j]);
}
}
}
else{printf("The matrices cannot be multiplied. ");}
getch();
}




#include <stdio.h>
#include<conio.h>
void main()
{
  int num,n,i;
  int count=0;
  scanf("%d\n",&num);
  n=num;
  while(n!=0)
  {
     count++; 
     n=n/10;
  }
  printf("%d",count);
  getch();
  
}

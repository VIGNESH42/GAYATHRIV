 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("3 num");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b||a>c)
 	{
 	printf("a is greater"); 
 	}
 	else if(b>a||b>c)
 	{
 	printf("b is greater");
 	}
 	else
  {
  printf("c is greater");
  }
  return 0;
 	getch();
 }

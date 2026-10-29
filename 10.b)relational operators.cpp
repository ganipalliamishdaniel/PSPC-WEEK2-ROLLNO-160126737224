#include<stdio.h>
int main()
{
	int a,b,res1,res2,res3,res4,res5,res6;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	res1=a>b;
	res2=a<b;
	res3=a==b;
	res4=a>=b;
	res5=a<=b;
	res6=a!=b;
	printf("RESULT 1:%d\n",res1);
	printf("RESULT 2:%d\n",res2);
	printf("RESULT 3:%d\n",res3);
	printf("RESULT 4:%d\n",res4);
	printf("RESULT 5:%d\n",res5);
	printf("RESULT 6:%d\n",res6);
	
	//output of relational operators is boolean 1 is true , 0 is false.
}

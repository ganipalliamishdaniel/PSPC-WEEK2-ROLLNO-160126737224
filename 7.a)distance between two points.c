#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,distance;
	printf("enter points x1 and x2:");
	scanf("%f %f",&x1,&x2);
	printf("enter points y1 and y2:");
	scanf("%f %f",&y1,&y2);
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("the distance between two points is:%f",distance);
	
}

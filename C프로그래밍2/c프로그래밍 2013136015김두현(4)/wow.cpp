#include <stdio.h>
#include <math.h>
#define pi 3.141592
typedef struct
	{
		double x;
		double y;
	}
 point;
typedef struct
	{
		double lenth;
		double radian;
	}
result;
result funt (point p1, point p2);
int main(void)
{	
	point p1={};
	point p2={};
	double a,b;
	printf("첫 번째 점의 좌표를 입력하세요\n");
	scanf("%lf %lf",&a,&b);
	p1.x=a;
	p1.y=b;
	printf("두 번째 점의 좌표를 입력하세요\n");
	scanf("%lf %lf",&a,&b);
	p2.x=a;
	p2.y=b;
	printf("p1 = (%f, %f) \np2 = (%f, %f)\n",p1,p2);
	funt(p1,p2);
	fflush(stdin);getchar();

}
result funt (point p1, point p2)
{
	result wow={};
	wow.lenth=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	wow.radian=acos((p2.x-p1.x)/wow.lenth);
	printf("길이=%f 각도=%f",wow.lenth,wow.radian*(180/pi));
	return wow;	
}

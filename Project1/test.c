#include<stdio.h>
double max(double x, double y)
{
	double m;
	if (x < y)
		m = y;
	else
		m = x;
	return m;
}
int main()
{
	double a, b, c, middle, maxdata;
	printf("please input a  b  c:\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	middle = max(a, b);
	maxdata = max(middle, c);
	printf("a,b,c中最大值为：%lf", maxdata);
	return 0;
}
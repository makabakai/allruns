/*#include<stdio.h>
int sumf(int a, int b);
int main()
{
	printf("****************************************************************\n\n\t请按顺序输入求和的首项和末项，中间以逗号隔开\n\n****************************************************************\n");
	int a,b,sum;
	scanf_s("%d,%d",&a,&b);
	sum=sumf(a,b);
	printf("sum is %d", sum);
	return 0;
}  
int sumf(int a, int b)
{
	int i, sum = 0;
	for (i = a; i <= b; ++i)
		sum = sum + i;
	return sum;
}*/




//烧饼有两面，要做好一个兰州烧饼，要两面都弄热。当然，一次只能弄一个的话，效率就太低了。
//有这么一个大平底锅，一次可以同时放入k个兰州烧饼，一分钟能做好一面。
//而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
/*#include <stdio.h>

int main() {
	int n;
	int k;
	int total;
	int result;

	while (scanf_s("%d%d", &n, &k) != EOF) {
		total = n * 2;

		if (total <= k) {
			printf("2\n");
			continue;
		}

		result = total / k;

		if (total%k != 0)
			result++;

		printf("%d\n", result);
	}

	return 0;
}*/









//九九乘法表
/*#include<stdio.h>
#include <math.h>

int main() {
	int T;//列宽
	int n;
	int i;
	int j;

	scanf_s("%d", &T);

	while (T--) {
		scanf_s("%d", &n);//行数

		for (i = 1; i <= n; i++) {
			for (j = i; j <= 9; j++) {
				if (j != i)
					printf(" ");

				printf("%d*%d=%d", i, j, i*j);
			}
			printf("\n");
		}

		if (T != 0)
			printf("\n");
	}
	return 0;
}
*/




/*
//输入一串数字，求其中奇数的立方和和偶数的平方和
#include<stdio.h>
int main()
{

	char a = 0;
	int sum1 = 0, sum2 = 0;
	printf("输入一串数字以#结束\n:");
	a = getchar();
	while (a != '#')
	{
		a = a - 48;
		(int)(a = a);
		if (a % 2 == 0)
		{
			sum1 = sum1 + a * a;
		}
		else
		{
			sum2 = sum2 + a * a*a;
		}
		a = getchar();
	}
	printf("偶数的平方和是%d,奇数是%d", sum1, sum2);
	return 0;
}
*/





/*

//提成问题
#include<stdio.h>
int main()
{
	double award, I;
	printf("请输入当月利润（单位：元）\n");
	scanf_s("%lf", &I);
	if (I <= 100000)
		award = 0.1*I;
	else if (I <= 200000)
		award = 10000 + (I - 100000)*0.75;
	else if (I <= 400000)
		award = 10000 + 7500 + (I - 200000)*0.05;
	else if (I <= 600000)
		award = 10000 + 7500 + 10000 + (I - 400000)*0.03;
	else if (I <= 1000000)
		award = 10000 + 7500 + 10000 + 6000 + (I - 600000)*0.015;
	else
		award = 10000 + 7500 + 10000 + 6000 + 6000 + (I - 1000000)*0.01;
	printf("你就拿到了区区%.2f块钱奖金，瞧把你得瑟的", award);
	return 0;
}


*/





/*
//鸡兔同笼问题
#include<stdio.h>
#include<math.h>
int main()
{
	int chicken, rabbit, feet, head;
	printf("这是一个鸡兔同笼解题程序\n请依次输入头的总数和腿的总数（以空格隔开）\n");
	while (scanf_s("%d %d", &head, &feet) != EOF)
	{
		if ((feet >= 0) && (head >= 0) && (feet % 2 == 0))
		{
			if (feet > (head * 4))
			{
				printf("啥玩意这么多腿，再给你一次机会（腿的数量过多，请重新输入一组数据）\n\n");
			}
			else if (feet < head * 2)
				printf("这是小鸡儿崴了脚，还是兔子断了腿？（腿的数量过少，请重新输入一组数据）\n\n");
			else
			{
				rabbit = (feet - head * 2) / 2;
				chicken = head - rabbit;
				printf("有%d只鸡，%d只兔\n你可以继续输入\n\n", chicken, rabbit);
			}
		}
		else
			printf("宁能不能整点儿阳间的活儿？（腿应当为偶数且头和腿的数量应为自然数,请输入符合常识的数据）\n\n");
	}
	return 0;
}


*/


//S=a+aa+aaa+aaaa+...+aaaaa(n个a)
/*
#include<stdio.h>
int main()
{
	int a,n,k=0,S=0;
	printf("计算S=a+aa+aaa+aaaa+...+aaaaa(n个a)\n");
	printf("输入a和n，以空格隔开\n");
	while(scanf("%d,%d",&a,&n)!=EOF)
	{
	k=a;
	while(n!=0)
	{
		S=S+k;
		a=a*10;
		k=k+a;
		n--;
	}
	printf("%d\n可以继续输入\n",S);
	}
	return 0;
}
*/



/*
//水仙花数
#include<stdio.h>
int main()
{
	int a,b,c,n=100;
	printf("以下是所有的水仙花数\n");
	while(n!=1000)
	{
	a=n/100;
	b=n/10%10;
	c=n%10;
	if(n==a*a*a+b*b*b+c*c*c)
	{
		printf("%5d",n);
	}
	n++;
	}
	printf("\n");
	return 0;

}
*/



/*
#include<stdio.h>
int main()
{
	printf("\t   *\n\t  ***\n\t *****\n\t*******\n\t *****\n\t  ***\n\t   *\n");
	return 0;
}
*/


//菱形块
/*
#include<stdio.h>
int main()
{
	int i,j,k,n,a;
	printf("输入一个奇数作为菱形块的层数\n");
	while (scanf_s("%d", &n) != EOF)
	{
		a = (n + 1) / 2;
		//前a层图案循环
		for (i = 1; i <= a; i++)
		{
			for (j = a - i; j >= 1; j--)
			{
				printf(" ");
			}
			for (k = 2 * i - 1; k >= 1; k--)
			{
				printf("*");
			}
			printf("\n");
		}
		//后a-1层图案循环
		for (i = a - 1; i >= 1; i--)
		{
			for (j = a - i; j >= 1; j--)
			{
				printf(" ");
			}
			for (k = 2 * i - 1; k >= 1; k--)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n可以继续输入\n");
	}
	return 0;
}
*/



//1~1000完数
/*
#include<stdio.h>
int main()
{
	int a, b=0, i, j;
	for (i = 2; i <= 1000; i++)
	{
		b = 0;
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				b += j;
			}
		}
		if (b == i)
		{
			printf("%d\t", i);
		}
		
	}
	return 0;
}
*/


//sinx泰勒展开
/*
#include<stdio.h>
#include<math.h>
int main()
{
	double x,sum=0,i;
	int j=2;
	scanf_s("%lf", &x);
	i = x;
	while (fabs(i) > 1e-8)
	{
		sum += i;
		i = -(i*x*x / (j*(j + 1)));
		j+=2;
	}
	printf("%f", sum);
	return 0;
}
*/



//斐波那契数列分数求和
/*
#include<stdio.h>
int f(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return f(n - 1) + f(n - 2);
}
int main()
{
	int i = 1;
	double sum = 0;
	for (i = 1; i <= 20; i++)
	{
		sum += f(i + 1)* 1.0/ f(i);
	}
	printf("%f\n", sum);
	return 0;
}
*/


//输出 字母 数字 空格 其它字符 的个数
/*
#include<stdio.h>
int main()
{
    int y=0,s=0,k=0,q=0;
    char i;
    while((i = getchar() )!='\n')
    {
        if(i<='z'&&i>='a'||i<='Z'&&i>='A')
        	    y++;
        else if(i<='9'&&i>='0')
            s++;
        else if(i==' ')
            k++;
        else
			q++;
  
    }
    printf("字母:%d,数字:%d,空格:%d,其他:%d",y,s,k,q);
    return 0;
}
*/


/*
//汉诺塔问题
#include<stdio.h>

void move(char a, char b)
{
	static int i = 0;
	i++;
	printf("第%d步：%c-->%c\n",i, a, b);
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}
int main()
{
	int n;
	printf("输入汉诺塔的层数\n");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

*/

/*
#include<stdio.h>
#include<math.h>
//cosx泰勒展开
double COS(double x)
{
	double sum = 0, i = 1.0;
	int j = 1;
	scanf("%lf", &x);
	while (fabs(i) > 1e-8)
	{
		sum += i;
		i = -(i*x*x / (j*(j + 1)));
		j += 2;
	}
	return sum;
}
//杨辉三角1
int yh(int i, int j)
{
	if (j == 1 || i == j)
		return 1;
	else
		return yh(i - 1, j - 1) + yh(i - 1, j);
}


void YH(int n)
{
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (k = n - i; k >= 1; k--)
			printf("   ");
		for (j = 1; j <= i; j++)
			printf("%6d", yh(i, j));
		printf("\n");
	}
}

int main()
{
	int year, month, day, sum;
	printf("输入年、月、日(年份范围为2001~2099，输入样例:2012.3.1)\n");
	while (scanf("%d.%d.%d", &year, &month, &day) != EOF)
	{
		if (year < 2001 || year>2099 || month < 1 || month>12 || day < 1 || (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) == 0 && day > 28) || (month == 2 && (year % 4 == 0 && year % 100 == 0 || year % 400 == 0) == 0 && day > 29) || (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day>31 || (month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			printf("爬\n");
		else
		{
			switch (month)
			{
			case 1:sum = day; break;
			case 2:sum = 31 + day; break;
			case 3:sum = 59 + day; break;
			case 4:sum = 90 + day; break;
			case 5:sum = 120 + day; break;
			case 6:sum = 151 + day; break;
			case 7:sum = 181 + day; break;
			case 8:sum = 212 + day; break;
			case 9:sum = 243 + day; break;
			case 10:sum = 273 + day; break;
			case 11:sum = 304 + day; break;
			case 12:sum = 334 + day; break;
			}
			if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month > 2)
				sum += 1;
			printf("您输入的日期是这一年的第%d天\n", sum);
		}
		printf("您可以继续输入以判断\n");
	}
	return 0;
}
*/
/*
//杨辉三角2
#define N 10
#include<stdio.h>
int main()
{
	int i,j,yh[N];
	printf("%4d\n",yh[0]=1);
	for(i=1;i<N;i++)
	{
		printf("%4d",yh[i]=1);
		for(j=i-1;j>0;j--)
			printf("%4d",yh[j]=yh[j]+yh[j-1]);
		printf("%4d\n",yh[i]);
	
	}
	
	return 0;
}*/

/*
//最大公因数和最小公倍数
#include<stdio.h>
int main()
{
	int a, b, c, d, e, t;
	printf("输入两个正整数,逗号隔开\n");
	scanf_s("%d,%d", &a, &b);
	d = a; e = b;
	while(b!=0)
	{
		t = a;
		a = b;
		b = t % b;
		
	}
	c = e * d / a;
	printf("最大公因数是:%d\n最小公倍数是:%d\n", a, c);
}
*/

/*
//1!+2!+...+20!
#include<stdio.h>
int JC(int a)
{
	if (a == 1)
		return 1;
	else
		return a * JC(a - 1);
}
int main()
{
	int i, sum=0;
	for (i = 1; i <= 20; i++)
		sum += JC(i);
	printf("%d", sum);
	return 0;
}
*/

/*
//100个k + 50个k^2 + 10个1/k
#include<stdio.h>
int main()
{
	int i;
	double k, sum = 0;
	printf("输入一个非零数\n");
	scanf_s("%lf", &k);
	for (i = 1; i <= 100; i++)
		sum += k;
	for (i = 1; i <= 50; i++)
		sum += k * k;
	for (i = 1; i <= 10; i++)
		sum += 1 / k;
	printf("%f", sum);
	return 0;

}
*/

/*
//数列求和 
#include<stdio.h>
int fib(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int i;
	double sum=0;
	for (i = 1; i <= 20; i++)
		sum += (double)fib(i + 1) / fib(i);
	printf("%f", sum);
	return 0;
}
*/

/*
//自由落体弹起原高度一半
#include<stdio.h>
int main()
{
	int i;
	double s = 0, h = 100;
	for (i = 1; i <= 10; i++)
	{
		s += h+h/2.0;
		h /= 2.0;
	}
	printf("共经过%f米\n第10次反弹%f米", s, h);
	return 0;
}
*/

/*
//猴子吃桃
#include<stdio.h>
int main()
{
	int i, peach = 1;
	for (i = 10; i >= 1; i--)
		peach = (peach + 1) * 2;
	printf("%d", peach);
	return 0;
}
*/

/*
//开平方
#include<stdio.h>
#include<math.h>
int main()
{
	double q=1, u, t=0;
	printf("输入一个数\n");
	scanf_s("%lf", &u);
	while (fabs(q - t) >= 10e-5)
	{
		t = q;
		q = (q + u / q)/2.0;
	}
	printf("%f", q);
}
*/

/*
//爬
#include<stdio.h>
#include<math.h>
int main()
{
	double q = 2.0;
	while (fabs(q - 1.5) >= 1)
	{
		q = q-(2*q*q*q-4*q*q+3*q-6)/(6*q*q-8*q+3);
	}
	printf("%f", q);
}
*/

/*
#include<stdio.h>
#include<math.h>
double fun(double a)
{
	return 2 * a*a*a - 4 * a*a + 3 * a - 6;
}
int main()
{
	double a = -10, b = 10, m=0;
	while (fabs(a-b)>1e-5)
	{
		if (fun(a)*fun(b) < 0)
		{
			m = (a + b) / 2;
			((fun(a)*fun(m)) < 0) ? (b = m) : (a = m);
		}
	}
	printf("%f", (a+b)/2);
}
*/

/*
//两个乒乓球队，甲队A、B、C，乙队X、Y、Z，A不和X比，C不和X、Z比
//找出三对赛手的名单
#include<stdio.h>
void main() 
{
	char A;
	char B;
	char C;
	char nb;
	for (nb = 'X'; nb <= 'Z'; nb++) 
	{
		if (nb != 'X' && nb != 'Z')
		{
			C = nb;
		}
	}
	for (nb = 'X'; nb <= 'Z'; nb++) 
	{
		if (nb != 'X' && nb != C)
		{
			A = nb;
		}
	}
	for (nb = 'X'; nb<= 'Z'; nb++) 
	{
		if (nb != A && nb != C) 
		{
			B = nb;
		}
	}
	printf("A的对手是%c\n", A);
	printf("B的对手是%c\n", B);
	printf("C的对手是%c\n", C);
}

*/

/*
//不多于5位正整数，求是几位数，分别输出每一位，逆序输出该数字
#include<stdio.h>
int main()
{
	int a,b, i=0,k=0,j[5];
	printf("输入一个不多于5位的正整数\n");
	scanf_s("%d", &a);
	b = a;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	printf("它是%d位数\n", i);
	while (b!=0)
	{
		j[k] = b % 10;
		b /= 10;
		k++;
	}
	for (k = i - 1; k >= 0; k--)
		printf("左数第%d位是：%d\n", i-k, j[k]);
	printf("逆序为：");
	for (k = 0; k <= i - 1; k++)
		printf("%d", j[k]);
}
*/

/*
//4位数排序
#include<stdio.h>
int main()
{
	int i, j, a[4];
	int t;
	for (i = 0; i < 4; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("排序后的数为：");
	for (i = 0; i < 4; i++)
		printf("%3d", a[i]);
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	printf("输入一个小于1000的正数\n");
	while (scanf_s("%lf", &a) != EOF)
	{
		if (a > 0 && a < 1000)
		{
			printf("%f", sqrt(a));
			break;
		}
		else
		{
			printf("重新输入\n");
			continue;
		}
	}
}
*/
/*
#include<stdio.h>
int main()
{
	extern void enter_string(char str[]);
	extern void delete_string(char str[], char ch);
	extern void print_string(char str[]);
	char c=0, str[80];
	enter_string(str);
	scanf_s("%c", c);
	delete_string(str, c);
	print_string(str);
	return 0;
}
*/

/*
#include<stdio.h>
bool ss(int i)
{
	int j;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;



}
int main()
{
	int i, n, k, p = 1, sum = 0;
	printf("请输入一个10~10000的n与1~10的k:");
	scanf_s("%d %d", &n, &k);
	for (i = n; i >= 2; i--)
	{

		if (ss(i) && (p <= k))
		{
			sum += i;
			printf("%d+", i);
			p++;
		}

	}
	printf("\b=%d", sum);



	return 0;
}
*/

/*
//十进制转二进制统计1的个数
#include<stdio.h>
int main()
{
	int a,i,s=0;
	scanf_s("%d", &a);
	while (a != 0)
	{
		i = a % 2;
		a /= 2;
		if (i == 1)
			s++;
	}
	printf("%d", s);
	

return 0;
}
*/

/*
//输入一天中的第t秒钟，输出十二小时制的时间
#include<stdio.h>
int main()
{
	int t, h, m, s;
	scanf_s("%d", &t);
	h = t / 3600;
	m = t / 60 % 60;
	s = t % 60;
	if (h >= 13)
		h -= 12;
	printf("%d:%d:%d", h, m, s);
}
*/

/*
#include<stdio.h>
int main()
{
	int m, n, i = 1, j = 1, s=0;
	scanf_s("%d%d", &m, &n);
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			s += i + j;
	}
	printf("%d %d %d", s, m, n);
	return 0;
}
*/

//输入三人成绩输出名次
/*
#include<stdio.h>
int main()
{
	float a[3];
	int i;
	for(i=0;i<3;i++)
	scanf_s("%f", &a[i]);
	if (a[0] > a[1] && a[0] > a[2])
	{
		a[0] = 1;
		if (a[1] > a[2])
		{
			a[1] = 2;
			a[2] = 3;
		}
		else
		{
			a[1] = 3;
			a[2] = 2;
		}
		
	}
	else if (a[1] > a[0] && a[1] > a[2])
	{
		a[1] = 1;
		if (a[0] > a[2])
		{
			a[0] = 2;
			a[2] = 3;
		}
		else
		{
			a[0] = 3;
			a[2] = 2;
		}

	}
	else 
	{
		a[2] = 1;
		if (a[1] > a[0])
		{
			a[1] = 2;
			a[0] = 3;
		}
		else
		{
			a[1] = 3;
			a[0] = 2;
		}

	}
	printf("%.0f %.0f %.0f", a[0], a[1], a[2]);


	return 0;
}
*/

/*
#include<stdio.h>
int big(float a,float b,float c)
{
	if (a > b&&a > c)
		a = 1;
	else if (a > b || a > c)
		a = 2;
	else
		a = 3;
	return a;
}
int main()
{
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	printf("%d %d %d", big(a, b, c), big(b, a, c), big(c, b, a));
	return 0;
}
*/


/*
//幸运qq号
#include<stdio.h>
int main()
{
	int n, qq, sum = 0, i=0,t;
	scanf_s("%d%d", &n, &qq);
	t = qq % 10;
	while (qq!=0)
	{
		sum += qq % 10;
		qq /= 10;
		i++;
	}
	if (sum%n == 0 && t == n)
		printf("%d", i);
	else
		printf("%d %d", sum, t);
	return 0;
}
*/


/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340
int main()
{
	system("mode con cols=80 lines=60 ");
	system("title 傻逼玩意看这个帅不帅");
	char data[200][60] = { {"哈哈哈哈哈哈哈哈哈哈哈哈哈"} };
	int sign = 0;

	int i, j, e;
	int a;
	long time;
	for (i = 1, a = I; i < I / 2; i++, a--)
	{
		for (j = (int)(I - sqrt(I*I - (a - i)*(a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		for (j = (int)
			(2 * (I - sqrt(I*I - (a - i)*(a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I*I - (a - i)*(a - i)); e++)
			printf("\3");
		printf("\n");
	}
	for (i = 1; i < 80; i++)
	{
		if (i == 25)
		{
			printf("======傻逼你会编这个吗？======");
			i += 30;
		}
		printf("\3");
	}
	printf("\n");
	for (i = 1; i <= R / 2; i++)
	{
		if (i % 2 || i % 3)
			continue;
		for (j = (int)(R - sqrt(R*R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R*R - i * i) - (R - 2 * I)); e++)
			printf("\3");
		printf("\n");
	}

	for (; ; )
	{
		system("color a");
		for (time = 0; time < 99999999; time++); system("color b");
		for (time = 0; time < 99999999; time++); system("color c");
		for (time = 0; time < 99999999; time++); system("color d");
		for (time = 0; time < 99999999; time++); system("color e");
		for (time = 0; time < 99999999; time++); system("color f");
		for (time = 0; time < 99999999; time++);
		system("color 0"); for (time = 0; time < 99999999; time++);
		system("color 1"); for (time = 0; time < 99999999; time++);
		system("color 2"); for (time = 0; time < 99999999; time++);
		system("color 3"); for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++); system("color 5");
		for (time = 0; time < 99999999; time++); system("color 6");
		for (time = 0; time < 99999999; time++); system("color 7");
		for (time = 0; time < 99999999; time++); system("color 8");
		for (time = 0; time < 99999999; time++); system("color 9");
		for (time = 0; time < 99999999; time++); system("color ab");
		for (time = 0; time < 99999999; time++); system("color ac");
		for (time = 0; time < 99999999; time++); system("color ad");
		for (time = 0; time < 99999999; time++); system("color ae");
		for (time = 0; time < 99999999; time++); system("color af");
		for (time = 0; time < 99999999; time++);

		printf("%s", data[sign]);
		sign++;

	}

	return 0;

}
*/


/*
#include<stdio.h>
int main()
{
	char letter, y = 'y';
	while ((letter = getchar()) != y)
	{
		if (letter == 'm')
		{
			printf("今天是礼拜一\n");
			break;
		}
		else if (letter == 't')
		{
			if ((letter = getchar()) == 'u')
			{
				printf("今天是礼拜二\n");
				break;
			}
			else if (letter  == 'h')
			{
				printf("今天是礼拜四\n");
				break;
			}

		}
		else if (letter == 'w')
		{
			printf("今天礼拜三\n");
			break;
		}
		else if (letter == 'f')
		{
			printf("今天礼拜五\n");
			break;
		}
		else if (letter == 's')
		{
			if ((letter = getchar()) == 'a')
			{
				printf("今天是礼拜六\n");
				break;
			}
			else if (letter  == 'u')
			{
				printf("今天是礼拜天\n");
				break;
			}

		}
	}
}
*/

/*
//编程序找出一个5 × 4 矩阵的鞍点。鞍点即矩阵中的某个元素符合如下条件：
//在其所在行最大，同时在其所在列是最小，当然一个矩阵可能也没有鞍点
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int a[5][4],i,j,k=0,t,m=0,n=0,min,max;
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
			if(a[0][0]==a[i][j])
				t=0;
			else
			{
				t=1;
				break;
			}
	if(t==1)
	{
	for(i=0;i<5;i++)
	{
		max=a[i][0];
		for(j=0;j<4;j++)
		{
			if(max<a[i][j])
			{
				n=j;
				max=a[i][j];
			}
		}
		min=max;
		for(j=0;j<5;j++)
		{
			if(min>a[j][n])
			{
				m=j;
				min=a[j][n];
			}
		}
		if(max==min)
			k=printf("第%d行，第%d列的%d是鞍点\n",m+1,n+1,max);
	}
	}
	if(k==0||t==0)
		printf("该矩阵无鞍点\n");
	return 0;
}
*/

/*
//输入5个国家的名称，按字母顺序排列输出
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	char a[5][20],t[20];
	int i,j;
	for(i=0;i<5;i++)
	gets(a[i]);
	printf("排序后\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		if(strcmp(a[j],a[j+1])==1)
		{
			strcpy(t,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],t);
		}
	}
	for(i=0;i<5;i++)
	puts(a[i]);
	return 0;
}
*/

/*
//编程实现矩阵(4 行 4 列)的转置
#include<stdio.h>
int main()
{
	int a[4][4],b[4][4], i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			b[j][i] = a[i][j];
	printf("转置后\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	return 0;
}
*/

/*
//输出字符串中最长单词 (函数) 
#include<stdio.h>
#include<string.h>
void longestword(char str[])
{
	static char	max[30];
	int sum = 0, m = 0, i, j = 0;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] != ' '&&str[i] != '\0')
		{
			sum++;
			continue;
		}
		if (m < sum)
		{
			m = sum;
			j = i;
		}
		sum = 0;

	}
	strncpy_s(max, &str[j - m], m);
	printf("最长单词的是");
	puts(max);
}
int main()
{
	char str[1024];
	gets_s(str, 1023);
	longestword(str);
	return 0;
}
*/

/*
//倒序字符串（函数）
#include<stdio.h>
#include<string.h>
void swap(char * a, char * b)
{
	char t;
	t = *a;
	*a = *b;
	*b = t;
}
char * reverse(char aim[])
{
	for (int i = 0; i < strlen(aim) / 2; i++)
		swap(&aim[i], &aim[strlen(aim) - 1 - i]);
	return aim;
}
int main()
{
	char aim[128];
	gets_s(aim, 127);
	reverse(aim);
	puts(aim);
	return 0;
}
*/

/*
//输出 字母 数字 空格 其它字符 的个数(函数)
#include<stdio.h>
#include<string.h>
void count(char i[],int a[])
{
	for(int j=0;j<strlen(i);j++)
	{
		if (i[j] <= 'z'&&i[j] >= 'a' || i[j] <= 'Z'&&i[j] >= 'A')
			a[0]++;
		else if (i[j] <= '9'&&i[j] >= '0')
			a[1]++;
		else if (i[j] == ' ')
			a[2]++;
		else
			a[3]++;
	}
}
int main()
{
	char i[128];
	int a[4] = { 0 };
	gets_s(i, 127);
	count(i,a);
	printf("字母:%d,数字:%d,空格:%d,其他:%d", a[0], a[1], a[2], a[3]);
	return 0;
}
*/

/*
//4*4矩阵转置函数
#include <stdio.h>
void trans(int (*a)[4])
{
	int b[4][4],i,j;
	for ( i = 0; i < 4; i++)
		for ( j = 0; j < 4; j++)
			b[j][i] = a[i][j];
	for ( i = 0; i < 4; i++)
		for ( j = 0; j < 4; j++)
			a[i][j] = b[i][j];

}

int main()
{
	int a[4][4],i,j;
	for ( i = 0; i < 4; i++)
		for ( j = 0; j < 4; j++)
			scanf("%d",&a[i][j]);
	trans(a);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
*/

/*
//把字符串后移m个
#include<stdio.h>
#include<string.h>
#include<malloc.h>
void hy(char *a,int m)
{
	char *b=(char*)malloc(20);
	char *c=(char*)malloc(20);
	int t=strlen(a)-m;
	strncpy(b,a,t);
	b[t]='\0';
	strcpy(c,a+t);
	strcpy(a,c);
	strcat(a,b);
}

int main()
{
	char *a=(char*)malloc(50);
	int m;
	gets(a);
	scanf("%d",&m);
	hy(a,m);
	puts(a);
	return 0;
}
*/

/*
//输出字符串中连续的数字并统计个数
#include<stdio.h>
#include<malloc.h>
int main()
{
	char *str=(char*)malloc(128);
	int num[64],q=0,i=0,s=0;
	gets(str,127);
	for(;*str!='\0';str++)
	{
		if(*str >= '0' && *str <= '9')
		{
			s = s * 10 + (*str - '0');
			q=1;
		}
		else if(q==1)
		{
			num[i++]=s;
			s=0;
			q=0;
		}
	}
	num[i++]=s;
	for(int j=0;j<i;j++)
		printf("%d  ",num[j]);
	printf("\n一共有%d个", i);
	return 0;
}
*/

/*
//mystrcmp
#include<stdio.h>
#include<string.h>

int mystrcmp(char *a,char *b)
{
	while(1)
	{
		if(*a == '\0' && *b == '\0')
			return 0;
		else if(*a>*b)
			return 1;
		else if(*a<*b)
			return -1;
		++a;++b;
	}
}


int main()
{
	char a[5]="",b[5]="";
	printf("%d\n",mystrcmp(a,b));
	return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>

void sort(char *a[])
{
	char *t;
	int i, j, k;
	//使用选择排序
	for (i = 0; i < 5; i++)//一共经历i趟，i为元素个数减1
	{
		//寻找最小元素的下标
		k = i;//假设第一个元素最小
		for (j = i+1; j < 6; j++)//从第i+1个元素开始，前面的元素已经排好序
		{
			if (strcmp(a[k], a[j]) == 1)//寻找最小元素的下标
			{
				k = j;
			}
		}
		if (k != i)//假设不成立，交换最小元素和第一个元素
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}

int main()
{
	char n[6][10] = {"beijing","shenzhen","nanjing","dalian","shanghai","qingdao"},*a[6];
	int i;
	for (i = 0; i < 6; i++)
		a[i] = n[i];
	sort(a);
	for (i = 0; i < 6; i++)
		puts(a[i]);
}
*/

/*
//矩形法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e8
#define pi 3.1415926535897932384626433832795

double fun(double x)
{
	return x * x;
}
double djf(double a,double b,double (*fun)(double))
{
	int i;
	double h,sum=0;
	h=(b-a)/n;
	for(i=0;i<n;i++)
		sum += fun(a+i*h);
	sum *= h;
	return sum;
}

int main()
{
	double a,b;
	printf("输入积分区间(逗号隔开)\n");
	scanf_s("%lf,%lf",&a,&b);
	system("cls");
	printf("请稍候…");
	printf("\b\b\b\b\b\b\b\b结果为:%f\n",djf(a,b,fun));
	return 0;
}
*/
/*
//梯形法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double b,double (*fun)(double))
{
	int i;
	double h,sum=0;
	h=(b-a)/n;
	for(i=0;i<n;i++)
		sum += 0.5*(fun(a+i*h)+fun(a+(i+1)*h));
	sum *= h;
	return sum;
}

int main()
{
	printf("fun1结果为:%f\n",djf(0,3,fun1));
	printf("fun2结果为:%f\n",djf(0,2,fun2));
	return 0;
}
*/

/*
//辛普森法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double b,double (*fun)(double))
{
	return (b-a)/6*(fun(a)+fun(b)+4*fun((a+b)/2));
}

int main()
{
	printf("fun1结果为:%f\n",djf(0,3,fun1));
	printf("fun2结果为:%f\n",djf(0,2,fun2));
	return 0;
}
*/

/*
//随机点法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double (*fun)(double))
{
	double count=0,x,y;
	double b=a*100;
	for(int i=0;i<n;++i)
	{
		x=rand()%(int)b/100.0;
		y=rand()%500/100.0;
		if(y<=fun(x))
		{
			count++;
		}
	}
	return count/n*a*5;
}

int main()
{
	printf("fun1结果为:%f\n",djf(3,fun1));
	printf("fun2结果为:%f\n",djf(2,fun2));
	return 0;
}
*/

/*
#include<stdio.h>
#include<malloc.h>
void sort(int** a)
{
	int t, i, j, k, n;
	n = _msize(a) / sizeof(int**);
	for (i = 0; i < n; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (*a[j] < *a[k])
				k = j;
		}
		if (k != i)
		{
			t = *a[i];
			*a[i] = *a[k];
			*a[k] = t;
		}
	}
}

int main()
{
	int** p;
	int n, i;
	printf("输入整数个数\n");
	scanf_s("%d", &n);
	p = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++)
		p[i] = (int*)malloc(sizeof(int));
	printf("输入要排序的数(空格隔开)\n");
	for (i = 0; i < n; i++)
		scanf_s("%d", p[i]);
	sort(p);
	printf("排序后\n");
	for (i = 0; i < n; i++)
		printf("%d ", *p[i]);
	printf("\n");
	for (i = 0; i < n; i++)
		free(p[i]);
	free(p);
	p = NULL;
	return 520;
}
*/


/*
#include<stdio.h>
#include<malloc.h>
#include<iostream.h>
#include<string.h>
struct stu
{
	char sub1[20];
	float score1;
	char sub2[20];
	float score2;
};
int main()
{
	struct stu xiaoming={"yuwen",59,"shuxue",58};
	struct stu xiaofang={"yuwen",100,"shuxue",100};
	printf("xiaoming sub\tscore\txiaofang sub\tscore\t\n");
	printf("\t%s\t%.1f\t\t%s\t%.1f\n",xiaoming.sub1,xiaoming.score1,xiaofang.sub1,xiaofang.score1);
	printf("\t%s\t%.1f\t\t%s\t%.1f\n",xiaoming.sub2,xiaoming.score2,xiaofang.sub2,xiaofang.score2);

	return 0;
}
*/


/*
//10个数最大数移到最后最小数移到最前
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#include<string.h>
#include<math.h>
#include<malloc.h>
void input(int *a)
{
	for(int i=0;i<10;++i)
		scanf("%d",a+i);
}

void trans(int *a)
{
	int i,j=0,k=0,t;
	for(i=1;i<10;++i)
		if(a[i]>a[j])
			j=i;
	for(i=1;i<10;++i)
		if(a[i]<a[k])
			k=i;
	t=a[9];
	a[9]=a[j];
	a[j]=t;
	t=a[0];
	a[0]=a[k];
	a[k]=t;

}

void output(int *a)
{
	for(int i=0;i<10;++i)
		printf("%d",a[i]);
}
int main()
{
	int a[10];
	input(a);
	trans(a);
	output(a);
	return 0;
}
*/
/*
//n个人围一圈，从一到三报数，报到三的人爬，最后剩几号
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<malloc.h>

int main()
{
	int* a, n, i, j = 1;
	scanf_s("%d", &n);
	a = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; ++i)
		a[i] = 1;
	for (i = 0; j <= 3 * (n - 1); i = (++i) % n)
	{
		if (a[i] == 0)
			continue;
		else
		{
			if (j % 3 == 0)
				a[i % n] = 0;
			j++;
		}

	}
	for (i = 0; a[i] != 1; ++i);
	printf("%d\n", i + 1);
	return 0;
}
*/
/*
#define N 10
#include<stdio.h>
int main()
{
	int i,j,yh[N];
	printf("%4d\n",yh[0]=1);
	for(i=1;i<N;i++)
	{
		printf("%4d",yh[i]=1);
		for(j=i-1;j>0;j--)
			printf("%4d",yh[j]=yh[j]+yh[j-1]);
		printf("%4d\n",yh[i]);

	}

	return 0;
}
*/
/*
//幻方
#include<stdio.h>
#include<malloc.h>
int main()
{
	int **a,n;
	int s,i,j,t,r;
	scanf("%d",&n);
	a=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
		a[i]=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	i=0;j=n/2o;
	for(s=1;s<=n*n;s++)
	{
		a[i][j]=s;
		t=(i-1+n)%n;
		r=(j+1)%n;
		if(a[t][r]==0)
		{
			i=t;
			j=r;
		}
		else
			i=(i+1)%n;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}


	return 0;
}
*/

/*
//mystrcat
#include<stdio.h>
#include<string.h>
void mystrcat(char *a,char *b)
{
	int n=strlen(a);
	char *c=a+n;
	while((*(c++)=*(b++))!='\0');
}
int main()
{
	char a[50]="hello ";
	char b[50]="world!";
	mystrcat(a,b);
	puts(a);
	return 0;
}
*/

/*
//数组中插入一个数
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,s,a[20]={1,2,3,4,6,7,8};
	scanf("%d",&n);
	if(a[0]>a[1])
	{
		for(i=0;a[i]!=0;i++)
			if(a[i]<n)
				break;
		for(s=0;a[s]!=0;s++);
		for(j=s-1;j>=i;j--)
			a[j+1]=a[j];
		a[i]=n;
	}
	if(a[0]<a[1])
	{
		for(i=0;a[i]!=0;i++)
			if(a[i]>n)
				break;
		for(s=0;a[s]!=0;s++);
		for(j=s-1;j>=i;j--)
			a[j+1]=a[j];
		a[i]=n;
	}

	for(i=0;a[i]!=0||i==0;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	int a[100];
	int n,i,k=0,lastone,hao=0; //i 编号 n 总人数 k出局人数 latsone 此时退圈人号码 hao 报的数字   0 表示出局
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=1;
		for(i=0;k<n;i=++i%n)
		{
			if(a[i]==1)
				hao++;
				if(hao%3==0)
				{
					a[i]=0;
					k++;
				}
		}
	for(i=0;a[i]!=1;i++);


	printf("最后留下的人是第%d号\n",i+1);
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
float score[5][3];
int i,j;
float ave(float a[5][3],int n);
void bjg(float a[][3]);
void nbw(float a[][3]);

int main()
{
	for(i=0;i<5;++i)
		for(j=0;j<3;++j)
		scanf("%f",&score[i][j]);
	printf("ave=%f\n",ave(score,0));
	bjg(score);
	nbw(score);
	return 0;
}

float ave(float a[5][3],int n)
{
	float sum=0;
	for(i=0;i<5;++i)
		sum+=a[i][n];
	sum=sum/5;
	return sum;
}

void bjg(float a[][3])
{
	for(i=0;i<5;++i)
	{
		if(a[i][0]<60&&a[i][1]<60&&a[i][2]<60)
			printf("学号:%d,sub1:%f,sub2:%f,sub3:%f\n",i+2020118092,a[i][0],a[i][1],a[i][2]);
	}
}
void nbw(float a[][3])
{
	for(i=0;i<5;++i)
	{
		if(a[i][0]+a[i][1]+a[i][2] > 255 && a[i][0]+a[i][1]+a[i][2]<270)
			printf("学号:%d,name:小%c\n",i+2020118092,'a'+i);
	}
}

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char a[5][20];
	char t[20];
	int i,j,k;
	for(i=0;i<5;++i)
		gets(a[i]);
	for(i=0;i<5;++i)
	{
		k=i;
		for(j=i+1;j<5;++j)
		{
			if(strcmp(a[k],a[j])>0)
			{
				k=j;
			}
		}
		if(k!=i)
		{
			strcpy(t,a[k]);
			strcpy(a[k],a[i]);
			strcpy(a[i],t);
		}
	}
		for(i=0;i<5;++i)
			puts(a[i]);

}

#include<stdio.h>
#include<iostream.h>

struct Stu
{
	char id[20];
	char name[20];
	float score[3];
};

int main(int argc, char* argv[])
{
	Stu a[5];
	int i,j,best=0,t=0;
	float sum=0;
	cout<<"学号   姓名		微积分 线代 离散"<<endl;
	for(i=0;i<5;i++)
		scanf("%s%s%f%f%f",a[i].id,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			sum+=a[i].score[j];
	printf("the average score is %f\n",sum/15);

	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
		{
			if(a[best].score[t]<a[i].score[j])
			{
				best = i;
				t = j;
			}
		}
	printf("the best student is %s  %s\n ",a[best].id,a[best].name);

	return 0;
}

#include<stdio.h>
#include<iostream.h>
#include<malloc.h>
#define len sizeof(Stu)
struct Stu
{
	long id;
	char name[20];
	char sex[3];
	int age;
	Stu *next;
};

Stu *creatlist();
Stu *insert_node(Stu *head,Stu *a);
Stu *delete_node(Stu *head,long id);

int main(int argc, char* argv[])
{
	Stu *head;
	head=creatlist();


	return 0;
}

Stu *creatlist()
{
	Stu *head,*p1,*p2;//p2->p1
	p1 = p2 = (Stu *)malloc(len);
	cout<<"please input num name"<<endl;
	scanf("%ld %s", &p1->id, p1->name);
	head = NULL;
	while (p1->id != 0)
	{
		if(head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Stu *)malloc(len);
		scanf("%ld %s",&p1->id,p1->name);
	}
	free(p1);
	p2->next = NULL;
	return(head);

}

Stu *insert_node(Stu *head,Stu *a)
{
	Stu *p1,*p2,*p;//p2为p1前一个节点
	p1 = p2 = head;
	p = a;
	if(head == NULL)
	{
		head = p;
		p->next = NULL;
	}
	else
	{
		while ((p->id > p1->id)&&(p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if(p->id <= p1->id)
		{
			if(p1 == head)
			{
				p->next = head;
				head = p;
			}
			else
			{
				p->next = p1;
				p2->next = p;
			}
		}
		else
		{
			p1->next = p;
			p->next = NULL;
		}
	}
	return(head);
}

Stu *delete_node(Stu *head,long id)
{
	Stu *p1,*p2; //p2->p1
	p1 = head;
	if(head == NULL)
		printf("list is null!\n");
	else
	{
		while ((p1->id != id)&&(p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if(p1->id == id)
		{
			if(p1 == head)
				head = p1->next;
			else
				p2->next = p1->next;
			free(p1);
		}
		else
			printf("There is no the %ld student",id);
	}
	return(head);
}
*/

/*
//矩阵的积
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[4][3] = { {1,2,3},{4,5,6},{7,8,9},{2,4,6} }, b[3][2] = { {1,2},{3,4},{1,3} }, result[4][2];
	int i = 0, j = 0, k = 0, sum;
	int* p = &a[0][0], * q = &b[0][0], * t = &result[0][0];

	for (i = 0; i < 8; ++i)
	{
		sum = 0;
		for (k = 0; k <= 4; k += 2)
		{
			sum += p[j++] * q[k];
		}
		t[i++] = sum; j -= 3;
		sum = 0;
		for (k = 1; k <= 5; k += 2)
		{
			sum += p[j++] * q[k];
		}
		t[i] = sum;
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}


	return 0;
}
*/
/*
#define N 10
#include<stdio.h>
int main()
{
	int i,j,yh[N];
	printf("%4d\n",yh[0]=1);
	for(i=1;i<N;i++)
	{
		printf("%4d",yh[i]=1);
		for(j=i-1;j>0;j--)
			printf("%4d",yh[j]=yh[j]+yh[j-1]);
		printf("%4d\n",yh[i]);

	}

	return 0;
}
*/
/*
//幻方
#include<stdio.h>
#include<malloc.h>
int main()
{
	int **a,n;
	int s,i,j,t,r;
	scanf("%d",&n);
	a=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
		a[i]=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	i=0;j=n/2o;
	for(s=1;s<=n*n;s++)
	{
		a[i][j]=s;
		t=(i-1+n)%n;
		r=(j+1)%n;
		if(a[t][r]==0)
		{
			i=t;
			j=r;
		}
		else
			i=(i+1)%n;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}


	return 0;
}
*/

/*
//mystrcat
#include<stdio.h>
#include<string.h>
void mystrcat(char *a,char *b)
{
	int n=strlen(a);
	char *c=a+n;
	while((*(c++)=*(b++))!='\0');
}
int main()
{
	char a[50]="hello ";
	char b[50]="world!";
	mystrcat(a,b);
	puts(a);
	return 0;
}
*/

/*
//数组中插入一个数
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,s,a[20]={1,2,3,4,6,7,8};
	scanf("%d",&n);
	if(a[0]>a[1])
	{
		for(i=0;a[i]!=0;i++)
			if(a[i]<n)
				break;
		for(s=0;a[s]!=0;s++);
		for(j=s-1;j>=i;j--)
			a[j+1]=a[j];
		a[i]=n;
	}
	if(a[0]<a[1])
	{
		for(i=0;a[i]!=0;i++)
			if(a[i]>n)
				break;
		for(s=0;a[s]!=0;s++);
		for(j=s-1;j>=i;j--)
			a[j+1]=a[j];
		a[i]=n;
	}

	for(i=0;a[i]!=0||i==0;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	int a[100];
	int n,i,k=0,lastone,hao=0; //i 编号 n 总人数 k出局人数 latsone 此时退圈人号码 hao 报的数字   0 表示出局
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=1;
		for(i=0;k<n;i=++i%n)
		{
			if(a[i]==1)
				hao++;
				if(hao%3==0)
				{
					a[i]=0;
					k++;
				}
		}
	for(i=0;a[i]!=1;i++);


	printf("最后留下的人是第%d号\n",i+1);
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>
float score[5][3];
int i,j;
float ave(float a[5][3],int n);
void bjg(float a[][3]);
void nbw(float a[][3]);

int main()
{
	for(i=0;i<5;++i)
		for(j=0;j<3;++j)
		scanf("%f",&score[i][j]);
	printf("ave=%f\n",ave(score,0));
	bjg(score);
	nbw(score);
	return 0;
}

float ave(float a[5][3],int n)
{
	float sum=0;
	for(i=0;i<5;++i)
		sum+=a[i][n];
	sum=sum/5;
	return sum;
}

void bjg(float a[][3])
{
	for(i=0;i<5;++i)
	{
		if(a[i][0]<60&&a[i][1]<60&&a[i][2]<60)
			printf("学号:%d,sub1:%f,sub2:%f,sub3:%f\n",i+2020118092,a[i][0],a[i][1],a[i][2]);
	}
}
void nbw(float a[][3])
{
	for(i=0;i<5;++i)
	{
		if(a[i][0]+a[i][1]+a[i][2] > 255 && a[i][0]+a[i][1]+a[i][2]<270)
			printf("学号:%d,name:小%c\n",i+2020118092,'a'+i);
	}
}

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char a[5][20];
	char t[20];
	int i,j,k;
	for(i=0;i<5;++i)
		gets(a[i]);
	for(i=0;i<5;++i)
	{
		k=i;
		for(j=i+1;j<5;++j)
		{
			if(strcmp(a[k],a[j])>0)
			{
				k=j;
			}
		}
		if(k!=i)
		{
			strcpy(t,a[k]);
			strcpy(a[k],a[i]);
			strcpy(a[i],t);
		}
	}
		for(i=0;i<5;++i)
			puts(a[i]);

}

#include<stdio.h>
#include<iostream.h>

struct Stu
{
	char id[20];
	char name[20];
	float score[3];
};

int main(int argc, char* argv[])
{
	Stu a[5];
	int i,j,best=0,t=0;
	float sum=0;
	cout<<"学号   姓名		微积分 线代 离散"<<endl;
	for(i=0;i<5;i++)
		scanf("%s%s%f%f%f",a[i].id,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			sum+=a[i].score[j];
	printf("the average score is %f\n",sum/15);

	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
		{
			if(a[best].score[t]<a[i].score[j])
			{
				best = i;
				t = j;
			}
		}
	printf("the best student is %s  %s\n ",a[best].id,a[best].name);

	return 0;
}

#include<stdio.h>
#include<iostream.h>
#include<malloc.h>
#define len sizeof(Stu)
struct Stu
{
	long id;
	char name[20];
	char sex[3];
	int age;
	Stu *next;
};

Stu *creatlist();
Stu *insert_node(Stu *head,Stu *a);
Stu *delete_node(Stu *head,long id);

int main(int argc, char* argv[])
{
	Stu *head;
	head=creatlist();


	return 0;
}

Stu *creatlist()
{
	Stu *head,*p1,*p2;//p2->p1
	p1 = p2 = (Stu *)malloc(len);
	cout<<"please input num name"<<endl;
	scanf("%ld %s", &p1->id, p1->name);
	head = NULL;
	while (p1->id != 0)
	{
		if(head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (Stu *)malloc(len);
		scanf("%ld %s",&p1->id,p1->name);
	}
	free(p1);
	p2->next = NULL;
	return(head);

}

Stu *insert_node(Stu *head,Stu *a)
{
	Stu *p1,*p2,*p;//p2为p1前一个节点
	p1 = p2 = head;
	p = a;
	if(head == NULL)
	{
		head = p;
		p->next = NULL;
	}
	else
	{
		while ((p->id > p1->id)&&(p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if(p->id <= p1->id)
		{
			if(p1 == head)
			{
				p->next = head;
				head = p;
			}
			else
			{
				p->next = p1;
				p2->next = p;
			}
		}
		else
		{
			p1->next = p;
			p->next = NULL;
		}
	}
	return(head);
}

Stu *delete_node(Stu *head,long id)
{
	Stu *p1,*p2; //p2->p1
	p1 = head;
	if(head == NULL)
		printf("list is null!\n");
	else
	{
		while ((p1->id != id)&&(p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if(p1->id == id)
		{
			if(p1 == head)
				head = p1->next;
			else
				p2->next = p1->next;
			free(p1);
		}
		else
			printf("There is no the %ld student",id);
	}
	return(head);
}

#include <stdio.h>

int main()
{
	int T;
	int i;
	int n;

	scanf("%d",&T);

	while(T--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(i%2==1)
			{
				if(i==1)
					printf("%d",i);

				else
					printf(" %d",i);
			}
		}

		printf("\n");

		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				if(i==2)
					printf("%d",i);

				else
					printf(" %d",i);
			}
		}

		printf("\n");

		if(T!=0)
			printf("\n");
	}

	return 0;
}

#include<stdio.h>
#include<malloc.h>
#include<iostream.h>
#include<string.h>
#include<ctype.h>

int count(char *,char *);

void main()
{
	char str[128],aim[16];
	cout<<"Please input the text"<<endl;
	gets(str);
	cout<<endl<<"Please input the key word"<<endl;
	gets(aim);

	cout<<endl<<"This word shows up for "<<count(str,aim)<<" times."<<endl;
}

int count(char *str,char *aim)
{
	char *p=str;
	int len=strlen(str),i,sum=0;
	//preprocess
	for(i=0;i<len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=tolower(str[i]);
		if(str[i]==' '||str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?')
			str[i]='\0';
	}
	//
	for(i=0;i<len;i++)
	{
		if(strcmp(p,aim)==0)
			sum++;
		while(*(++p) != '\0');
		++p;
	}
	return sum;
}
*/








/*
//最大公因数和最小公倍数
#include<stdio.h>
int main()
{
	int a, b, c, d, e, t;
	printf("输入两个正整数,逗号隔开\n");
	scanf("%d,%d", &a, &b);
	d = a; e = b;
	while (b != 0)
	{
		t = a;
		a = b;
		b = t % b;

	}
	c = e * d / a;
	printf("最大公因数是:%d\n最小公倍数是:%d\n", a, c);
}
*/


/*
//矩形法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double b,double (*fun)(double))
{
	int i;
	double h,sum=0;
	h=(b-a)/n;
	for(i=0;i<n;i++)
		sum += fun(a+i*h);
	sum *= h;
	return sum;
}

int main()
{
	printf("fun1结果为:%f\n",djf(0,3,fun1));
	printf("fun2结果为:%f\n",djf(0,2,fun2));
	return 0;
}
*/

/*
//梯形法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double b,double (*fun)(double))
{
	int i;
	double h,sum=0;
	h=(b-a)/n;
	for(i=0;i<n;i++)
		sum += 0.5*(fun(a+i*h)+fun(a+(i+1)*h));
	sum *= h;
	return sum;
}

int main()
{
	printf("fun1结果为:%f\n",djf(0,3,fun1));
	printf("fun2结果为:%f\n",djf(0,2,fun2));
	return 0;
}
*/

/*
//辛普森法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double b,double (*fun)(double))
{
	return (b-a)/6*(fun(a)+fun(b)+4*fun((a+b)/2));
}

int main()
{
	printf("fun1结果为:%f\n",djf(0,3,fun1));
	printf("fun2结果为:%f\n",djf(0,2,fun2));
	return 0;
}
*/

/*
//随机点法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define n 1e6

double fun1(double x)
{
	return x/(1+x*x);
}

double fun2(double x)
{
	return 1+x*x;
}

double djf(double a,double (*fun)(double))
{
	double count=0,x,y;
	double b=a*100;
	for(int i=0;i<n;++i)
	{
		x=rand()%(int)b/100.0;
		y=rand()%500/100.0;
		if(y<=fun(x))
		{
			count++;
		}
	}
	return count/n*a*5;
}

int main()
{
	printf("fun1结果为:%f\n",djf(3,fun1));
	printf("fun2结果为:%f\n",djf(2,fun2));
	return 0;
}
*/
/*
//矩阵的积
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{2,4,6}},b[3][2]={{1,2},{3,4},{1,3}},result[4][2];
	int i=0,j=0,k=0,sum;
	int *p=&a[0][0],*q=&b[0][0],*t=&result[0][0];

	for(i=0;i<8;++i)
	{
		sum=0;
		for(k=0;k<=4;k+=2)
		{
			sum+=p[j++]*q[k];
		}
		t[i++]=sum;j-=3;
		sum=0;
		for(k=1;k<=5;k+=2)
		{
			sum+=p[j++]*q[k];
		}
		t[i]=sum;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",result[i][j]);
		printf("\n");
	}


	return 0;
}
*/

/*
//不动点法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f(double x)
{
	return ((-1.0 - 2.0 * x * x - x * x * x) / 2.0);
}

double bdd(double x0, double jd, double(*f)(double))
{
	double x1;
	int a=10000;
	x1 = f(x0);
	while (fabs(x0 - x1) >= jd & a)
	{
		x0 = x1;
		x1 = f(x0);
		a--;
	}
	return x1;
}

void main()
{
	printf("%f\n", bdd(-1.5, 0.0001, f));
}
*/

/*
//牛顿
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f(double x)
{
	return x * x * x - 2 * x * x + 4 * x + 1;
}
double df(double x)
{
	return 3 * x * x - 4 * x + 4;
}

double newton(double x0,double jd,double(*f)(double),double(*df)(double))
{
	double x1,f0,df0;
	f0 = f(x0);
	df0 = df(x0);
	x1 = x0 - f0 / df0;
	int a=100;
	while((fabs(x1 - x0) >= jd || fabs(x0) >= jd) && a)
	{
		x0 = x1;
		f0 = f(x0);
		df0 = df(x0);
		x1 = x0 - f0 / df0;
		a--;
	}
	return x1;
}
void main()
{
	printf("%f\n",newton(0,0.1,f,df));
}
*/

/*
//二分法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f(double x)
{
	return x * x * x - 6 * x - 1;
}
double eff(double a,double b,double jd,double(*f)(double))
{
	double fa,fx0,x0;
	int t=100;
	fa = f(a);
	while(fabs(a-b) >= jd && a)
	{
		x0 = (a + b)/2.0;
		fx0 = f(x0);
		if(fx0 * fa < 0)
			b=x0;
		else
			a=x0;
		t--;
	}
	return x0;
}

void main()
{
	printf("%f\n",eff(1.0,3.0,0.001,f));
}
*/

/*
//弦截法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f(double x)
{
	return x * x * x - 2 * x * x + 7 * x - 4;
}

double xjf(double x0,double x1,double jd,double(*f)(double))
{
	double x2,f0,f1,f2;
	int t=100;
	f0 = f(x0);
	f1 = f(x1);
	x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
	while((fabs(x2 - x1) >=jd || fabs(f1) >= jd) && t)
	{
		f2 = f(x2);
		x0 = x1;
		f0 = f1;
		x1 = x2;
		f1 = f2;
		x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
		t--;
	}
	return x2;
}
void main()
{
	printf("%f\n",xjf(1.0,2.0,1e-6,f));
}
*/

/*
//黄金值搜索法
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 0.618
#define n 0.382

double f(double x)
{
	return x * x - 4 * x + 4;
}
double hjz(double a,double b,double jd,double(*f)(double))
{
	int t=100;
	double c,d,fc,fd;
	c = a + n * (b - a);
	d = a + N * (b - a);
	fc = f(c);
	fd = f(d);
	while(fabs(d - c) >= jd && t)
	{
		if(fc > fd)
		{
			a = c;
			c = d;
			d = a + N * (b - a);
		}
		else
		{
			b = d;
			d = c;
			c = a + n * (b - a);
		}
		fc = f(c);
		fd = f(d);
		t--;
	}
	return fc < fd ? fc : fd;
}
void main()
{
	printf("%f\n",hjz(0.0,4.0,0.0001,f));
}
*/


/**********************
       位运算模块
**********************/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void SHOW_BINARY(int a)//显示当前整数的32位二进制补码
{
	int  m = 31;
	while (m >= 0)
	{
		printf("%d ", (a >> m--) & 1);
	}
}


int COUNT(int a)//统计一个数的二进制表示中1的个数
{
	int count = 0;
	while (a != 0)
	{
		if ((a & 1) != 0)
			count++;
		a = a >> 1;
	}
	return count;
}


void EXCHANGE(int* a, int* b)//交换两个数
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}


int _ABS(int a)//求一个数的绝对值
{
	a = (a ^ (a >> 31)) - (a >> 31);
	return a;
}


void SET1(int *a, int k)//将一个整数的二进制表示中的第k位置为1（最低位为第1位）
{
	*a = *a | (1 << (k - 1));
}


int GET_VALUE(int a, int k)//获得一个整数的二进制表示中第k位的值
{
	return a >> (k - 1) & 1;
}


int ADDER(int a, int b)//求两个整数之和
{
	int sum = 0, carry = 0;
	while (b != 0)
	{
		sum = a ^ b;
		carry = (a & b) << 1;
		a = sum; b = carry;
	}
	return a;
}


void HALF_ADDER(int a, int b, int* sum, int* carry)//一位半加器
{
	*sum = a ^ b;
	*carry = a & b;
}


void FULL_ADDER(int a, int b, int c, int* sum, int* carry)//一位全加器
{
	int halfcarry;
	HALF_ADDER(a, b, sum, &halfcarry);
	HALF_ADDER(*sum, c, sum, carry);
	*carry = *carry | halfcarry;
}


void ADDER_8BIT(int a[8], int b[8], int sum[8], int* carry)//8位波纹进位加法器
{
	int t,n;
	HALF_ADDER(a[7], b[7], &t, carry);
	sum[7] = t;
	for(n=6;n>=0;n--)
	{
		FULL_ADDER(a[n], b[n], *carry, &t, carry);
		sum[n] = t;
	}
}
void main()
{
	int a[8] = { 0 }, b[8] = { 0 }, sum[8] = { 0 };
	int carry = 0;
	int m = 1,i;
	for (i = 0; i < 8; i++)
		scanf_s("%d", a + i);
	for (i = 0; i < 8; i++)
		scanf_s("%d", b + i);
	ADDER_8BIT(a, b, sum, &carry);
	for(i=0;i<8;i++)
		printf("%d ",sum[i]);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (a; a <= b; a++)
	{
		int i = 10, j, k;
		do
		{
			j = a * a;
			k = j % i;
			if (k == a)
				break;
			i = i * 10;
		} while (j > k);
		if (k == a)
			printf("%d ", a);
	}
	printf("\b");
	return 0;
}

*/

/*  单链表操作  */
/*
#include <stdio.h>
#include <malloc.h>
#include <iostream.h>

#define LEN sizeof(struct student)

struct student
{
	long num;
	char name[20];
	struct student* next;
};
struct student* CreateList();
void ShowList(struct student* head);
struct student* InsertNode(struct student* head, struct student* stu);
struct student* InvertList(struct student* head);
struct student* DeleteNode(struct student* head, long num);
struct student* MergeList(struct student* head1, struct student* head2);
struct student* FindNode(struct student* head, long num);
void main()
{
	struct student* head1, * head2, * head;
	head1 = CreateList();
	head = FindNode(head1, 1);
	if (head)
		cout << head->name << endl;

	//	head2 = CreateList();
	//	head = MergeList(head1,head2);
	//	ShowList(head);
}


struct student* CreateList()
{
	struct student* head, * p1, * p2;//p2->p1
	p1 = p2 = (struct student*)malloc(LEN);
	cout << "please input num name" << endl;
	scanf("%ld %s", &p1->num, p1->name);
	head = NULL;
	while (p1->num != 0)
	{
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student*)malloc(LEN);
		scanf("%ld %s", &p1->num, p1->name);
	}
	free(p1);
	p2->next = NULL;
	return(head);
}


void ShowList(struct student* head)
{
	struct student* p;
	p = head;
	if (head != NULL)
		while (p != NULL)
		{
			printf("%ld  %-20s\n", p->num, p->name);
			p = p->next;
		}
	else
		printf("this is a empty list\n");
}

//链表的插入，按照从小到大的顺序查找插入
struct student* InsertNode(struct student* head, struct student* stu)
{
	struct student* p1, * p2, * p;//p2为p1前一个节点
	p1 = p2 = head;
	p = stu;
	if (head == NULL)
	{
		head = p;
		p->next = NULL;
	}
	else
	{
		while ((p->num > p1->num) && (p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p->num <= p1->num)
		{
			if (p1 == head)
			{
				p->next = head;
				head = p;
			}
			else
			{
				p->next = p1;
				p2->next = p;
			}
		}
		else
		{
			p1->next = p;
			p->next = NULL;
		}
	}
	return(head);
}


struct student* InvertList(struct student* head)
{
	struct student* p, * p1, * p2;//p2->p->p1
	p = p1 = p2 = head;
	if (head == NULL)
		printf("List is null!\n");
	else
	{
		p = p2->next;
		p1 = p->next;
		while (p1 != NULL)
		{
			if (p2 == head)
			{
				p2->next = NULL;
				p->next = p2;
			}
			else
				p->next = p2;
			p2 = p;
			p = p1;
			p1 = p1->next;
		}
		p->next = p2;
		head = p;
	}
	return(head);
}

struct student* MergeList(struct student* head1, struct student* head2)
{
	struct student* p, * p1;
	p = head2;
	while (p != NULL)
	{
		p1 = p->next;
		head1 = InsertNode(head1, p);
		p = p1;
	}
	return head1;
}


struct student* DeleteNode(struct student* head, long num)
{
	struct student* p1, * p2; //p2->p1
	p1 = head;
	if (head == NULL)
		printf("list is null!\n");
	else
	{
		while ((p1->num != num) && (p1->next != NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p1->num == num)
		{
			if (p1 == head)
				head = p1->next;
			else
				p2->next = p1->next;
			free(p1);
		}
		else
			printf("There is no the %ld student", num);
	}
	return(head);
}

struct student* FindNode(struct student* head, long num)
{
	struct student* p; //p2->p1
	p = head;
	if (head == NULL)
	{
		printf("list is null!\n");
		return NULL;
	}
	else
	{
		while (p != NULL)
		{
			if (p->num == num)
				return p;
			else
				p = p->next;
		}
		printf("Not find \n");
		return NULL;
	}
}
*/

/*
//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，
//每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
#define _CRT_SECURE_NO_WARNINGS
int cow_num(int);
int cow_num(int n) 
{
	if (n <= 4)
		return n;
	return cow_num(n - 1) + cow_num(n - 3);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#define LEN sizeof(list)
#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

typedef struct LinkList
{
	int data;
	list *next;
} list;

list* CreateList()
{
	list* head, * p1, * p2;//p2->p1
	p1 = p2 = (list*)malloc(LEN);
	cout << "please input data" << endl;
	scanf("%ld", &p1->data);
	head = NULL;
	while (p1->data != 0)
	{
		if (head == NULL)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (list*)malloc(LEN);
		scanf("%ld", &p1->data);
	}
	free(p1);
	p2->next = NULL;
	return(head);
}

list *Delete_Node_Backwards(list *head, int n)//  删除链表倒数第n个结点  
{
	int count = 1;
	list* p = head;
	while ((p++)->next != NULL) {count++;}

	return head;
}
*/




/*1
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

typedef char ElemType;

typedef struct Node {
	ElemType data;
	struct Node* next;
}Node, * LinkList;

LinkList MergeList(LinkList LA, LinkList LB)
{
	LinkList LC;
	Node* pa, * pb, * r;
	pa = LA->next;
	pb = LB->next;
	LC = LA;
	LC->next = NULL;
	r = LC;
	while (pa != NULL && pb != NULL)
	{
		if (pa->data <= pb->data)
		{
			r->next = pa;
			r = pa;
			pa = pa->next;
		}
		else
		{
			r->next = pb;
			r = pb;
			pb = pb->next;
		}
		if (pa)
		{
			r->next = pa;
		}
		else
		{
			r->next = pb;
		}
	}
	return LC;
}
*/
/*2
#include<stdio.h>
#include<windows.h>
typedef struct node
{
	int val;
	struct node* next;
}Node;
struct node* mySort(struct node* head)
{
	struct node* shead, * stail;
	struct node* bhead, * btail;
	struct node* temp1, * temp3, * temp2;
	int temp4;
	temp4 = head->val;
	temp2 = temp1 = head;
	shead = stail = bhead = btail = NULL;
	while (temp1 != NULL)
	{
		if (temp1==head)
			temp1 = temp1->next;
		else
		{
			temp3 = temp1;
			temp1 = temp1->next;
			if (temp3->val < temp4)
			{
				if (shead==NULL)
				{
					shead = stail = temp3;
					stail->next = NULL;
				}
				stail->next = temp3;
				stail = stail->next;
				stail->next = NULL;
			}
			else
			{
				if (bhead==NULL)
				{
					bhead = btail = temp3;
					btail->next = NULL;
				}
				btail->next = temp3;
				btail = btail->next;
				btail->next = NULL;
			}
		}
	}
	if (stail==NULL)
	{
		temp2->next = bhead;
		btail->next = NULL;
		head = temp2;
	}
	else
		if (btail == NULL)
		{
			stail->next = temp2;
			temp2->next = NULL;
			head = shead;
		}
		else
		{
			stail->next = temp2;
			temp2->next = bhead;
			btail->next = NULL;
			head = shead;
		}
	return head;
}
*/
/*3
#include<stdio.h>
#include<stdlib.h>
struct LNode
{
	int data;
	LNode* next;
};
LNode* find_LNode(LNode* La, LNode* Lb)
{
	LNode* pa = La, * pb = Lb;
	while (pa != pb)
	{
		pa = pa->next;
		pb = pb->next;
	}
	return pa;
}
*/
/*4
#include<stdio.h>
#include<stdlib.h>
struct ListNode* deleteDuplicates(struct ListNode* head)
{
	struct ListNode* p1, * p2;
	p1 = head;
	if (head == NULL)
	{
		return head;
	}
	while ((p1 != NULL) && (p1->next != NULL))
	{
		p2 = p1;
		p2 = p2->next; 
			if (p2->val == p1->val)
			{
				p1->next = p2->next;
			}
			else
			{
				p1 = p1->next;
			}
	}
	return head;
}

*/
/*5
#include<stdio.h>
#include<stdlib.h>
int deleteElem(LNode* head, int k) {
	p1 = head->next;

	p = head;

	int i = 1；

		while (p1 != null) {
			p1 = p1->next;

			i++;

			if (i > k)

				p = p->next;

		}

	if (p == head)
		return 0;

	else {
		cout << p->val;

		return 1；

	}
	*/

#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>//万能头文件
using namespace std;
constexpr auto length = 128;

//定义结构体
struct Sstring
{
	char str[length];
	int len;
 };

/*将串s中下标pos起len个字符复制到sub中*/
void SubString(Sstring* sub, Sstring s, int pos, int len)

{
	int i;
	if (pos<0 || pos>s.len || len<1 || len>s.len - pos)
	{
		sub->len = 0;
	}
	else 
	{
		for (i = 0; i < len; i++)
			sub->str[i] = s.str[pos + i];
		sub->len = len;
	}
}

/*求子串t在主串s中第一次出现的位置，成功返回位置序号，不成功返回-1*/
int StrIndex(Sstring s, Sstring t)

{
	int i, j, start;
	if (t.len == 0) 
		return 0;   /* 目标串为空串时，是任意串的子串 */
	start = 0;  i = start;  j = 0;  /* 主串从pos开始，目标串从头（0）开始 */
	while (i < s.len && j < t.len)
		if (s.str[i] == t.str[j])/* 当前对应字符相等时推进 */
		{ 
			i++; j++; 
		}   
		else /* 当前对应字符不等时回溯 */
		{
			start++;        
			i = start;  j = 0;   /* 主串从start+1开始，目标串从头（0）开始*/
		}
	if (j >= t.len)
		return start;    /* 匹配成功时，返回匹配起始位置 */
	else return -1;    /* 匹配不成功时，返回-1 */
}

/*求子串t在主串s中最后一次出现的位置，成功返回位置序号，不成功返回-1*/
int rStrIndex(Sstring s, Sstring t)

{
	int i, j, start;
	if (t.len == 0)
		return 0;   /* 目标串为空串时，是任意串的子串 */
	start = s.len - t.len + 1;  i = start;  j = 0;  /* 主串从pos开始，模式串从头（0）开始 */
	while (i < s.len && j < t.len)
		if (s.str[i] == t.str[j]) /* 当前对应字符相等时推进 */
		{ 
			i++; j++; 
		}  
		else /* 当前对应字符不等时回溯 */
		{
			start--;
			i = start;  j = 0;   /* 主串从start+1开始，目标串从头（0）开始*/
		}
	if (j >= t.len) 
		return start;    /* 匹配成功时，返回匹配起始位置 */
	else return -1;    /* 匹配不成功时，返回-1 */
}

/*找出字符串中最长、最短单词并统计词数。如果有多个最长或最短的单词，则将其全部输出。*/
void Words(Sstring s)
{
	char* p = s.str;
	int len = 0, maxLen = 0, minLen = 0, count = 0, i = 1, j = 1;    //单词长度初始化为0，默认最大单词长度也为0
	while (*p != '\0')
	{
		if (count == 1)
			minLen = maxLen;
		len = 0;                                        //len每循环一次初始化一次
		while ((*p == ' ') || (*p == '\t') || (*p == '\n'))// 跳过所有的空白
			p++;
		if (*p == '\0')                                //判断字符串是否结束
			break;
		while (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z') //找最长的单词长度
		{
			p++;
			len++;
		}
		if (len > maxLen)
			maxLen = len;
		if (len < minLen)
			minLen = len;
		count++;
	}
	p = s.str; //指针复位

	while (*p != '\0')
	{
		len = 0;     //len每次初始化
		while ((*p == ' ') || (*p == '\t') || (*p == '\n'))  // 跳过空白
			p++;
		if (*p == '\0')   //判断字符串是否结束
			break;
		while (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z') //找最长单词长度
		{
			p++;
			len++;
		}
		if (len == maxLen)
		{
			printf("最长单词%d:", i);
			for (int i = len; i > 0; i--)
				putchar(*(p - i));
			printf("\n");    //最长的单词可能不止一个
			i++;
		}
		else if (len == minLen)
		{
			printf("最短单词%d:", j);
			for (int i = len; i > 0; i--)
				putchar(*(p - i));
			printf("\n");                      //最短的单词可能不止一个
			j++;
		}
	}
	printf("\n共%d词\n单词的最大长度为%d\n单词的最小长度为%d\n", count, maxLen, minLen);
}

/*对一个字符串重新排列，字母排在前面，数字排在后面，并不改变原来字母之间以及数字之间的字符顺序。*/
void Arrange(Sstring* s)
{
	int j = 0, k = 0;
	char ch[length] = {0};
	char num[length] = {0};
	char* p = s->str;
	for (int i = 0; i < s->len; i++)
	{
		if (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z')
			ch[j++] = *(p++);
		else
			num[k++] = *(p++);
	}
	strcat_s(ch, num);
	strcpy_s(s->str, ch);
}

/*输入一行字符串，找出其中出现的相同且长度最长的字符串，输出它及其首字符的位置。*/
void LongestDup(Sstring s)
{
	Sstring sub = { 0 };
	int len = s.len / 2, pos = 0, head = 0, tail = 0;
	for (len; len > 0; len--)
	{
		for (pos = 0; pos + len <= s.len; pos++)
		{
			sub = { 0 };
			SubString(&sub, s, pos, len);
			head = StrIndex(s, sub); tail = rStrIndex(s, sub);
			if ((head != tail) && (head != -1) && (tail != -1))
			{
				printf("%s , %d", sub.str, head);
				return;
			}
		}
	}
	if (len == 0)
		printf("没有相同的串哦\n");
}

/*由键盘输入两个位数很长的整数（一行一个数，每个数最长不超过80位），计算并输出这两个数的和。*/
void HugeNumSum()
{
	int i = 0, j = 0, k = 0, len;
	Sstring add1 = { 0 }, add2 = { 0 }, sum = { 0 };
	printf("请输入两个整数：\n");
	while ((add1.str[i++] = getchar()) != '\n'); add1.len = i - 1; i -= 2;
	while ((add2.str[j++] = getchar()) != '\n'); add2.len = j - 1; j -= 2;
	len = add1.len > add2.len ? add1.len : add2.len;
	for (k = len; i >= 0 && j >= 0; i--, j--, k--)
		sum.str[k] = add1.str[i] + add2.str[j] - '0';
	for (; i >= 0; i--, k--)  sum.str[k] = add1.str[i];
	for (; j >= 0; j--, k--)  sum.str[k] = add1.str[j];
	for(k = len; k >= 2; k--)   //每一位的进位
		if (sum.str[k] - '0' >= 10)
		{
			sum.str[k] -= 10;
			sum.str[k-1] += 1;
		}
	if (sum.str[1] - '0' >= 10) //最高位进位
	{
		sum.str[1] -= 10;
		sum.str[0] = '1';
		i = 0;
	}
	else
		i = 1;
	cout << sum.str+i << endl;
}

/*编程实现两个超大整数的相乘*/
void HugeNumMuti()
{
	//将两个大整数分别存入字符串数组num1和num2中
	Sstring num1 = { 0 }, num2 = { 0 };//初始化，如果不初始化也可以的，直接定义;
	int n1[length] = { 0 }, n2[length] = { 0 }, result[2 * length] = { 0 };
	int a = 0, b = 0, c;
	int i, j;
	printf("请输入两个整数：\n");
	while ((num1.str[a++] = getchar()) != '\n'); num1.len = --a;
	while ((num2.str[b++] = getchar()) != '\n'); num2.len = --b;
	c = num1.len + num2.len - 1;//n1*n2得到的结果数组n3的长度
	//将字符串数组转化成整型数组
	for (i = 0; i < a; i++)
	{
		n1[i] = num1.str[i] - '0';
	}
	for (i = 0; i < b; i++)
	{
		n2[i] = num2.str[i] - '0';
	}
	//逐个相乘
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			result[i + j] += n1[i] * n2[j];//这里要用到n3[0]~n3[c-1]的初始值，所以数组n3[2*N]必须初始化，否则容易计算出错
		}
	}
	//对数组n3中的数据至右向左进位
	for (i = c - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] = result[i] % 10;
	}
	//正向输出结果数组n3
	for (i = 0; i < c; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
}

/*输入浮点数，然后将其转换为字符串输出*/
/********************************************************
	fcvt()函数有4个参数：第一个参数是要转换的浮点型值；
	第二个参数是转换结果中十进制小数点右侧的位数；第三
	个参数是指向一个整数的指针，该整数用来返回转换结果
	中十进制小数点的位置；第四个参数也是指向一个整数的
	指针，该整数用来返回转换结果的符号(0对应于正值，1
	对应于负值)。
*********************************************************/
void FloatToStr()
{
	char temp[length] = { '\0' };
	double num;
	int a = 0, i = 0, j = 0, k = 0, count, * flag = &a, * dot = &k;
	cout << "请输入浮点数" << endl;
	scanf_s("%lf", &num);
	cout << "请输入转化后小数点后的位数" << endl;
	scanf_s("%d", &count);
	_fcvt_s(temp,128,num, count, dot, flag);
	if (*flag) printf("-");
	if (!*dot) printf("0");
	for (i = 0; i < *dot; i++)	putchar(temp[i]);
	putchar('.');
	for (j = i; j < i + count; j++)	putchar(temp[j]);
}

int main()
{
	Sstring s = { "abcabc123123",12 }, t = {0};
//	gets_s(s.str, 49);
//	scanf_s("%d", &s.len);
//	Words(s);
//	Arrange(&s);
//	cout << s.str << endl;
//	printf("%d %d", StrIndex(s, t), rStrIndex(s, t));
//	SubString(&t, s, 0, 4);
//	cout << (int)'0';
//	LongestDup(s);
//	HugeNumSum();
//	HugeNumMuti();
	FloatToStr();
	return 0;
}
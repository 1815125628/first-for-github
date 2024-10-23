#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{//prinf可以直接打印字符类型，但不能直接打印数字
//	printf("hello world\n");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int a = 1000;
//int main()
//{
//int a = 100;
//printf("a=%d\n",a);
//	return 0;
//}
//int main()
//{
//	int num1 = 0;//初始化
//	int num2 = 0;
//	scanf( "%d %d", & num1 ,& num2);
//		int sum = num1 + num2;
//		printf("%d\n", sum);
//			return 0;
//}
////引用project中其他文件里的项
//extern int a;
//void test ()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{//将test函数放入主函数中发挥作用或者说在主函数中引用test函数
//	test();
//		printf("a=%d\n",a);
//		return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//int len = strlen("abc");
//	printf("%d\n", strlen("abc"));
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//
//
//	return 0;
//}
//int main()
//{
//	printf(" % d\n", 12345);
//		return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1, &num2);
//	int sum = num1 + num2;
//		printf("%d", sum);
//		return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入太原理工大学\n");
//	printf("要好好学习吗（1/0）？");
//	scanf("%d", &input);
//	if(input==1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入太原理工大学\n");
//	    while (line<2000)
//		{
//			printf("写代码:%d\n",line);
//			line++;
//		}
//	if (line >= 2000)
//	{
//		printf("好offer\n");
//	}
//	else {
//		printf("继续加油\n");
//
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = Add(n1, n2);
//	//打印
//	printf("%d\n", sum);
//	return 0;
//
//}
//int add(int x,int y)
//{
//	return(x + y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = add(n1, n2);
//	int t1 = 100;
//	int t2 = 300;
//	int ret = add(t1, t2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	//数组
//	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
//	//利用下标访问数组其中的某个数字
//	//printf("%d\n", arr[8]);
//	//利用下标打印数组内全部数字
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	return 0;
//}
////求1-1/2+1/3-1/4+......-1/100
//int main()
//{
//	int sign = 1;
//double sum = 1.0, term, deno = 2.0;
//	while(deno<=100)
//	{
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno++;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//c语言对素数的识别
//int main()
//{
//	printf("输入一个大于二的正整数\n");
//
//}
// 比较大小
//int Max(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d",&a,&b);
//	Max(a, b);
//	int r = Max(a, b);
//	printf("%d\n", r);
//	return 0;
//
//}
//int Opsign(int x, int y)
//{
//	x > -10000;
//	x < 10000;
//	if (x>0)
//		y = -1;
//	//普通等号表赋值，两个等号用来判断两个数是否相等
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	return y;
//
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	scanf("%d", &a);
//	int s = Opsign(a, b);
//	printf("%d", s);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 7 / 2;//int类型/得商
//	printf("%d\n", a);
//	int b = 7 % 2;//int类型%得余数,%称为取模，取模操作符的两端只能是整数
//	printf("%d\n", b);
//	//除号两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	float c = 7 / 2.0;
//	printf("%.1f\n", c);
//	printf("%.2f\n", c);//%.n表示保留几位小数
//	return 0;
//}
//移位操作符涉及二进制的运算<<,>>
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//		a = a + 3;
//	a += 3;//这两种表示方法等效
//	//同理
//	a = a - 3;
//	a -= 3;
//	//还有/=,&=这些同理，都称为赋值操作符
//}
//a+b,+称为双目操作符
//单目操作符-只有一个操作数的操作符
//！逻辑反操作，c语言中0表示假，非零表示真，感叹号把真变假把假变真
//int main()
//{
//	int b = 2;
//	if (!b) {
//		printf("hehe\n");
//	}
//
//	int a = 0;
//if (!a) {
//	printf("hehe\n");
//}
//return 0;
//
	//}
//-与+也属于单目操作符
//sizeof是一个单目操作符，一般以sizeof(...)使用，计算后的单位是字节
//++，--也是单目操作符
//后置++先使用后++，前置++先++后使用
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	int c = 10;
//	int d = ++c;
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//		return 0;
//
//}
//--同理
//(类型)也属于单目操作符用于强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	//3.14字面浮点数，编译器默认理解为double类型
//	return 0;
//}
//!=用于测试不相等,==用来测试相等
//int main()
//{//&&逻辑与-并且
////逻辑或-或者，两者都属于逻辑操作符
//	int a = 10;
//	int b = 10;
//	//非0为真，0为假
//	if(a&&b)
//	{
//		printf("hehe\n");
//	}
//	int c = 10;
//	int d = 0;
//	if(c||d)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//条件操作符
//exp1?exp2:exp3
//表达式1为真输出表达式2，表达式3不算
//表达式1为假输出表达式3，表达式2不算
//int main()
//{
//	int a = 10;
//	int b = 20;
//		int c = a > b ? a : b;//比较两个数大小的条件操作符方法
//		printf("%d", c);
//	return 0;
//}
//逗号表达式就是逗号隔开的一串表达式
//特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//int main()
//{	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}
//下标引用操作符[ ]
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//这里的10是数组数，下面的3指的是下标
//	int n = 3;//数组下标从0开始
//	arr[n]=20;//arr和3就是[]的操作数，与a+b，+是操作符a，b是操作数同理
//	//只有在初始化数组时必须用常量，访问时可以用变量，如上把第4个元素改为20
//	printf("%d\n", arr[n]);
//	return 0;
//}
//函数调用操作符
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int sum = Add(2, 3);//()就是函数调用操作符，Add，2，3都是()的操作数
//	return 0;
//}
//关键字-C语言本身内置的，关键字不是自己创建出来的，也不能自己创建
//int main()
//{
	//int a = 10;//所有的局部变量前面默认会有auto，进入主函数自动创建，出作用域自动销毁，自动变量
	//break跳出循环，与continue常与for，while，do while在一起用
	//default，case与switch常一起用,if,else,switch都是分支语句    goto跳转与分支很像
	//char，short,int,long,float,double是类型关键字
	//const用来修饰变量，表示常属性
	//enum-枚举，struct-结构体，union-联合体（共用体），自定义类型
	//extern声明外部符号
	//register寄存器，static静态的
	//return函数返回值
	//signed，unsigned无符号的
	//sizeof计算大小的关键字，typedef类型重命名，void无（函数的返回类型，函数参数）
	//typedef类型重命名
	//volatile
	//return 0;
//}
//变量的命名
//1.有意义，如int age;
//2.名字必须是数字，字母，下划线组成不能有特殊字符，同时不能以数字开头.
//如int 2b;//err
//int _2b;//ok
//3.变量命名不能是关键字
//typedef的用法
//typedef unsigned int uint;
// typedef struct Node
//{
//	int data;
//	struct Node* next;//定义链表节点
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	uint mum2 = 1;//使用typedef使得unsigned int等价于uint
//	struct Node n;
//	Node n2;//typedef起到简化作用
//	return 0;
//}
//static用法
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 实验1
//华氏温度转化为摄氏温度 
//int main()
//{
//	double f, c;
//	scanf("%lf", &f);
//	c = 5.0 / 9 * (f - 32);
//	printf("c=%.1f", c);
//	return 0;
//}
// 三角形面积
//#include <math.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	double area, s;
//	s = (a + b + c) / 2.0;
//	int m = s * (s - a) * (s - b) * (s - c);
//	area = sqrt(m);
//	printf("area=%.2f\n", area);
//	return 0;
//}
// a的个位是c的千位，十位是十位，b的个位是c的百位，十位是c的个位
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f, g;
//	scanf("%d,%d", &a, &b);
//	d = a % 10;
//	e = a / 10 % 10;
//	f = b % 10;
//	g = b / 10 % 10;
//	c = d * 1000 + f * 100 + e * 10 + g;
//	printf("c=%d\n", c);
//	return 0;
//}
//C语言中的简单数据类型有整型，实型，字符型
//实型常量又称实数或浮点数。在C语言中可以用单精度型和双精度型两种形式表示实型常量，分别用类型名float和double进行定义
//C语言、C++、Shell、Python、Java语言及其他相近的语言使用字首“0x”，例如“0x5A3”。开头的“0”令解析器更易辨认数，而“x”则代表十六进制（就如“O”代表八进制）
//在“0x”中的“x”可以大写或小写。对于字符量C语言中则以x+两位十六进制数的方式表示，如xFF。
//是一种基数为16的计数系统，是一种逢16进1的进位制。通常用数字0、1、2、3、4、5、6、7、8、9和字母A、B、C、D、E、F（a、b、c、d、e、f）表示，其中:A~F表示10~15
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{//prinf����ֱ�Ӵ�ӡ�ַ����ͣ�������ֱ�Ӵ�ӡ����
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
//	int num1 = 0;//��ʼ��
//	int num2 = 0;
//	scanf( "%d %d", & num1 ,& num2);
//		int sum = num1 + num2;
//		printf("%d\n", sum);
//			return 0;
//}
////����project�������ļ������
//extern int a;
//void test ()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{//��test���������������з������û���˵��������������test����
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
//	printf("����̫ԭ����ѧ\n");
//	printf("Ҫ�ú�ѧϰ��1/0����");
//	scanf("%d", &input);
//	if(input==1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("����̫ԭ����ѧ\n");
//	    while (line<2000)
//		{
//			printf("д����:%d\n",line);
//			line++;
//		}
//	if (line >= 2000)
//	{
//		printf("��offer\n");
//	}
//	else {
//		printf("��������\n");
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
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	int sum = Add(n1, n2);
//	//��ӡ
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
//	//����
//	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
//	//�����±�����������е�ĳ������
//	//printf("%d\n", arr[8]);
//	//�����±��ӡ������ȫ������
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	}
//	return 0;
//}
////��1-1/2+1/3-1/4+......-1/100
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
//c���Զ�������ʶ��
//int main()
//{
//	printf("����һ�����ڶ���������\n");
//
//}
// �Ƚϴ�С
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
//	//��ͨ�Ⱥű�ֵ�������Ⱥ������ж��������Ƿ����
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
//	int a = 7 / 2;//int����/����
//	printf("%d\n", a);
//	int b = 7 % 2;//int����%������,%��Ϊȡģ��ȡģ������������ֻ��������
//	printf("%d\n", b);
//	//�������˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
//	float c = 7 / 2.0;
//	printf("%.1f\n", c);
//	printf("%.2f\n", c);//%.n��ʾ������λС��
//	return 0;
//}
//��λ�������漰�����Ƶ�����<<,>>
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//		a = a + 3;
//	a += 3;//�����ֱ�ʾ������Ч
//	//ͬ��
//	a = a - 3;
//	a -= 3;
//	//����/=,&=��Щͬ������Ϊ��ֵ������
//}
//a+b,+��Ϊ˫Ŀ������
//��Ŀ������-ֻ��һ���������Ĳ�����
//���߼���������c������0��ʾ�٣������ʾ�棬��̾�Ű����ٰѼٱ���
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
//-��+Ҳ���ڵ�Ŀ������
//sizeof��һ����Ŀ��������һ����sizeof(...)ʹ�ã������ĵ�λ���ֽ�
//++��--Ҳ�ǵ�Ŀ������
//����++��ʹ�ú�++��ǰ��++��++��ʹ��
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
//--ͬ��
//(����)Ҳ���ڵ�Ŀ����������ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//	//3.14���渡������������Ĭ�����Ϊdouble����
//	return 0;
//}
//!=���ڲ��Բ����,==�����������
//int main()
//{//&&�߼���-����
////�߼���-���ߣ����߶������߼�������
//	int a = 10;
//	int b = 10;
//	//��0Ϊ�棬0Ϊ��
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
//����������
//exp1?exp2:exp3
//���ʽ1Ϊ��������ʽ2�����ʽ3����
//���ʽ1Ϊ��������ʽ3�����ʽ2����
//int main()
//{
//	int a = 10;
//	int b = 20;
//		int c = a > b ? a : b;//�Ƚ���������С����������������
//		printf("%d", c);
//	return 0;
//}
//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//�ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//int main()
//{	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}
//�±����ò�����[ ]
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�����10���������������3ָ�����±�
//	int n = 3;//�����±��0��ʼ
//	arr[n]=20;//arr��3����[]�Ĳ���������a+b��+�ǲ�����a��b�ǲ�����ͬ��
//	//ֻ���ڳ�ʼ������ʱ�����ó���������ʱ�����ñ��������ϰѵ�4��Ԫ�ظ�Ϊ20
//	printf("%d\n", arr[n]);
//	return 0;
//}
//�������ò�����
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int sum = Add(2, 3);//()���Ǻ������ò�������Add��2��3����()�Ĳ�����
//	return 0;
//}
//�ؼ���-C���Ա������õģ��ؼ��ֲ����Լ����������ģ�Ҳ�����Լ�����
//int main()
//{
	//int a = 10;//���еľֲ�����ǰ��Ĭ�ϻ���auto�������������Զ����������������Զ����٣��Զ�����
	//break����ѭ������continue����for��while��do while��һ����
	//default��case��switch��һ����,if,else,switch���Ƿ�֧���    goto��ת���֧����
	//char��short,int,long,float,double�����͹ؼ���
	//const�������α�������ʾ������
	//enum-ö�٣�struct-�ṹ�壬union-�����壨�����壩���Զ�������
	//extern�����ⲿ����
	//register�Ĵ�����static��̬��
	//return��������ֵ
	//signed��unsigned�޷��ŵ�
	//sizeof�����С�Ĺؼ��֣�typedef������������void�ޣ������ķ������ͣ�����������
	//typedef����������
	//volatile
	//return 0;
//}
//����������
//1.�����壬��int age;
//2.���ֱ��������֣���ĸ���»�����ɲ����������ַ���ͬʱ���������ֿ�ͷ.
//��int 2b;//err
//int _2b;//ok
//3.�������������ǹؼ���
//typedef���÷�
//typedef unsigned int uint;
// typedef struct Node
//{
//	int data;
//	struct Node* next;//��������ڵ�
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	uint mum2 = 1;//ʹ��typedefʹ��unsigned int�ȼ���uint
//	struct Node n;
//	Node n2;//typedef�𵽼�����
//	return 0;
//}
//static�÷�
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
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
// ʵ��1
//�����¶�ת��Ϊ�����¶� 
//int main()
//{
//	double f, c;
//	scanf("%lf", &f);
//	c = 5.0 / 9 * (f - 32);
//	printf("c=%.1f", c);
//	return 0;
//}
// ���������
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
// a�ĸ�λ��c��ǧλ��ʮλ��ʮλ��b�ĸ�λ��c�İ�λ��ʮλ��c�ĸ�λ
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
//C�����еļ��������������ͣ�ʵ�ͣ��ַ���
//ʵ�ͳ����ֳ�ʵ���򸡵�������C�����п����õ������ͺ�˫������������ʽ��ʾʵ�ͳ������ֱ���������float��double���ж���
//C���ԡ�C++��Shell��Python��Java���Լ��������������ʹ�����ס�0x�������硰0x5A3������ͷ�ġ�0������������ױ�����������x�������ʮ�����ƣ����硰O������˽��ƣ�
//�ڡ�0x���еġ�x�����Դ�д��Сд�������ַ���C����������x+��λʮ���������ķ�ʽ��ʾ����xFF��
//��һ�ֻ���Ϊ16�ļ���ϵͳ����һ�ַ�16��1�Ľ�λ�ơ�ͨ��������0��1��2��3��4��5��6��7��8��9����ĸA��B��C��D��E��F��a��b��c��d��e��f����ʾ������:A~F��ʾ10~15
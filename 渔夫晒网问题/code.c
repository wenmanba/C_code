#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap(int a) /*�Զ��庯��leap()����ָ�����������Ƿ�Ϊ����*/
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)    /* �����ж����� */
		return 1;    /*�����귵��1*/
	else
		return 0;    /*�������귵��O*/
}
int number(int year, int month, int day)    /*�Զ��庯�� number() �����������ھ�2011��1��1�չ��ж�����*/
{
	int sum = 0, i, j, k;
	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };    /*����a���ƽ��ÿ�µ�����*/
	int b[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };    /*����b�������ÿ�µ�����*/
	if (leap(year) == 1)    /*�ж��Ƿ�Ϊ����*/
	for (i = 0; i<month - 1; i++)
		sum += b[i];    /*�����꣬�ۼ�����bǰm-1���·ݵ�����*/
	else
	for (i = 0; i<month - 1; i++)
		sum += a[i];    /*�������꣬�ۼ�����aǰm-1���·ݵ�����*/
	for (j = 2011; j<year; j++)
	if (leap(j) == i)
		sum += 366;    /*2011�굽��������������ļ�366*/
	else
		sum += 365;    /*2011�굽�������ݲ�������ļ�365*/
	sum += day;    /*��ǰ���ۼӵĽ���������ڣ����������*/
	return sum;    /*���ؼ��������*/
}
int main()
{
	int year, month, day, n;
	printf("������������\n");
	scanf("%d%d%d", &year, &month, &day);    /*����������*/
	n = number(year, month, day);    /*���ú��� number()*/
	if ((n % 5)<4 && (n % 5)>0)    /*������1��2��3ʱ˵���ڴ��棬������ɹ��*/
		printf("%d��%d��%d ����\n", year, month, day);
	else
		printf("%d��%d��%d ɹ��\n", year, month, day);
	return 0;
}
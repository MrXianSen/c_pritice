#ifndef _HEAD_H_
#define _HEAD_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/*-------------------4--------------------*/
/* �ж����� */
int is_leap_year(int);
/* ��һ������ƽ��������ֵ */
float square(float);
/* ���n���ڵ����� */
void printPrimes(int);
/* ����n���ַ� */
void copy_n(char dst[], char src[], int n);
/* ��һ���ַ����н�ȡһ���Ӵ� */
void substr(char dst[], char src[], int start, int len);
/* ��һ���ַ�����ɾ���ո� */
void deblank(char string[]);

/*-------------------5--------------------*/
/* ����һ�����Ķ�������1�ĸ��� */
int countt_ont_bits(int n);
/* ��һ�����Ķ����Ʒ�ת��� */
unsigned int reverse_bits(unsigned int n);

/*-------------------6--------------------*/
/* ��һ���ַ���������һ���������ַ��� */
char *find_char(char const *source, char const *chars);
/* ɾ����str�г��ֵ�substr */
int del_substr(char *str, char const *substr);
#endif


#ifndef _HEAD_H_
#define _HEAD_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/*-------------------4--------------------*/
/* 判断闰年 */
int is_leap_year(int);
/* 求一个数的平方根近似值 */
float square(float);
/* 输出n以内的质数 */
void printPrimes(int);
/* 复制n个字符 */
void copy_n(char dst[], char src[], int n);
/* 从一个字符串中截取一个子串 */
void substr(char dst[], char src[], int start, int len);
/* 从一个字符串中删除空格 */
void deblank(char string[]);

/*-------------------5--------------------*/
/* 计算一个数的二进制中1的个数 */
int countt_ont_bits(int n);
/* 将一个数的二进制反转输出 */
unsigned int reverse_bits(unsigned int n);

/*-------------------6--------------------*/
/* 在一个字符创中搜索一个给定的字符集 */
char *find_char(char const *source, char const *chars);
/* 删除在str中出现的substr */
int del_substr(char *str, char const *substr);
#endif


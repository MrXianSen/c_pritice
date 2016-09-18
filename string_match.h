
#ifndef _STRING_MATCH_H_
#define _STRING_MATCH_H_

/* 字符串匹配算法 */

// 朴素算法实现
int string_match_simple(char *, int, char const *, int);
// Rabin-Karp算法实现
int string_match_rk(char *, int, char const *, int);
// 有限自动机算法 finite-state machine算法实现
int string_match_fsm(char *, char const *);
// KMP算法实现
int string_match_kmp(char *, char const *);

#endif

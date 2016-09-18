
#ifndef _STRING_MATCH_H_
#define _STRING_MATCH_H_

/* �ַ���ƥ���㷨 */

// �����㷨ʵ��
int string_match_simple(char *, int, char const *, int);
// Rabin-Karp�㷨ʵ��
int string_match_rk(char *, int, char const *, int);
// �����Զ����㷨 finite-state machine�㷨ʵ��
int string_match_fsm(char *, char const *);
// KMP�㷨ʵ��
int string_match_kmp(char *, char const *);

#endif

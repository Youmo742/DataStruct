#include <iostream>
#include <cstdio>

using namespace std;
void GetNext(char* p, int next[])
{
	int pLen = strlen(p);
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]表示前缀，p[j]表示后缀  
		if (k == -1 || p[j] == p[k])
		{
			++k;
			++j;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
}
int KmpSearch(char* s, char* p)
{
	int i = 0;
	int j = 0;
	int sLen = strlen(s);
	int pLen = strlen(p);
	int next[255];
	GetNext(p, next);
	while (i < sLen && j < pLen)
	{  
		if (j == -1 || s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{       
			j = next[j];
		}
	}
	if (j == pLen)
		return i - j;
	else
		return -1;
}
int main()
{
	char *s = "ababaacaba";
	int next[255];
	//GetNext(s, next);
	char *p = "cab";
	cout << KmpSearch(s, p);
	system("pause");
	return 0;
}
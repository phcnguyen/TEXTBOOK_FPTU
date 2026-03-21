#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* lTrim(char s[])
{
	int i =0;
	while (s[i] == ' ') {
		i++;
	}
	
	if (s[i] != ' ')
	{
		strcpy(&s[0], &s[i]);
		return s;
	}
}

char* rTrim(char s[])
{
	int i = strlen(s) - 1;
	while (s[i] == ' ')
	{
		i--;
	}
	
	s[i+1] = '\0';
	return s;
}

char* mTrim(char s[])
{
	lTrim(s);
	rTrim(s);
	char *ptr=strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	
	return s;
}

char* nameString(char s[])
{
	mTrim(s);
	strlwr(s);
	int i;
	for (i = 0; i < strlen(s)-1; i++)
	{
		if(i == 0 || (i > 0 && s[i-1] == ' '))
		{
			s[i] = toupper(s[i]);
		}
	}
}

int countString(char s[])
{
	int i, count = 0;
	for (i= 0; i< strlen(s)-1; i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}
	
	if (count > 0)
		count++;
	
	return count;
}

int isCountDigit(char s[])
{
	int i, count = 0;
	for (i= 0; i< strlen(s)-1; i++)
	{
		if (isdigit(s[i]) && !isdigit(s[i-1]))
		{
			count++;
		}
	}
	
	return count;
}

int countSubString(char s1[], char s2[])
{
	int count;
	char* ptr = strstr(s1, s2);
	while (ptr != NULL)
	{
		count++;
		ptr++;
		ptr = strstr(ptr, s2);
	}
	
	return count;
}


int main()
{
	char a[100] = {"phand2939 phuc 0nguyen"};
	
	printf("%d\n", countString(a));
	printf("%d\n", isCountDigit(a));
}
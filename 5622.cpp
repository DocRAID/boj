#include <stdio.h>
int main()
{
	int result=0, times[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char phone[16];
	scanf(" %s", phone);
	for (int i = 0; phone[i]!='\0'; i++)
		result += times[phone[i] - 'A'];
	printf("%d", result);
}
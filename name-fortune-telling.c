#include <stdio.h>
#include <string.h>
typedef unsigned int uint;
#ifndef __cplusplus
#define nullptr NULL
#endif
int main(void) {
	char str[32];

	puts("あなたの名前を半角英数字で入力してください---");
	fgets(str, 32, stdin);
	strchr(str, '\n')[0] = '\0';

	printf("あなたの名前は「%s」ですね\n", str);
	uint point = strlen(str);
	printf("%d文字の入力を確認\n", point);
	if (0 == point % 7) point *= 1.5;
	if (0 == point % 6) point *= 0.75;

	for (const char* it = str; nullptr != (it = strpbrk(it, "lucky")); ++it) {
		switch (*it) {
		case 'l':
		case 'c':
			++point;
		default:
			++point;
			break;
		}
	}
	for (const char* it = str; nullptr != (it = strpbrk(it, "happy")); ++it) {
		switch (*it) {
		case 'h':
		case 'a':
		case 'p':
		case 'y':

			++point;

			break;
		}
	}
	for (const char* it = str; nullptr != (it = strpbrk(it, "fortune")); ++it) {
		switch (*it) {
		case 'f':
		case 'o':
		case 'r':
		case 't':
		case 'u':
		case 'n':
		case 'e':
			++point;
		default:
			++point;
			break;
		}
	}
	printf("あなたは%dポイントです。", point);
	if (point >= 20)
	{
		printf("おめでとうございます。あなたは幸運児です");
	}
	if (point <= 4)
	{
		printf("幸運だけが全てではありません。頑張って努力しよう！！");
	}

	
	
	return 0;
}
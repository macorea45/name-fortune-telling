#include <stdio.h>
#include <string.h>
typedef unsigned int uint;
#ifndef __cplusplus
#define nullptr NULL
#endif
int main(void) {
	char str[32];

	puts("���Ȃ��̖��O�𔼊p�p�����œ��͂��Ă�������---");
	fgets(str, 32, stdin);
	strchr(str, '\n')[0] = '\0';

	printf("���Ȃ��̖��O�́u%s�v�ł���\n", str);
	uint point = strlen(str);
	printf("%d�����̓��͂��m�F\n", point);
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
	printf("���Ȃ���%d�|�C���g�ł��B", point);
	if (point >= 20)
	{
		printf("���߂łƂ��������܂��B���Ȃ��͍K�^���ł�");
	}
	if (point <= 4)
	{
		printf("�K�^�������S�Ăł͂���܂���B�撣���ēw�͂��悤�I�I");
	}

	
	
	return 0;
}
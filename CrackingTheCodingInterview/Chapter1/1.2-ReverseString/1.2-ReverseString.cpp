#include <iostream>

void reverse(char* str) {
	if (str == NULL || str[0] == '\0' || str[1] == '\0')
		return;

	int len = strlen(str);
	int head = 0, tail = len - 1;
	while (head < tail) {
		std::swap(str[head], str[tail]);
		head++;
		tail--;
	}
}

using namespace std;
int main()
{
	char str1[32] = "";
	char str2[32] = "abcd";
	char str3[32] = "acd";
	reverse(str1);
	reverse(str2);
	reverse(str3);
	cout << (strcmp(str1, "") == 0) << endl;
	cout << (strcmp(str2, "dcba") == 0) << endl;
	cout << (strcmp(str3, "dca") == 0) << endl;
}
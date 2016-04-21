#include <iostream>

// Time = O(n), Space = O(n)
void ReplaceSpace(std::string& str, std::size_t trueLen) {
	std::string replaced(str.length(), ' ');
	std::size_t pos = 0;
	std::size_t end = trueLen;
	for (std::size_t i = 0; i < end; i++) {
		if (str[i] == ' ') {
			replaced[pos++] = '%';
			replaced[pos++] = '2';
			replaced[pos++] = '0';
		}
		else {
			replaced[pos++] = str[i];
		}
	}
	str = replaced;
}

// or sort and check
using namespace std;
int main()
{
	std::string str = "Mr John Smith    ";
	ReplaceSpace(str, 13);
	cout << (str == "Mr%20John%20Smith")  << endl;

	return 0;
}
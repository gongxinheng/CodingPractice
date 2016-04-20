#include <iostream>
#include <vector>
bool CheckPermtation(const std::string& str1, const std::string& str2) {
	if (str1.length() != str2.length())
		return false;
	
	std::vector<int> counter1(128), counter2(128);
	for (int i = 0; i < str1.length(); i++) {
		counter1[str1[i]]++;
		counter2[str2[i]]++;
	}
	return counter1 == counter2;
}

// or sort and check
//bool CheckPermtation(const std::string& str1, const std::string& str2)
using namespace std;
int main()
{
	cout << (CheckPermtation("dcba", "acbd") == true) << endl;
	cout << (CheckPermtation("c", "dcba") == false) << endl;
	cout << (CheckPermtation("12356", "56321") == true) << endl;

	return 0;
}
#include <string>
#include <iostream>

/*Array method*/
using namespace std;
bool AllUnique(const string& str) {
	if (str.length() == 0) {
		return true;
	}
	int size = pow(2.0, sizeof(char) * 8);
	bool* holds = new bool[size];
	for (int i = 0; i < size; i++) {
		holds[i] = false;
	}
	for (int i = 0; i < str.length(); i++) {
		int place = str[i];
		if (holds[place]) {
			delete[] holds;
			return false;
		}
		else {
			holds[place] = true;
		}
	}
	return true;
}

int main()
{
	cout << (AllUnique("") == true) << endl;
	cout << (AllUnique("abc") == true) << endl;
	cout << (AllUnique("abcb") == false) << endl;
}
#include <iostream>
using namespace std;
class MyString {
	char* str;
	int length;
public:
	MyString() {
		length = 80;
		str = new char[length];
	}
	MyString(int size) {
		str = new char[size];
	}
	MyString(char* st) {
		str = new char[strlen(st)+1];
		strcpy_s(str, strlen(st) + 1, st);
	}
	~MyString() {
		delete[]str;
		cout << "destructor" << endl;
	}
	void Input() {
		cin.getline(str, length);
	}
	void Print() {
		cout << str << endl;
	}
	void MyStrcpy(MyString& obj) {
		this->str = obj.str;
		this->length = obj.length;
	}
	int  MyChr(char c) {
		for (int i = 0; i < length; i++)
		{
			if (str[i] = c) {
				return i;
			}
			else {
				return -1;
			}
		}
	}
	int MyStrLen() {
		return length;
	}
	void MyStrCat(MyString& b) {
		this->str = new char[strlen(b.str) + 1];
		strcpy_s(this->str, strlen(b.str) + 1, b.str);

	}
	void MyDelChr(char c) {
		for (int i = 0; i < length; i++)
		{
			if (str[i] = c) {
				for (int j = i; j < length; j++) {
					str[j] = str[j + 1];
				}
			}
			else {
				cout << "no symbol" << endl;
			}
		}
	}
	int MyStrCmp(MyString& b) {
		if (this->length > b.length) {
			return 1;
		}
		else if (this->length < b.length) {
			return -1;
		}
		else {
			return 0;
		}
	}
};

int main() {
	MyString obj;
	obj.Input();
	obj.Print();
}
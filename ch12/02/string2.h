// string1.h � ������������ � ����������� ���������� ���������� ������ 
#ifndef STRNG1_H_ 
#define STRNG1_H_ 
#include <iostream>

using std::ostream;
using std::istream;

//-------------------------------------------------------------------------------------------------
class String
{
private:
	char* str;						// ��������� �� ������ 
	int len;						// ����� ������ 
	static int num_strings;			// ���������� �������� 
	static const int CINLIM = 80;	// ������ ����� ��� �� 
public:
	// ������������ � ������ ������ 
	String(const char* s);			// ����������� 
	String();						// ����������� �� ��������� 
	String(const String&);			// ����������� ����������� 
	~String();						// ���������� 
	int length() const { return len; }

	// ������ ������������� �������� 
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator [] (int i);
	const char& operator [] (int i) const;

	// ������������� ������� ������������� �������� 
	friend bool operator<(const String& st, const String& st2);
	friend bool operator>(const String& stl, const String& st2);
	friend bool operator==(const String& st, const String& st2);
	friend String operator +(const String& st, const String& st2);
	String stringlow();
	String stringup();
	int has(char ch);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	// ����������� ������� 
	static int HowMany();
};
//-------------------------------------------------------------------------------------------------
#endif // STRNG1_H_
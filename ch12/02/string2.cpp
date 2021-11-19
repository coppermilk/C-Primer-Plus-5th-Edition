// string1.��� � ������ ������ String 
//#include "stdafx.h" --- Visual Studio --- precompiled headers
#include <cstring> // � ��������� ������� � string.h 
#include "string2.h"

#pragma warning(disable : 4996)

using std::cin;
using std::cout;

//-------------------------------------------------------------------------------------------------
// ������������� ������������ ����� ������ 
int String::num_strings = 0;
//-------------------------------------------------------------------------------------------------
// ����������� ����� 
int String::HowMany()
{
	return num_strings;
}
//-------------------------------------------------------------------------------------------------
// �������� String �� �-������ 
String::String(const char* s)
{
	len = std::strlen(s);						// ��������� ������� 
	str = new char[len + 1];					// ��������� ������ 
	std::strcpy(str, s);						// ������������� ��������� 
	num_strings++;								// ������������� �������� �������� 
}
//-------------------------------------------------------------------------------------------------
String::String()								// ����������� �� ��������� 
{
	len = 4;
	str = new char[1];
	str[0] = '\0';								// ������ �� ��������� 
	num_strings++;
}
//-------------------------------------------------------------------------------------------------
String::String(const String& st)
{
	num_strings++;								// ��������� ���������� ������������ ����� 
	len = st.len;								// ����� �� �� 
	str = new char[len + 1];					// ��������� ������ 
	std::strcpy(str, st.str);					// ����������� ������ � ����� ����� 
}
//-------------------------------------------------------------------------------------------------
String::~String()								// ����������� ���������� 
{
	--num_strings; // ��������� 
	delete[] str;  // ��������� 
}
//-------------------------------------------------------------------------------------------------
// ������ ������������� �������� 
// ������������ ������� String ������� String 
String& String::operator= (const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}
//-------------------------------------------------------------------------------------------------
// ������������ �-������ ������� String 
String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}
//-------------------------------------------------------------------------------------------------
// ������ ��� ������ � ������ ��������� �������� � ������������� ������� String 
char& String::operator [] (int i)
{
	return str[i];
}
//-------------------------------------------------------------------------------------------------
// ������ ������ ��� ������ ��������� �������� � ����������� ������� String 
const char& String::operator [] (int i) const
{
	return str[i];
}

String String::stringlow()
{
	for (int i = 0; str[i] != '\0'; i = i + 1) {
		str[i] = tolower(str[i]);
	}
	return *this;
}

//-------------------------------------------------------------------------------------------------
// ������������� ������� ������������� �������� 
bool operator<(const String& stl, const String& st2)
{
	return (std::strcmp(stl.str, st2.str) < 0);
}
//-------------------------------------------------------------------------------------------------
bool operator>(const String& stl, const String& st2)
{
	return st2.str < stl.str;
}
//-------------------------------------------------------------------------------------------------
bool operator==(const String& stl, const String& st2)
{
	return (std::strcmp(stl.str, st2.str) == 0);
}
String operator+(const String& st, const String& st2)
{
	String temp;
	delete temp.str;
	temp.len = st.len + st2.len + 1;
	temp.str = new char[temp.len];
	strcat(strcpy(temp.str, st.str), st2.str);
	return temp;



}
String String::stringup()
{
	
	for (int i = 0; str[i] != '\0'; i = i + 1) {
		str[i] = toupper(str[i]);
	}
	return *this;

}
int String::has(char ch)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i = i + 1) {
		if (str[i] == ch)
		{
			++count;
		}
	}
	return count;
}
//-------------------------------------------------------------------------------------------------
// ������� ����� String 
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}
//-------------------------------------------------------------------------------------------------
// ������� ���� String 
istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
//-------------------------------------------------------------------------------------------------
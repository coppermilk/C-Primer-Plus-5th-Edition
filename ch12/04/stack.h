//stack.h -- ����������� ������ ��� ������������ ���� ������ � ����� 
#ifndef STACK_H_ 
#define STACK_H_ 

typedef unsigned long Item;
//-------------------------------------------------------------------------------------------------
class Stack
{
private:
	enum { MAX = 10 }; // ���������, ����������� ��� ������ 
	Item items[MAX]; // ������ �������� ����� 
	int top; // ������ ������� ����� 
public:
	Stack();
	Stack(const Stack& s);
	bool isempty() const;
	bool isfull() const;
	// push () ���������� false, ���� ���� �����, � true - � ��������� ������ 
	bool push(const Item& item); // ��������� ������� � ���� 							  
	// pop () ���������� false, ���� ���� ����, � true - � ��������� ������ 
	bool pop(Item& item); // ����������� ������� � ������� ����� 
	Stack & operator = (const Stack& st);
	friend std::ostream& operator << (std::ostream& os, const Stack& s);
};
//-------------------------------------------------------------------------------------------------
#endif //STACK_H_
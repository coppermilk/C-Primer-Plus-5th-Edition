// dma.h � ������������ � ������������ ��������� ������ 
#ifndef DMA_H_     
#define DMA_H_     
#include <iostream> 
class ABC
{
private:
	char* label;
	int rating;
public:
	char* getLabel() { return label; }
	int getRating() { return rating; }
public:
	ABC(const char* l = "null", int r = 0);
	ABC(const ABC& rs);
	virtual ~ABC();
	virtual void view();
	ABC& operator=(const ABC& rs);
	friend std::ostream& operator<<(std::ostream& os, ABC& rs);

};


//-------------------------------------------------------------------------------------------------
// ������� �����, ������������ ������������ ��������� ������ 
class baseDMA :public ABC
{
private:
	//char* label;
	//int rating;
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	void view();
	//virtual ~baseDMA();
	//baseDMA& operator=(const baseDMA& rs);
	//friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};
//-------------------------------------------------------------------------------------------------
// ����������� ����� ��� ������������� ��������� ������ 
// ���������� �� ����� 
// ������������ ������� ����������� ����������� 
// ������������ ������� �������� ������������ 
class lacksDMA : public ABC
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* � = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const ABC& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
	void view();
};
//-------------------------------------------------------------------------------------------------
// ����������� ����� � ������������ ���������� ������ 
class hasDMA : public ABC
{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const ABC& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
	void view();
};
//-------------------------------------------------------------------------------------------------
#endif //DMA_H_

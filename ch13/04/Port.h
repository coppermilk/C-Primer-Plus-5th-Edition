#pragma once
#include <ostream>
class Port
{
private:
	char* brand;
	char style[20]; 
	int bottles;
public:
	
	Port(const char* brand = nullptr, 
		const char* style = nullptr, int bottles = 0);
	Port(const Port& p);
	virtual ~Port() { delete[] brand; }

	Port& operator = (const Port& p);
	Port& operator +=(int b);
	Port& operator -=(int b);
	
	int BottleCount() const { return bottles; }

	virtual void Show() const;
	friend std::ostream& operator << (std::ostream& os, const Port& p);

};

class VintagePort : public Port {
private:
	char* nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char* brand, int bottle, const char* nickname, int year);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }
	VintagePort& operator = (const VintagePort& vp);
	void Show() const ;
	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);

};


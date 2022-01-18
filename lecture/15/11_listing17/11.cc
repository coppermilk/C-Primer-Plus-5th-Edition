#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

class Grand {
private:
	int hold;
public:
	Grand(int h = 0) : hold(h) {}
	virtual void Speak() const { cout << "I is a big class!\n"; }
	virtual int Value() const { return hold; }
};

class Superb : public Grand {
public:
	Superb(int h = 0) : Grand(h) {}
	void Speak() const override { cout << "I is a super!\n"; }
	virtual void Say() const { cout << "I holded super value: " << Value() << "\n"; }
};

class Magnificent : public Superb {
private:
	char ch;
public:
	Magnificent(int h  = 0, char c  = 'A') : Superb(h), ch(c) {}
	void Speak() const override { cout << "I is a wonderfull class!\n"; }
	virtual void Say() const { cout << "Y holded a char " << ch << "and integer " << Value() << "\n"; }

};

Grand* GetOne();

int main()
{
	std::srand(std::time(0));
	Grand* pg;
	Superb* ps;
	for (int i = 0; i < 5; i++) {
		pg = GetOne();
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg)) {
			ps->Say();
		}
	}
	return 0;
}

Grand* GetOne() {

	Grand* p = nullptr;

	switch (std::rand() %3)
	{
	case 0: p = new Grand(std::rand() % 100);
		break;
	case 1: p = new Grand(std::rand() % 100);
		break;
	case 2: p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
	default:
		break;
	}
	return p;
}

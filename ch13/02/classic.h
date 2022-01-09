#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd
{
private:
	char* performers;
	char* label;
	int selections;
	double playtime;
public:
	Cd(const char* per, const char* lab, int sel, double play);
	Cd(const Cd& d);
	Cd();
	~Cd();
	virtual void Report() const;
	Cd& operator = (const Cd& d);
};

class Classic : public Cd {
public: Classic();
      Classic(const Classic& c);
      Classic(const char* per,
	      const char* lab,
	      const char* l_name, int sel, double play);
      ~Classic();
      Classic& operator = (const Classic& c);
      virtual void Report() const;
      char *label_name;
};

#endif // !CLASSIC_H_

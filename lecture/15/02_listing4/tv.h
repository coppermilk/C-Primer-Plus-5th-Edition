#ifndef TV_H_
#define TV_H_
class Tv;
class Remote {
public:
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, VCR };
private:
	int mode;
public:
	Remote(int m = TV) : mode(m) {}
	bool volup(Tv& t);
	bool voldown(Tv& t);
	void onoff(Tv& t);	
	void chanup(Tv& t);
	void chandown(Tv& t);
	void set_chan(Tv& t, int c);
	void set_mode(Tv& t);
	void set_input(Tv& t);
};
class Tv {
public:
	friend void Remote::set_chan(Tv & t, int c);
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, VCR };
	Tv(int s = Off, int mc = 100)
		: state(s), volume(5), maxchannel(mc),
		channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? VCR : TV; }
	void settings() const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;

};

inline bool Remote::volup(Tv& t) { return t.volup(); }
inline bool Remote::voldown(Tv& t) { return t.voldown(); }
inline void Remote::onoff(Tv& t) { return t.onoff(); }
inline void Remote::chanup(Tv& t) { return t.chanup(); }
inline void Remote::chandown(Tv& t) { return t.chandown(); }
inline void Remote::set_mode(Tv& t) { return t.set_mode(); }
inline void Remote::set_input(Tv& t) { return t.set_input(); }
inline void Remote::set_chan(Tv& t, int c) { t.channel = c; }
#endif // !TV_H_

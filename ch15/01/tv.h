#ifndef TV_H_
#define TV_H_

#include <iostream>

class Remote;

class Tv {
public:
	friend class Remote;
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, VCR };
	enum {NORMAL, INTERACTIVE};
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
	void toggleRemoteMode(Remote & r) const;
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;

};

class Remote {
private:
	int mode;
	int remote_control_mode;
	
public:
	friend class Tv;
	enum { NORMAL, INTERACTIVE };
	Remote(int m = Tv::TV, int remote_cntrl_mode = NORMAL) : mode(m), remote_control_mode(remote_cntrl_mode) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	
};
#endif // !TV_H_

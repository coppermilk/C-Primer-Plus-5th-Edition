#include "tv.h"

bool Tv::volup() {
	if (volume < MaxVal) {
		volume++;
		return true;
	}
	else {
		return false;
	}
}

bool Tv::voldown() {
	if (volume > MinVal) {
		volume--;
		return true;
	}
	else {
		return false;
	}
}

void Tv::chanup() {
	if (channel < maxchannel) {
		channel++;
	}
	else {
		channel = 1;
	}
}

void Tv::chandown() {
	if (channel > 1) {
		channel--;
	}
	else {
		channel = maxchannel;
	}
}

void Tv::settings() const {
	using std::cout;
	using std::endl;
	cout << "TV " << ((state == Off) ? "Off" : "On") << endl;
	if (state == On) {
		cout << "Volume: " << volume << endl;
		cout << "Channel: " << channel << endl;
		cout << "Mode: " << ((mode == Antenna) ? "antena" : "cable") << endl;
		cout << "Input: " << ((input == TV) ? "Tv" : "CDS") << endl;
	}
}

void Tv::toggleRemoteMode(Remote& r) const

{

	r.remote_control_mode = (r.remote_control_mode = NORMAL) ? INTERACTIVE : NORMAL;
	std::cout << "Remote control mode: " << ((r.remote_control_mode = NORMAL) ? "INTERACTIVE" : "NORMAL") << std::endl;
}



#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend {
private:
	T item;
	static int ct;
public:
	HasFriend(const T& i) : item(i) { ct++; }
	~HasFriend() { ct--; }
	friend void counts();
	friend void reports(HasFriend<T>&); // template class
};
template  <typename T>
int HasFriend<T>::ct = 0;
void counts() {
	cout << "Counter int: " << HasFriend<int>::ct << "; ";
	cout << "counter double: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int>& hf) {
	cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double>& hf) {
	cout << "HasFriend<double>: " << hf.item << endl;
}

int main() {
	cout << "Don't have object: ";
	counts();
	HasFriend<int>hfi1(10);
	cout << "After create hfi1: ";
	counts();

	HasFriend<int>hfi2(20);
	cout << "After create hfi2: ";
	counts();

	HasFriend<int>hfi3(10.5);
	cout << "After create hfi3: ";
	counts();

	reports(hfi1);
	reports(hfi2);
	reports(hfi3);
	return 0;

}

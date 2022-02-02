#include <iostream>
#include <set>
template <class T>
int reduce(T ar[], int n) {
	std::set<T> m;
	for (int i = 0; i < n; ++i) {
		m.insert(ar[i]);
	}
	return m.size();

}
int main()
{
	long ar[] = { 1, 1, 2, 2, 3, 3, };
	std::string st[] = { "home", "home", "5", "5", "maestro"};
	std::cout << reduce(ar, 6) << reduce(st, 5);
}

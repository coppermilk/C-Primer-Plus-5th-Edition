#include <iostream>
#include <set>

int reduce(long ar[], int n) {
	std::set<long> m;
	for (int i = 0; i < n; ++i) {
		m.insert(ar[i]);
	}
	return m.size();

}
int main()
{
	long ar[] = { 1, 1, 2, 2, 3, 3, };
	std::cout << reduce(ar, 6);
}

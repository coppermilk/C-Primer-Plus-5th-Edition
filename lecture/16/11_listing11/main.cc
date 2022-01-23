#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

int main()
{

	using namespace std;
	const int N = 6;
	string s1[N] = { "buffon", "thinkers", "for", "heavy", "can", "for" };
	string s2[N] = { "metal", "any", "food", "elegant", "deliver", "for" };
	set<string> A(s1, s1 + N);
	set<string> B(s2, s2 + N);
	ostream_iterator<string, char> out(cout, " ");

	cout << "Set \'A\':\n";
	copy(A.begin(), A.end(), out);
	cout << endl;

	cout << "Set \'\B':\n";
	copy(B.begin(), B.end(), out);
	cout << endl;

	cout << "Union A and B:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Intersection A and B:\n";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Difference A and B:\n";
	set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	set<string> C;
	
	cout << "Set C:\n";
	set_union(A.begin(), A.end(), B.begin(), B.end(), 
		insert_iterator<set<string>>(C, C.begin()));
	copy(C.begin(), C.end(), out);
	cout << endl;

	string s3("gruny");
	C.insert(s3);
	cout << "Set C after insert:\n";
	copy(C.begin(), C.end(), out);
	cout << endl;
	
	cout << "Show C range:\n";
	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
	cout << endl;

	return 0;
}

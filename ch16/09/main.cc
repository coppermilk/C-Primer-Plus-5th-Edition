#include <iostream>
#include <vector>
#include <list>
#include <stdio.h> 
#include <time.h> 
#include <algorithm>
int main() {

	const int SIZE = 1000000;

	std::vector<int> vi0(SIZE);

	for (int i = 0; i < SIZE; i++) {
		vi0[i] = rand();
	}

	std::vector<int> vi(vi0);
	clock_t start = clock();
	std::list<int> li;

	std::copy(vi0.begin(), vi0.end(), std::back_inserter(li));

	clock_t start1 = clock();
	li.sort();
	clock_t end1 = clock();

	std::copy(vi0.begin(), vi0.end(), std::back_inserter(li));

	clock_t start2 = clock();
	std::copy(li.begin(), li.end(), std::back_inserter(vi));
	std::sort(vi.begin(), vi.end());
	std::copy(vi.begin(), vi.end(), std::back_inserter(li));
	clock_t end2 = clock();

	std::copy(vi0.begin(), vi0.end(), std::back_inserter(vi));

	clock_t start3 = clock();
	//std::sort(vi.begin(), vi.end());
	std::sort(vi.begin(), vi.end());
	clock_t end3 = clock();

	double seconds1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	double seconds2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
	double seconds3 = (double)(end3 - start3) / CLOCKS_PER_SEC;

	std::cout << seconds1 << " " << seconds2 << " " << seconds3;
	return 0;
}

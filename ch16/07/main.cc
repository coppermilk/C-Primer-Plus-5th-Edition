#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector<int> Lotto(int count, int chose) {
	std::vector<int> answer(count);
	for (int i = 0; i < count; i++) {
		answer[i] = rand() % 1000;
	}
	std::random_shuffle(answer.begin(), answer.end());
	answer.resize(chose);
	sort(answer.begin(), answer.end());
	return answer;
}
int main() {
	std::vector<int> winners;
	winners = Lotto(51, 6);
	for (auto i : winners) {
		std::cout << i << " ";
	}
	return 0;
}

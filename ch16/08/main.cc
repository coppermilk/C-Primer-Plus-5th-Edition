#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>

int main() {
	std::vector<std::string> met_friend = { "A", "B", "C"};
	std::vector<std::string> pet_friend = { "D", "C", "B" };
	std::vector<std::string> all_friend;

	sort(met_friend.begin(), met_friend.end());
	sort(pet_friend.begin(), pet_friend.end());

	for (auto &i : met_friend) {
		std::cout << i << " ";
	}

	std::cout << std::endl;

	for (auto &i : pet_friend) {
		std::cout << i << " ";
	}

	all_friend.resize(met_friend.size() + pet_friend.size());
	merge(met_friend.begin(), met_friend.end(), pet_friend.begin(), pet_friend.end(), all_friend.begin());
	sort(all_friend.begin(), all_friend.end());


	all_friend.erase(std::unique(all_friend.begin(), all_friend.end()));

	std::cout << std::endl;
	for (auto& i : all_friend) {
		std::cout << i << " ";
	}

	return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review {
	std::string title;
	int rating;
};
bool operator <(const Review& r1, const Review& r2);
bool worseThan(const Review& r1, const Review& r2);
bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using namespace std;
	vector<Review> books;
	Review temp;
	while (FillReview(temp)) {
		books.push_back(temp);
	}
	cout << "Thank you " << books.size() << " raitings: \n";
	for_each(books.begin(), books.end(), ShowReview);

	sort(books.begin(), books.end());
	cout << "Sort by name\nRating\tBooks\n";
	for_each(books.begin(), books.end(), ShowReview);

	sort(books.begin(), books.end(), worseThan);
	cout << "Sort by rating\nRating\tBooks\n";
	for_each(books.begin(), books.end(), ShowReview);

	random_shuffle(books.begin(), books.end());
	cout << "After shuffle\nRating\tBooks\n";
	for_each(books.begin(), books.end(), ShowReview);

	cout << "Done\n";
	return 0;

}

bool operator<(const Review& r1, const Review& r2) {
	if (r1.title < r2.title) {
		return true;
	}
	else if( r1.title == r2.title && r1.rating < r2.rating){
		return true;
	}
	else {
		return false;
	}
}

bool worseThan(const Review& r1, const Review& r2) {
	if (r1.rating < r2.rating) {
		return true;
	}
	else {
		return false;
	}
}
bool FillReview(Review& rr) {
	std::cout << "Input name book (quit for exit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit") {
		return false;
	}
	std::cout << "Input book raiting: ";
	std::cin >> rr.rating;
	if (!std::cin) {
		return false;
	}
	std::cin.get();
	return true;
}

void ShowReview(const Review& rr) {
	std::cout << rr.rating << "\t" << rr.title << std::endl;
}

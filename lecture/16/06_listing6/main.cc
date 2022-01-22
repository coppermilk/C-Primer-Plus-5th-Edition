#include <iostream>
#include <string>
#include <vector>

struct Review{
	std::string title;
	int rating;
};

bool FillReview(Review& rr);
void ShowReview(const Review& rr);

int main()
{
	using std::cout;
	using std::vector;
	vector<Review> books;
	Review temp;
	while (FillReview(temp)) {
		books.push_back(temp);
	}
	int num = books.size();
	if (num > 0) {
		cout << "Thank. You input: \n"
			<< "Raiting\tBook\n";
		for (int i = 0; i < num; i++) {
			ShowReview(books[i]);
		}
		cout << "Repet:\n"
			<< "raiting\tBook\n";
		vector<Review> ::iterator pr;
		for (pr = books.begin(); pr != books.end(); pr++) {
			ShowReview(*pr);
		}
		vector <Review> oldlist(books);
		if (num > 3) {
			books.erase(books.begin() + 1, books.begin() + 3);
			cout << "After erase:\n";
			for (pr = books.begin(); pr != books.end(); pr++) {
				ShowReview(*pr);
			}
			
			books.insert(books.begin(),
				oldlist.begin() + 1, oldlist.begin() + 2);
			cout << "After insert:\n";
				for (pr = books.begin(); pr != books.end(); pr++) {
				ShowReview(*pr);
				}
			}
		books.swap(oldlist);
		cout << "Swap books & oldist";
		for(pr = books.begin(); pr != books.end(); pr++){
			ShowReview(*pr);
		}
	}
	else {
		cout << "Null input & null processing.\n";
	}
	return 0;
   }

bool FillReview(Review& rr) {
	std::cout << "Input name of book (quit for exit) :";
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

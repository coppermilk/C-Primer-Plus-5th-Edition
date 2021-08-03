#include <iostream>

using namespace std;

int main() {
        const int number_of_years = 2;
        const int number_of_month = 12;
        const char * month[number_of_month] = {
                "Jan",
                "Feb",
                "Mar",
                "Apr",
                "May",
                "June",
                "July",
                "Aug",
                "Sept",
                "Oct",
                "Nov",
                "Dec"
        };
        
   
        int sales_volume_by_month[number_of_month][number_of_years];
        int sum_sales_amount_in_current_year= 0;
        int sum_sales_amount_several_years = 0;

        for (int j = 0; j < number_of_years; j++) {
                
                for (int i = 0; i < number_of_month; i++) {
                        cout << "Enter sales volume in " << month[i] << ": ";
                        cin >> sales_volume_by_month[i][j];

                }
        }
        // could be recorded in the previous cycle
        for (int j = 0; j < number_of_years; j++) {
                
                sum_sales_amount_in_current_year= 0;
                
                for (int i = 0; i < number_of_month; i++) {
                        sum_sales_amount_in_current_year+= sales_volume_by_month[i][j];
                }
                
                cout << "Final sales in " << j + 1 << " year: " << sum_sales_amount_in_current_year<< " pcs." << endl;
                sum_sales_amount_several_years += sum_sales_amount_in_current_year;
        }

        cout << "Final sales in all years: " << sum_sales_amount_several_years << " pcs." << endl;
        return 0;
}

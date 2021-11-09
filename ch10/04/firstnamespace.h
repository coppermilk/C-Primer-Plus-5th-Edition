#pragma once

namespace SALES {
        class Sales {
                private:
                        enum {
                                QUARTERS = 4
                        };
                double sales[QUARTERS] = {
                        0,
                        0,
                        0,
                        0
                };
                double average;
                double max;
                double min;

                double getAverage(const double ar[], int n);
                double getMax(const double ar[], int n);
                double getMin(const double ar[], int n);

                public:
                        Sales(const double ar[], int n);
                Sales();

                void showSales();
        };

}

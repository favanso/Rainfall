#include <iostream>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

int main() {
  
    int months = 3;

    string month_1;
    string month_2;
    string month_3;

    double rainfall_month_1;
    double rainfall_month_2;
    double  rainfall_month_3;
    double  total;
    double  average;

    cout << "Enter the name for month 1: ";
    cin >> month_1;
    cout << "How many inches of rain fell for " << month_1<< ": ";
    cin >> rainfall_month_1;

    cout << "Enter the name for month 2: ";
    cin >> month_2;
    cout << "How many inches of rain fell for " << month_2 << ": ";
    cin >> rainfall_month_2;

    cout << "Enter the name for month 3: ";
    cin >> month_3;
    cout << "How many inches of rain fell for " << month_3 << ": ";
    cin >> rainfall_month_3;

    
    total = rainfall_month_1 + rainfall_month_2 + rainfall_month_3;
    average = total / months;

    cout << setprecision(4);
    cout << "\nThe average monthly rainfall for " << month_1 << ", "<<
        month_2 << ", and "<< month_3 << " was " << average << " inches." << endl;

    return 0;

}


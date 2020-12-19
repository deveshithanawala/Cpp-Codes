#include <bits/stdc++.h>

using namespace std;

    

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
    double tip = (tip_percent*meal_cost)/100;
    double tax =  (tax_percent*tip_percent)/100;
    double total_cost ;
    total_cost = round(meal_cost+tip+tax);
    cout<<total_cost;

    

    return 0;
}

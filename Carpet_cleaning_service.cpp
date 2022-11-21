#include<iostream>
using namespace std;
int main()
{
    cout<<"Please enter the number of small rooms and number of large rooms to be cleaned (Seperate them by a space).\n";
    int small_rooms;
    int large_rooms;
    cin>>small_rooms>>large_rooms;

    const int small_rooms_price=25;
    const int large_rooms_price=35;
    const double tax = 0.06;

    double total_cost=((small_rooms*small_rooms_price)+(large_rooms*large_rooms_price));
    double tax_money = total_cost*tax;
    double estimate = total_cost+tax_money ;

    const int number_of_days=30;

    cout<<"Estimate for carpet cleaning service\nNumber of small rooms:"<<small_rooms<<"\nNumeber of large rooms:"<<large_rooms<<"\nPrice per small room:$"<<small_rooms_price<<"\nPrice per large room:$"<<large_rooms_price<<"\nCost:$"<<total_cost<<"\nTax:$"<<tax_money<<"\n=================================\n";
    cout << endl;
    
    cout<<"Total estimate:$"<<estimate<<"\nThis estimate is valid for "<<number_of_days<<"days.\n";

    return 0;
}
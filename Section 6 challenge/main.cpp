#include <iostream>

using namespace std;

const double price_of_small_rooms {25.0};
const double price_of_large_rooms {35.0};
const int validity_days {30};
const double tax {0.06};


int main() {
    cout << "Please indicate the number of rooms according to their size\n";
    cout << "First give the number of small rooms: \n";
    int small_rooms;
    cin >> small_rooms;
    cout << "Now enter the number of large rooms: \n";
    int large_rooms;
    cin >> large_rooms;
    cout << "The expected price for " << small_rooms << " small rooms and " << large_rooms << " large rooms:\n";
    cout << "Price per small room: $" << price_of_small_rooms << endl;
    cout << "Price per large room: $" << price_of_large_rooms << endl;
    double total_cost_without_tax {(small_rooms * price_of_small_rooms) + (large_rooms * price_of_large_rooms)};
    cout << "The total cost without tax is: $" << total_cost_without_tax << endl;
    double total_tax {total_cost_without_tax * tax};
    cout << "Tax: $" << total_tax << endl;
    cout << "==================================================\n";
    cout << "Total cost of service is $: " << total_cost_without_tax + total_tax << endl;
    cout << "Predicted prices are valid for " << validity_days << " days.\n";






}

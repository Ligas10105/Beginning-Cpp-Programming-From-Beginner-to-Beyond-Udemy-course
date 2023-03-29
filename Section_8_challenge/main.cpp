#include <iostream>

using namespace std;

int main() {

    cout << "Wprowadz kwote w groszach ktora chcesz rozmienic: ";
    int amount{0};
    cin >> amount;

    if (amount < 0) {
        cout << "Podales zla kwote!";
    } else {
        cout << "Oto twoja rozmieniona kwota: \n";
        int pln = amount / 100;
        cout << "zlotowki: " << pln << endl;
        int fiveteen_pennies = (amount % 100);
        cout << "50-cio groszowki: " << fiveteen_pennies / 50 << endl;
        int twenty_pennies = (fiveteen_pennies % 50);
        cout << "20-sto groszowki: " << twenty_pennies / 20 << endl;
        int ten_pennies = (twenty_pennies % 20);
        cout << "10-cio groszowki: " << ten_pennies / 10 << endl;
        int five_pennies = (ten_pennies % 10);
        cout << "5-cio goroszowki: " << five_pennies / 5 << endl;
        int penny = five_pennies % 5;
        cout << "groszowki: " << penny << endl;
    }

    return EXIT_SUCCESS;


}

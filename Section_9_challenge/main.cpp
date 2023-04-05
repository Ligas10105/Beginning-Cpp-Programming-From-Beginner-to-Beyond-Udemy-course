#include <iostream>
#include <vector>

using namespace std;

int main() {
    char selection{};
    vector<int> vec{};
    while (selection != 'Q' && selection != 'q') {
        cout << "Whats do you want to do?" << endl;
        cout << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n";
        cout << "Give your choice: \n";
        cin >> selection;

        switch (selection) {
            case 'P' :
            case 'p': {
                if (vec.empty()){
                    cout << "Your vector is empty. Add something to it (select A).\n";
                }
                else {
                    cout << "Values in your vector: \n";
                    for (auto val: vec) {
                        cout << val << " ";

                    }
                    cout << endl;
                }
                break;
            }
            case 'A' :
            case 'a' : {
                cout << "Enter the number you want to add\n";
                int new_number{};
                cin >> new_number;
                vec.push_back(new_number);
                break;
            }
            case 'M':
            case 'm': {
                if (vec.size() < 2){
                    cout << "To count the average you must have at least two values in the vector (select A).\n";
                }
                else {
                    int sum{0};
                    for (auto val: vec) {
                        sum += val;
                    }
                    cout << sum / vec.size();
                    cout << endl;
                }
                break;
            }
            case 'S':
            case 's': {
                if (vec.size() < 2){
                    cout << "You must have at least two values for it to be able to choose the smallest of them (select A).\n";
                }
                else {

                    int min = vec.at(0);
                    for (int i{0}; i < vec.size(); ++i) {
                        if (vec.at(i) < min) {
                            min = vec.at(i);
                        }
                    }
                    cout << min << endl;
                }
                break;
            }
            case 'L':
            case 'l': {
                if (vec.size() < 2){
                    cout << "You must have at least two values for it to be able to choose the largest of them (select A).\n";
                }
                else {
                    int max = vec.at(0);
                    for (int i{0}; i < vec.size(); ++i) {
                        if (vec.at(i) > max) {
                            max = vec.at(i);
                        }
                    }
                    cout << max << endl;
                }
                break;

            }
            case 'Q':
            case 'q': {
                break;
            }

            default: {
                cout << "Unknown choice" << endl;
            }

        }

    }
    cout << "Goodbye...\n";
    return EXIT_SUCCESS;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "In  vector 1 are " << vector1.size() << " variabes with values: \n";
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "In vector 2 are " << vector2.size() << " variabes with values: \n";
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "In vector 2D are " << vector_2d.size() * vector_2d.size() << " variabes with values: \n";
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "In vector 2D are " << vector_2d.size() * vector_2d.size() << " variabes with values: \n";
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    cout << "In  vector 1 are " << vector1.size() << " variabes with values: \n";
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;


    return EXIT_SUCCESS;


}

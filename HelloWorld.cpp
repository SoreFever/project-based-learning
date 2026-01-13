#include <iostream>
using namespace std;


int main() {
    int num = 42;
    int* numLocation = &num;
    int** numLocLocation = &numLocation;
    cout << "Hello world!" << **numLocLocation << endl;
}
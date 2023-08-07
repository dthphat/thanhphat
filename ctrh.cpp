#include <iostream>
using namespace std;

	
int AND(int a, int b) {
    return a & b;
}
int OR (int a, int b) {
    return a | b;
}

int main() {
    
    int (*andPtr)(int a, int b) = AND;
    int (*orPtr)(int a, int b) = OR;

    
    int c = andPtr(5, 3);
    int d = orPtr(5, 3);

    cout << " a AND b: " << c << endl;
    cout << " a OR b: " << d << endl;

    return 0;
}

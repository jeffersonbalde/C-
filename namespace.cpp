#include <iostream>

using std::cout;

namespace first {
    int x = 1;
}

int main() {
    // using namespace first;

    int x = 0;

    cout << first::x;

    return 0;
}
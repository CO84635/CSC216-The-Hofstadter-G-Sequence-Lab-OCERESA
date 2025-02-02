#include <iostream>
#include <cassert>

using namespace std;

int hofstadterGSequence (int n) {
    if (n == 0) {
        return 0;
    }

    return n - hofstadterGSequence(hofstadterGSequence(n - 1));
}

int main() {
    assert(hofstadterGSequence(0) == 0);
    assert(hofstadterGSequence(1) == 1);
    assert(hofstadterGSequence(2) == 1);
    assert(hofstadterGSequence(3) == 2);
    assert(hofstadterGSequence(4) == 3);
    assert(hofstadterGSequence(5) == 3);
    assert(hofstadterGSequence(6) == 4);
    assert(hofstadterGSequence(7) == 4);
    assert(hofstadterGSequence(8) == 5);
    assert(hofstadterGSequence(9) == 6);
    assert(hofstadterGSequence(10) == 6);
    assert(hofstadterGSequence(11) == 7);
    assert(hofstadterGSequence(12) == 8);
    assert(hofstadterGSequence(13) == 8);
    assert(hofstadterGSequence(14) == 9);
    assert(hofstadterGSequence(15) == 9);
    assert(hofstadterGSequence(16) == 10);
    assert(hofstadterGSequence(17) == 11);
    assert(hofstadterGSequence(18) == 11);
    assert(hofstadterGSequence(19) == 12);
    assert(hofstadterGSequence(20) == 12);

    cout << "All have test have passed! Congrats!" << endl;

    return 0;
}
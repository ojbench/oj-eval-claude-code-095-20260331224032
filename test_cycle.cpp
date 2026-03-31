#include <iostream>
#include "src.hpp"
using namespace std;

int main() {
    // Test cycle {2, 3, 1} on array [3, 1, 2, 0]
    int cycle_elems[] = {2, 3, 1};
    Cycle c(cycle_elems, 3);

    int arr[] = {3, 1, 2, 0};
    cout << "Before: ";
    for(int i = 0; i < 4; i++) cout << arr[i] << " ";
    cout << endl;

    c.apply(arr, 4);

    cout << "After: ";
    for(int i = 0; i < 4; i++) cout << arr[i] << " ";
    cout << endl;

    // Expected: [3, 2, 0, 1]

    Permutation p = c.toPermutation(4);
    cout << "Cycle as perm: " << p << endl;
    // Expected: [0, 2, 3, 1]

    return 0;
}

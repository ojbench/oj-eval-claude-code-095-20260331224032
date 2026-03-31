#include <iostream>
#include "src.hpp"
using namespace std;

int main() {
    // Test 1: Basic permutation
    cout << "Test 1: Basic permutation" << endl;
    Permutation p(4);
    cout << p << endl; // Should be [0 1 2 3]

    // Test 2: Permutation from array
    int arr[] = {2, 3, 1, 0};
    Permutation p2(arr, 4);
    cout << p2 << endl; // Should be [2 3 1 0]

    // Test 3: Apply permutation
    int data[] = {0, 1, 2, 3};
    p2.apply(data);
    cout << "After apply: ";
    for(int i = 0; i < 4; i++) cout << data[i] << " ";
    cout << endl; // Should be 2 3 1 0

    // Test 4: Multiplication
    Permutation p3 = p2 * p2;
    cout << "p2 * p2: " << p3 << endl; // Should be [1 0 3 2]

    // Test 5: Inverse
    Permutation inv = p2.inverse();
    cout << "Inverse: " << inv << endl; // Should be [3 2 0 1]

    // Test 6: Verify inverse
    Permutation identity_check = p2 * inv;
    cout << "p2 * inv: " << identity_check << endl; // Should be [0 1 2 3]

    // Test 7: Cycle
    int cycle_elems[] = {0, 1, 2};
    Cycle c(cycle_elems, 3);
    cout << "Cycle: " << c << endl;
    int data2[] = {10, 20, 30, 40};
    c.apply(data2, 4);
    cout << "After cycle: ";
    for(int i = 0; i < 4; i++) cout << data2[i] << " ";
    cout << endl; // 0->1, 1->2, 2->0, so [30, 10, 20, 40]

    Permutation cp = c.toPermutation(4);
    cout << "Cycle as perm: " << cp << endl; // Should be [1 2 0 3]

    // Test 8: Transposition
    Transposition t(1, 3);
    int data3[] = {10, 20, 30, 40};
    t.apply(data3, 4);
    cout << "After transposition {1,3}: ";
    for(int i = 0; i < 4; i++) cout << data3[i] << " ";
    cout << endl; // Should be [10, 40, 30, 20]

    Permutation tp = t.toPermutation(4);
    cout << "Trans as perm: " << tp << endl; // Should be [0 3 2 1]

    return 0;
}

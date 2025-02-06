#include <iostream>
#include <vector>

using namespace std;

vector<int> removeNthElement(vector<int> &list, int n) {
/*
         Enter code here
         */
        return 0;
}

// Driver code
int main() {
    vector<int> list1 = {1, 2, 3, 4, 5};
    int n1 = 3;
    vector<int> result1 = removeNthElement(list1, n1);
    printVector(result1); // Output: 1 2 3 5

    vector<int> list2 = {1};
    int n2 = 0;
    vector<int> result2 = removeNthElement(list2, n2);
    printVector(result2); // Output: (empty)

    vector<int> list3 = {1, 2};
    int n3 = 1;
    vector<int> result3 = removeNthElement(list3, n3);
    printVector(result3); // Output: 1

    return 0;
}

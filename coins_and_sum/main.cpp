#include "findMinCoins.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    //find minimum number of coins given sum 
    //problem statement: https://www.topcoder.com/community/data-science/data-science-tutorials/dynamic-programming-from-novice-to-advanced/
    vector<int> coins;
    
    for (int i = 1; i < 6; i+=2) {
        coins.push_back(i);
        cout << i << endl;
    }
    
    cout << "Testing coins 1, 3, 5: " << endl;
    int sum = 11;
    cout << "The minimum number of coins required for sum " << sum << " is: " << findMin(coins, sum) << endl;

    return 0;
}

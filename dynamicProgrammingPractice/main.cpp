#include <vector>
#include <iostream>

using namespace std;

int main() {
    //find minimum number of coins given sum 
    vector<int> coins;
    
    for (int i = 0; i < 20; i++) coins.push_back(i);
    
    cout << "Testing coins 1-20: " << endl;
    int sum = 30;
    cout << "The minimum number of coins required for sum " << sum << " is: " << findMin(coins, sum) << endl;

    return 0;
}

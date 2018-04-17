#include <vector>
#include <unordered_map>

int findMin(vector<int> coins, int s) {
    static unordered_map<int, int> table;
    table[0] = 0; // base case 

    for (int i = 0; i < coins.size(); i++) {
        for (int j = 0; j < s - 1; j++) {
            // if the current coin is less than sum 
        }
    }
    return
}

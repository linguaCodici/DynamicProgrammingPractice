#include <vector>
#include <unordered_map>
#include <iostream>
#include <climits>
#include <string>

using std::to_string;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

/**
 * DP minimum no. of coins for given sum
 * @param coins; vector of all coin values
 * @param s; given sum
 * 
 * @return minimum no. of coins needed
 */
int findMin(vector<int> coins, int s) {
    static unordered_map<int, int> table;
    table[0] = 0; // base case: 0 coins for sum = 0 
    for (int i = 1; i <= s; i++) table[i] = INT_MAX;

    for (int Si = 1; Si <= s; Si++) {
        for (int j = 0;j < coins.size(); j++) {
            int currval = coins[j];
            //cout << "current coin: "<< currval << endl;
            //cout << "current sum: " << Si << endl;
            if (currval <= Si && table[Si - currval] + 1 < table[Si]) {
                //cout << "replaced " << table[Si] << " with " << to_string(table[Si - currval] + 1) << endl;  
                table[Si] = table[Si - currval] + 1;

            }
            // if map[sum - current coin val] + 1 < map[sum]
            // update new val for sum

        }
    }
    for (int i = 0; i<= s; i++) cout << "sum val: " << i << " no of coins: " << table[i] << endl;
    return table[s];
}

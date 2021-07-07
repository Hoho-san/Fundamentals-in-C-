#include <iostream>
using namespace std;
int main()
{
	int num [3] [4] [3] ={{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}},{{21, 22, 23},{24, 25, 26},{27, 28, 29},{30, 31, 32}},{{41, 42, 43 }, {44, 45, 46}, {47, 48, 49}, {50, 51, 52}}};
    
	// Displaying the values with proper index.
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 3; ++k) {
                cout << "num[" << i << "][" << j << "][" << k << "] = " << num[i][j][k] << endl;
            }
        }
    }
return 0;
}

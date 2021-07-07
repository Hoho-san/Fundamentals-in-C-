#include <iostream>
using namespace std;
int main()
{
int num [2][4] ={ {1, 5, 12, 19}, {27, 34, 49, 56}};
		for (int i = 0; i < 2; ++i) {
        	for (int j = 0; j < 4; ++j) {
			cout<< "num[" << i <<"]["<<j<<"] = " << num[i][j] << endl;
		}
	}
return 0;
}


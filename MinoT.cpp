#include "MinoT.h"
char O_arr[1][4][4] = {{{'0','0','0','0'},
	{'0','1','1','1'},
	{'0','0','1','0'},
	{'0','0','1','0'}}};
MinoT::MinoT():Mino(1){}
void MinoT::paint()
{
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
			cout << O_arr[rotate_index][i][j];
		cout << endl;
	}
}


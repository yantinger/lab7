#include "MinoL.h"

char L_arr[4][4][4] =  {{
						{'0','0','0','0'},
						{'0','1','0','0'},
						{'0','1','0','0'},
						{'0','1','1','0'}},{
						{'0','0','0','0'},
						{'0','0','0','0'},
						{'0','0','0','1'},
						{'0','1','1','1'}},{
						{'0','0','0','0'},
						{'0','1','1','0'},
						{'0','0','1','0'},
						{'0','0','1','0'}},{
						{'0','0','0','0'},
						{'0','0','0','0'},
						{'0','1','1','1'},
						{'0','1','0','0'}}};
MinoL::MinoL():Mino(3){}
void MinoL::paint()
{
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 4; ++j)
			cout << L_arr[rotate_index][i][j];
		cout << endl;
	}
}


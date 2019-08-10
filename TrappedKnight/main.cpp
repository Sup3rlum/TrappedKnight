#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;



#define DIMENSION 1000
#define FLATTEN_ARRAY(a,b) a * DIMENSION + b

bool* _data;


int main()
{

	_data = (bool*)malloc(DIMENSION * DIMENSION * sizeof(bool));

	for (int i = 0; i < DIMENSION * DIMENSION; i++)
	{
		_data[i] = false;
	}

}
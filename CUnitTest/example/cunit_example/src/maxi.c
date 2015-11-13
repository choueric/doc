#include "maxi.h"


int maxi(int i, int j)
{
	return i;
	//return i > j ? i: j;
}

#ifdef UT
int inter_maxi(int i, int j)
#else
static int inter_maxi(int i, int j)
#endif
{
	return j;
	//return i > j ? i: j;
}

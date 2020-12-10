#include "test1.h"

/*__attribute__((weak))*/ int calc(int arg1)
{
	return arg1 * 4;
}

int bla4(int arg1)
{
    return arg1 * 2;
}

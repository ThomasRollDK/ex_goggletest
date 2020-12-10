#include "test1_mock.h"


c_test1_mock test1_mock;
c_test1 test1;

int calc(int arg1)
{
    return test1_mock._calc(arg1);
}


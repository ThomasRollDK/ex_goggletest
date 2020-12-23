#include "test1_mock.h"


c_test1_mock test1_mock;

int calc(int arg1)
{
    return test1_mock._calc(arg1);
}


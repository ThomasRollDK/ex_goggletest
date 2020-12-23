#ifndef TEST1_MOCK_H
#define TEST1_MOCK_H
#include "../test1.h"
#include "gmock/gmock.h"  // Brings in gMock.

class i_test1
{
    public:
    virtual int _calc(int arg1) = 0;
    virtual ~i_test1() {}
};

class c_test1 : public i_test1 {
    public:
     virtual int _calc(int arg1){return calc(arg1);}
     virtual ~c_test1() {}
};


class c_test1_mock : public i_test1 {
//    static c_test1_mock *instance;
 public:
/*	 static c_test1_mock *getInstance() {
		 if (!instance) {
			 instance = new c_test1_mock;
		  }
		  return instance;
	   }
*/
	 MOCK_METHOD(int, _calc, (int arg1), (override));
};


#endif //TEST1_MOCK_H

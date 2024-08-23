//c++ dilinde dosyalar birbirini include edebiliyo ve sıkıntı oluyo
//biz burada da testi include ettik test içinde de burayı include ettik


//pragma once yerine aşağıyı da kullanabiliriz
#ifndef _kutuphane
#include "test.h"
int topla(int a, int b);
#endif
#define _kutuphane



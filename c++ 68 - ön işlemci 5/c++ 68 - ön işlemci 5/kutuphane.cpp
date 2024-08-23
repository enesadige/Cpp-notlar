
#include "kutuphane.h"

//headerdeki sınıfı da buraya ekliyoruz alt satırda
//ön tanımlama işini h dosyası içinde yaptık

int Mat::topla()
{
    return this->a+this->b;
    
}
//---------------------------------------------------------------------------
//sınıfın kurucu metodunu burda tanımlıyoruz
//ön tanımlama işini h dosyasında yaptık
Mat::Mat(int a, int b) : a(a), b(b)
{}



int topla(int a, int b)
{
    return a+b;
}

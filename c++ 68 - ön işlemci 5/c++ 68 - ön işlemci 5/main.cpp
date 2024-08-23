//C++ DİLİNDE ÖN İŞLEMCİ 5 - kütüphane yazma

//artık basit şekilde bir kütüphane yazabiliriz
//örneğin eklediğimiz kutuphane.cpp dosyasında bir topla() fonksiyonu yazdık
//bu şu demek aslında biz algoritmalarımızı ayrı bir cpp dosyasına yazmalıyız
//sonra header dosyasında bunları tanımlamalı bu h dosyasını da main dosyaya eklemeliyiz
//#include "header_ismi" ile ekleyebiliriz

//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "kutuphane.h"
using namespace std;

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
int main()
{
    
    cout<<topla(10,10); //en baştaki fonskiyon
    
    Mat mat(10,10);     //sınıfdan eleman oluşturma
    cout<<mat.topla()<<endl;;   //sınıf içindeki topla fonksiyonu
    
    
}

//---------------------------------------------------------------------------


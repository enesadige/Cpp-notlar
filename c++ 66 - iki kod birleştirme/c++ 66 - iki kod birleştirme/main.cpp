//C++ ÖN İŞLEMCİ  -  DİLİNDE İKİ KODU BİRLEŞTİRME

//linker dediğimiz küçük bağlayıcılar var
//biz burda öncelikle sol ekrandan programımıza sağ tıklayıp new file ile bir cpp dosyası daha ekledik kütüphane adında
//daha sonra kütüphane dosyası içine bir fonksiyon yazdık
//direkt main içine cout ile yazıp çalıştırsak hata verecekti fakat biz kütüphaneye ayrı olarak yazdık ve;
//main üstüne bir tanımlama yaptık bir nevi böyle bir şey var sen bana güven hata vermeden çalıştır demiş olduk
//aslında bir include işlemi yapmasakta kütüphane için yine bir sıkıntı çıkmadı

//şimdi birde yine dosya ekleme ekranı ile header file yani üst bilgi dosyası ekledik >> kutuphane.h isminde
//bildirimleri genellikle header dosyasında yaparız
//bildirimden kastım ben bir sınıf yapıyorum haberin olsun gibi
//daha sonra da kütüphane.cpp dosyası içinde de verdiğimiz vaatleri yerine getiririz aslında

//daha sonra ana dosyamıza gelip şunu yazarız >> #include "kutuphane.h"
//artık main üstüne : int topla(int a, int b); yazmak yerine bunu header dosyası içine yazıp burada ekledik include ile
//sonuç olarak header file ın yaptığı iş main üstünde yapacağımız bildirimleri ana dosya sade dursun diye başka dosyaya yazmamız
//




//----------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "kutuphane.h" //bunun içinde fonksiyon tanımlaması yaptık main üstünde yapmak yerine
using namespace std;
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
int main()
{
    cout<<topla(10,10)<<endl;
}
//----------------------------------------------------------------------------------------------------

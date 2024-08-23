//C++ dilinde istisna işleme - 1
//herhangi bir hata yapmamızı derleyici aslında engelliyor uyarı vererek
//fakat bazı istisnai durumlar var ve derleyici bunları yakalayamayabilir
//bu genellikle dosyalarla çalışırken çok başımıza gelir
//ya da bir sayıyı sıfıra bölmek gibi şeyler syntax hatası vermese de çöker

//BAŞLICA ÜÇ OLAY VARDIR : THROW, TRY, CATCH
//catch türkçe karşılığı yakalamak
//try denemek demek, throw ise fırlatmak demek

//THROW
//throw işlemi bir bayrak kaldırmadır durun burda bir sıkıntı var demektir
//bu problemle ilgili ne yapılmasına karar vermek içindir
//bu fırlatma mekanizması farklı şeyler fırlatabiliyor
//bu hata mesajı, değişken, bir sayı ya da bir sınıf olabilir


//----------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------------------------------------------

double bolme(int a, int b, bool& sonuc)
{
    if(b==0)
    {
        sonuc = false;
        return 0;
    }
    return a/b;
}
//----------------------------------------------------------------------------------------

int main()
{
    bool sonuc=true;
    int a,b;
    cout<<"lütfen a ve b değerini giriniz : ";
    cin>>a>>b;
    cout<<bolme(a,b,sonuc)<<endl;
    //burada yolladığımız sıfır çalışma anında hata verdirir
    //o yüzden fonksiyon içine if yazıcaz
    
}

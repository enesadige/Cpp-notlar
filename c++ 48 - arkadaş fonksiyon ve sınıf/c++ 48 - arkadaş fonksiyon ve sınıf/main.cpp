//şimdiki başlığımız friend
//bildiğimiz üzere insanlar herkese her şeyi anlatmaz bir özeli vardır fakat yakın kişilere anlatır bu da buna benzer
//sınıf içinde bazı değişkenleri private şekilde oluşturuytoduk ve başka bir yerden erişilemiyodu
//biz bu private değişkenleri friend bir fonksiyon ya da method içinde alıp kullanabiliyoruz

//biz normalde private olan tutarı değiştirmek istersek ve bunu method ile yapmak istemiyor isek ;
//bunu friend class ya da fonksiyonla çözeriz
//bir tane friend fonksiyon yazalım ismi de degistir olsun
//ama buna parametre olarak pointer şeklinde göndereceğiz
//çünkü direkt nesneyi yollasak değişmiycekti tutarın değeri
//bunun için class içine degistir fonksiyonunun tanımını yapmalıyız
//class içinde tanımın en başına da friend yazarız

//aynı şey fonksiyon değil de sınıf için de aynı şey olurdu
//

//----------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------------------------------------------------------------------
class Payment
{
private:
    float tutar=0;
    
public:
    string paraBirimi;
    
    void setTutar(float t)
    {
        if(t>0){tutar = t;}
        else {tutar = 0.1;}
    }
    
    void pay()
    {
        cout<<tutar<<" "<<paraBirimi<<" Ödeme alındı.\n";
    }
    
    //tanımlama
    friend void degistir(Payment* paymentPtr);
    //tanımlama
    friend class Test;
    
    
};
//----------------------------------------------------------------------------------------------------------------
void degistir(Payment* paymentPtr)
{
    paymentPtr->tutar = 10;
}

//----------------------------------------------------------------------------------------------------------------
class Test
{
public:
    void degistir_iki(Payment* paymentPtr)
    {
        paymentPtr->tutar = 30;
    }
};
//----------------------------------------------------------------------------------------------------------------
int main()
{
    Payment payment;
    degistir(&payment);
    payment.paraBirimi = "tl";
    payment.pay();
    cout<<"test sınıfı ile yapmaya geçtik\n";
    Test test;
    test.degistir_iki(&payment);
    payment.paraBirimi = "tl";
    payment.pay();
}

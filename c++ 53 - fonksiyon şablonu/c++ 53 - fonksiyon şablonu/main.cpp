// C++ DİLİNDE FONKSİYON ŞABLONU OLUŞTURMA
//aşağıda main içinde gördüğümüz ikinci satır ikinci yazım şeklidir önden türü de belirtebiliriz

//ikinci yazdığımız template ise sadece birinde bunu kullanmak istersek parametrelerin onun için
//eğer template içinde parametre türlerini verirsek sadece dönüş değerini template ile yapar
//yani biz ikinci fonksiyonda iki parametreyi de float yapsaydık;
//dönüş değeri için main içinde "<>" yazdığımız türü alırdı
//bir de sadece bir tür "T" gibi değil bunu ikiye çıkarabiliriz >> üçüncü fonk.


//---------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//---------------------------------------------------------------------------------
template<typename T>
T maxx(T a,T b)
{
    return (a>b)? a: b;
}
//---------------------------------------------------------------------------------
template<typename A>
A maxx_two(A a, float b)
{
    return (a>b)? a: b;
}
//---------------------------------------------------------------------------------
template<typename X, typename Y>
Y maxx_three(X a,Y b) // burada Y return tipi için
{
    return (a>b)? a: b;
}
//---------------------------------------------------------------------------------
int main()
{
    cout<<maxx(1.1f,5.5f)<<endl;
    cout<<maxx<int>(2,6)<<endl; //türü istersek belirtebiliriz
    cout<<maxx<>(5,8)<<endl; //burda da tanımlamadan türünü yazabiliriz
    cout<<"\nikinci fonksiyona geçildi\n\n";
    cout<<maxx_two(5,3.8f)<<endl;
    cout<<"\nüçüncü fonksiyona geçildi\n\n";
    cout<<maxx_three(3, 5.3)<<endl;
    cout<<maxx_three<int, float>(3, 7.8)<<endl;
}
//---------------------------------------------------------------------------------

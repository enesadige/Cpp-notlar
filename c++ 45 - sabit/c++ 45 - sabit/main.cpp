//bu kısımda const yani sabit ifadesini sınıflarda nasıl kullanabiliriz ona bakacağız
//const normalde bir değişken oluştururken başına eklediğimizde değerinin bidaha değiştirilememesi için kullanılıyor
//sınıf içinde biz bu değişkeni const şeklinde tanımlarsak değiştirilemez anlamına gelir ve bunu bidaha değiştiremeyiz

//ve biz nesneyi oluştururken başına const yazarsak bu sefer nesnenin hiç bir şeyini değiştiremeyiz
//sadece class içinde const oluşturup private yaparsak main içinden değiştirilemez
//fakat bu seferde class içinde bir fonksiyon ile değiştirilmemesi için fonksiyonda const yazarız şuraya :: tür fonk.adı() const {ifadeler}
//bu şekilde yazarsak artık bu süslü parantez içinde hiç bir class üyesi değişkeni değiştirmeyeceğim diyoruz

//bir de pointerla iş yapan bir get_iki fonksiyonu tanımlayalım
//bunun başına const yazdığımız için bunu main içinde kullanamıyoruz yani düz kullanamıyoruz
//main içinde kullanmamız için bunu = yapacağımız değişkeninde "const int*" şeklinde tanımlanmış olması lazım

//aslında baktığımızda yine burada derleyiciye kandırabiliyoruz
//değeri değiştirdik sonuçta
//ama biz en başta class içinde "deger" değişkeninin başına const ekleseydik hiç bi türlü değiştirilemiyecekti
//biz get fonksiyonunu tanımlarken de şu şekilde const ekleyebilirdik : int const * get()...

//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;
//---------------------------------------------------------------------------------------------------------

class Silah
{
private:
    int deger = 10; //başına const ekleseydik aşağıdaki fonksiyonlarla vesaire değiştirilemiyecekti

public:
    
    int* get() //burada int den önce const yazsaydık main içindeki *(silah.get_iki()) = 100; kısmı hata verecekti
    {
        return &deger;
    }
    
    //deger değişkeni private olduğu için main içinde okuyabilmek için bu fonksiyonu yazdık
    int getOku()
    {
        return deger;
    }
    
};
//---------------------------------------------------------------------------------------------------------
int main()
{
    Silah silah;
    
    *(silah.get()) = 100;
        
    //aşağıdaki fonksiyonla yazdırmak değişken private olduğu için buradan okuyabilmek için public bir fonksiyonla okuduk
    cout<<silah.getOku()<<endl;
    
    const Silah silah_iki; //tam bu kısım konumuz şu an hiç bir şeyi değiştirilemez
}

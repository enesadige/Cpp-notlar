//şimdiki başlığımız static
//normalde aşağıdaki test fonksiyonunda biz a değerini tanımlarken sadece int yazarsak başına
//testi kaç kere çağırırsak çağıralım ekrana bir yazacak
//fakat a değişkenini tanımlarken başına "static" yazsaydık ikinci çağırışımızda ekrana "2" yazacaktı
//aşağıdaki test fonksiyonundaki b değişkenine yazdığımızdan öyle oldu
//çünkü fonksiyon çalıştı işi bitince bellekten silinir yanlız fonksiyon içinde bir statik ifade varsa
//programın tamamı sonlanana kadar bu statik bellekte tutulmaya devam edecektir
//aslında mantık şu statik olunca derleyici bakıyo daha önce tanımlanmış tekrar tanımlamaya gerek yok sadece b++ satırını çalıştırıyo

//statik ile const karıştırılmamalı
//sabit sabittir yani statik ise kendi kafasına göre takılan bir değer olarak zihnimize kodlanabilir

//bunun sınıflardaki davranışına bakarsak
//normalde tanımladığımız değişken class içindeki o oluşturulan nesneye bağlı kalıyodu
//fakat biz class içinde tanımlanan değişken başına static yazarsak hiç bir şeye bağlı olmaz kendi kafasına  göre takılır

//fakat buna biz class içinde değer atayamayız
//bu yüzden class dışında Kitap::adet = deger; şeklinde değer atadık
//daha sonra main içinde baktığımızda biri için yapılan değişiklik hepsi için yapılmış oldu

//birde static bir method nasıl tanımlanıyo ona bakalım
//aşağıdaki get fonksiyonu da ortak kullanım alanı oldu static oluşturulduğu için





//----------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------------------------------------------------------
class Kitap
{
public:
    static int adet;
    
    Kitap() 
    {
        cout<<"kitap oluşturuldu\n";
        adet++;
    } //bu şu demek aslında her nesne oluşturulduğunda adet bir tane arttırılacak
    
    static int get()
    {
        return adet;
    }


    
};

int Kitap::adet = 0;
//----------------------------------------------------------------------------------------------------------------

int main()
{
    //----------------------------------------------------------------------------------------------------------------
    Kitap kitap1;
    Kitap kitap2;
    Kitap kitap3;
    cout<<"kitap sayısı = "<<kitap1.adet<<endl;
    cout<<"Kitap sayısı static fonk. ile sayılan = "<<kitap1.get()<<endl<<endl;
    //----------------------------------------------------------------------------------------------------------------
    cout<<"en son hepsinin ortak değişkeni kullandığını aşağıdaki satırlar gösterecek\n";
    kitap1.adet = 20;
    cout<<kitap1.adet<<endl<<kitap2.adet<<endl<<kitap3.adet<<endl;
    cout<<endl;
    kitap2.adet = 500;
    cout<<kitap1.adet<<endl<<kitap2.adet<<endl<<kitap3.adet<<endl;
    //----------------------------------------------------------------------------------------------------------------
    
}

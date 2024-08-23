//C++ DİLİNDE KÜTÜPHANE - 1

//std kütüphanesi içinde sık kullanacağımız fstream ve string öğeleri var
//birisi basit dosya işlemleri için bir diğeri de text tutulabilmesi için bir sınıf
//başlamadan önce ele almamız gereken bir şey var bu da : namespace

//namespace >> aslında baktığımızda biz std::cout gibi şeyler yazıyoruz, namespacedeki amaç ise bunu kullanmamaktır
//ya da şöyle diyebiliriz aynı isme sahip şeylerin birbirleriyle karışmamasıdır
//örneğin bir evde üç televizyon varsa televizyon aç dersek kişi hangisini açacak üç tane var sonuçta

//bir de ek olarak biz bir namespace tanımlayabiliyoruz
//burda şunu diyebliriz bir aşağıda namespace içine merhaba diye bir method tanımladık
//aynı isimde bir de fonksiyonumuz olsun aşağıda oluşturduk
//main içinde sadece merhaba(); çağırırsak hangisi çalışacak>> fonksiyon olan çalışır
//biz namespace içindeki merhabayı çağırmak istersek şunu yazarız >>deneme::merhaba();


//-------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;    //ana standart kullanımı burda

//-------------------------------------------------------------
//namespace tanımlama

namespace deneme 
    {
        int sayi = 100;
        void merhaba(){cout<<"namespace içindeki merhaba()\n";}

    }

//-------------------------------------------------------------



//-------------------------------------------------------------
void merhaba()
{
    cout<<"fonksiyondaki merhaba\n";
}

//-------------------------------------------------------------
int main()
{
    merhaba();
    deneme::merhaba();  //oluşturduğumuz namespace kullanımı burda
}

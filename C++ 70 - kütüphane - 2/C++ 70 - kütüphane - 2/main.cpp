//C++ DİLİNDE KÜTÜPHANELER 2

//internetten tüm kütüphaneler ve haklarında bilgiyi şu siteden öğrenebiliriz >> en.cppreference/w/cpp/header
//burda şunu bilmeliyiz burada sitede gidip dökümanları okuyarak kendimizi eğitmeliyiz her bilgi yazılıdır nasıl nerde kullanılacak gibi

//ilk bakacağımız kütüphane "string" kütüphanesidir
//biz şu şekilde değişkeni oluşturuyoruz >> string isim = "değer";
//daha sonra isimi yazıp sonuna "." koyarak metodlara erişebiliyoruz

//örneğin empty metodunu şöyle çağıralım >> deneme.empty();
//empty metodu şunu yapar eğer string değişkenine bir değer atadıysak boolean olarak "0" değerini eğer boşsa "1" değerini dönderir

//örneğin insert metodunu çağıralım; bu string ifadeye ekleme yapar
//bunu yaparken () içine kaçıncı karakterden sonra ekleme yapılacağını yazıp "," koyup yazıyı yazarız >> deneme.insert(7, "ekleme");

//bir de append metodu vardır inserte benzer ama bu direk en sona ekler

//-------------------------------------------------------------
#include <iostream>
#include <string>   //burada string kütüphanesini dahil ediyoruz
using namespace std;
//-------------------------------------------------------------

//-------------------------------------------------------------
int main()
{
    string deneme = "merhaba string!";
    cout<<deneme.empty()<<endl;
   
    deneme.insert(7, " ekleme");
    cout<<deneme<<endl;
    
    deneme.append(" sona ekleme\n");
    cout<<deneme<<endl;
    
    
}

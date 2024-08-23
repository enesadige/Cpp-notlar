// C++ DİLİNDE DİZİ İLE FONKSİYONA GEÇMEK

// normal şartlarda biz bi fonksiyonu main dışına yazıp sonra çağırabiliyoduk
// aşağıda biz ana fonksiyondan a değerini gönderdik
// yani test fonksiyonu içine biz a değişkeni tanımlasakta mainin içindeki a değeri değişmez
// void fonk içine a = 100; satırı da yazsak main içinde a tanımlandığı değerde kalır
// yani a değeri main içinde 25 kalır çünkü fonk içindeki değişken lokal değişkendir

// biz bi dizi oluşturup onu fonksiyona göndermek istersek "[]" koymayı unutmamalıyız
// içine de boyutunu yazmalıyız
// fakat bu da tam yeterli değildir çünkü sadece fonka dizi yazıp gönderirsek bir işaretci olur
// biz o yüzden fonk içinde for döngüsü ile yazdırabiliriz


#include <iostream>
#include <iterator>


//----------------------------------------------------
void test(int dizi[3])
{
    for(int a = 0; a < 3; a++)
    {
        std::cout<<dizi[a]<<'\n';
    }
}
//----------------------------------------------------

int main() {
    
    int dizi[3] {1,2,3};
    test(dizi);
    
}

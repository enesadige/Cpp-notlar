// C++ DİLİNDE NESNE YÖNELİMLİ PROGRAMLAMA

// veriyi sınıflandırmak : mesela uçak adı altında bir sürü model var
// burada da veriyi sınıflandırmak daha iyi yönetmemizi sağlar
// nesne (object) : her şey nesnedir ve iki ana bileşeni vardır
// birincisi ilgili özelliklerinin listesi renk gibi
// ikincisi ise gösterebilecekleri bazı davranışlardır
// bu özellik ve davranışlar birbirinden ayrılamaz
// class ise bu nesneleri tanımlayan bir plandır
// yani özellik ve davranışlarını bir ana başlıkta toplamadır

// biz özelliklerini tanımladığımız bir vida için ;
// yeni ve farklı renkte bir vida üretmek istersek aynı sınıftan tanımlayabiliriz
// yani özellik kısmından rengi değiştiririz sadece
// aynı sınıfı kullanan nesneler birbirini etkilemez yani bağımsızdır
// yani bir nesnedeki aksiyon diğerlerini etkilemez
// bir de başka bir nesne için oluşturulmuş yeni bir sınıf düşünelim örneğin tahta sınıfı
// bunları bir arada kullanabiliyoruz bu iki ayrı sınıfa ait nesneleri

// nesne yönelimli programlama da öncelikle bir sınıfa ihtiyacımız var

#include <iostream>

//---------------------------------------------------------------------
// matemetik adında bir sınıf oluşturduk
// daha sonra üç tane değişken tanımladık
// sonra işlemler için iki tane fonksiyon tamımladık
// sınıf bitti kullanmak için de main içine bak

class Matematik
{
public:
    int a, b, result = 0;
    
    void topla() 
        {
        this ->result = this->a + this->b;
        }
    void print()
    {
        std::cout<<this->result;
    }
};
//---------------------------------------------------------------------
// oluşturduğumuz sınıfı bu şekilde main içinde kullanıyoruz
// sınıfı kullanarak bir iş tanımladık "mat" adında
// sonra mat.a yazarak sınıfı kullanarak değişkene değer atadık
// sonra da mat.fonkadı() ile fonksiyonu çağırdık
//

int main() {
    
    Matematik mat;
    mat.a = 10;
    mat.b = 20;
    mat.topla();
    mat.print();
    
}

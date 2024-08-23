// C++ DİLİNDE DİZİLER

// dizi aynı türden bir çok değişkene tek bir tanımlayıcı aracılığıyla erişmemizi sağlar
// yani toplu bir veri türüdür
// ana amaç veriyi yönetmektir ve doğru bir şekilde erişip kullanmaktır
// dizi dediğimiz şey aslında bir listedir ve birt liste ismi altında tutulur
// şu şekilde yazılır : tip diziadı[diziBoyutu] = {terimler};
// burada da terimler 0. olarak başlar
// c++ da dizi oluşturup terimler verilmezse bellekte yer ayrılır fakat bir varsayılan değer yoktur
// yani biz terime değer atamadan yazdırırsak saçma sapan bir sayı yazdırır ekrana
// bu yüzden her zaman için varsayılan değer atamak bizi güvenli bölgeye alır
// bunu da süslü parantez içini boş bırakarak yaparız :: int dizi[5] {}; gibi


#include <iostream>
#include <iterator> // std:.size kullanabilmek için

int main() {
    
    int puanlar[5] = {10,20,30,40,50};
    //veriyi okumak için indisini yazmamız lazım ve indisler burda da 0'dan başlar
    std::cout<<puanlar[0]<<'\n';
    
    int bosdizi[5]{};
    std::cout<<bosdizi[0]<<'\n'; //burada ekrana sıfır yazdıracaktır
    
    
}

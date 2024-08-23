// C++ DİLİNDE DİZİLERDE ELEMAN SAYISI BULMAK VE İŞLEMLERİ

// tanımlamış olduğumuz dizinin içindeki eleman sayısını bulabiliriz
// bunun için std::size kullanırız
// kullanımı şöyledir : std::size(dizi);
// dizi içindeki dizinin elemanı için de : std::size(dizi[0]) bu dizinin içindeki ilk dizi için

// burada önemli nokta şu tanımladığımız dizi statik bir dizidir
// statikle dinamik dizi arasındaki yegane fark biz boyutunu tanımlarız çalışma sırasında değişmez
// dinamik olan dizilerde ise çalışma sırasında eleman sayıları değiştirilebilir
// şunu da yapamayız önce bir int sayi = 3 tanımlayıp sonra dizi[sayi] yapamayız
// yani dizi noyutu belirtirken değişken koyamayız
// illa bir değişken yazacaksak değişkeni değiştirilemez yapmalıyız
// yani const int sayi = 3 olarak tanımlamalıyız
// const un başka bir versiyonu şudur = "constexpt" yani : constexpr int sayi = 3 gibi
//

#include <iostream>
#include <iterator>
using namespace std;

int main() {
  
const int sayi = 3;
constexpr int sayi2 = 2; // bu da constun başka bir versiyonu
    //----------------------------------------------------
    int dizi[sayi][sayi2]
        {
            {1,2},
            {3,4},
            {5,6}
        };
    //----------------------------------------------------
    //dizinin eleman sayısı için;
    std::cout<<std::size(dizi)<<'\n';
    //dizi içindeki ilk dizi için;
    std::cout<<std::size(dizi[0])<<'\n';
    cout<<endl<<endl;
    cout<<sizeof(dizi)<<endl;
    cout<<sizeof(dizi)/sizeof(int)<<endl<<endl;
 
    
}

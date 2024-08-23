//şablon aslında gerçek hayatta kullandığımız şekle benzer
//örneğin bir tasarımcı bir şablon üretir sonra o şablonu kullanır defalarca

//biz derleyici için bir şablon olupturuyoruz ve derleyiciye diyoruz ki
//sen bir örnek metod oluşturacaksın ve metodu oluştururken bu şablona bakıp ilerleyeceksin diyoruz
//aşağıda hangi sayı büyüktür örneği yapıcaz
//ve int, double ya da float için ayrı ayrı yazmak yerine şablon kullanıcaz

//burada mantık şudur int gönderdiğimizde "T" olan yerlere int yazılır, floatta ise float yazılır
 

//----------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------------------------------
//şablon kısmı ve şablon tanımlama
template<typename T>
T maxx(T a,T b)
{
    return (a>b)? a:b;
}

//----------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------
int main()
{
    cout<<maxx(1.1,5.5)<<endl;
}

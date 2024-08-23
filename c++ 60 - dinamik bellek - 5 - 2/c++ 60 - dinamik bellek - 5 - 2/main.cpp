//59.DERS NOTU DEVAMI

//aslında bu not mallocun sınıf nesnelerinde düzgün çalışmadığını göstermek için
//aşağıda main içinde gördüğümüz gibi malloc ve free ile oluşturulunca metodlar çağırılmadı
//eğer new ve delete ile yapsaydık kurucu ve yıkıcı metodları çağırabilirdi
//yani sonuç olarak sınıf ile işlem yaparken malloc ve free değil new ve delete kullanıcaz

//--------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//--------------------------------------------------------------------------------
class Silah
{
public:
    Silah(){cout<<"başladı\n";}
    ~Silah(){cout<<"bitti\n";}
};

//--------------------------------------------------------------------------------

int main()
{
    Silah* silah = (Silah*)malloc(sizeof(Silah));
    free(silah);
}

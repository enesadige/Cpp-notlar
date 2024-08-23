//C++ DİLİNDE BELLEK YÖNETİMİ - 2

//heapda tanımladığımız değişkeni eğer delete ile silmezsek a program bitene kadar tutulmaya devam eder
//aşağıda stackte otomatik silinmesi için {} kullandığımızı söyledik
//fakat eğer {} içinde oluşturulan nesneyi heapde oluşturursak süslü parantez kapanınca
//{Silah* silah_uc = new Silah;} dersek parantez kapansa da silinmez yine silmek için mecbur "delete" kullanırız
//fakat bir problem var süslü parantez içinde tanımlanan bir şeyi başka yerde kullanamyız
//yani başka yerde kullanmak için parantez dışında üstünde pointeri tanımlamalıyız

//yani şu şekilde ;
//Silah* silah_uc;
//{silah_uc = new Silah;}

//


//------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//------------------------------------------------------------------------------------------------
class Silah
{
public:
    Silah(){cout<<"silah oluşturuldu\n";}
    ~Silah(){cout<<"silah kaldırıldı\n\n";}
};

//------------------------------------------------------------------------------------------------
int main()
{
    //heap kullanmak istersek aşağıdaki gibi yazarız
    int* a = new int;
    
    //atama yapmak istersek eğer aşağıdaki gibi atarız
    *a = 10;
    
    //artık bunla işimiz kalmadıysa kaldırmak için aşağıdakini yazarız
    delete a;
    
    //bir sınıftan nesneyi heapda oluşturmak istersek aşağıdaki gibi yaparız
    Silah* silah = new Silah;
    delete silah;
    
    //stackte oluşturup otomatik kaldırılmasını istersek {} kullanırız
    {
        Silah silah_iki;
        
    }
    
    
    
}
//------------------------------------------------------------------------------------------------

//C++ DİLİNDE SINIF ŞABLONU OLUŞTURMA

//aşağıda biz bir template olan "T" tanımladık
//artık onu kullanabiliriz

//------------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
//------------------------------------------------------------------------------

template<typename T>

//------------------------------------------------------------------------------
class Mat
{
public:
    T a{}; // varsayılan değer {} kullandık
    T b{}; // varsayılan değer {} kullandık
    
    //burada artık template olan T yi kullanıyoruz
    T topla(T a,T b)
    {
        return a+b;
    }
    
    
};
//------------------------------------------------------------------------------
class Silah{};
//------------------------------------------------------------------------------
template <class T> //burada nesne oluşturmak için typename yerine "class" yazdık
T* nesneYap()
{
    T nesne;
    return &nesne;
}
//------------------------------------------------------------------------------
int main()
{
    Mat<int> mat; //burada <> içine ne yazarsak o tür ile çalışır
    mat.a = 10;
    mat.b = 20;
    
    cout<<mat.topla(mat.a, mat.b)<<endl;
    cout<<endl<<endl<<endl;
    
    cout<<nesneYap<Silah>()<<endl;
    
}
//------------------------------------------------------------------------------

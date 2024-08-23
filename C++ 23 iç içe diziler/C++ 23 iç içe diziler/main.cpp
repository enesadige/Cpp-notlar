// C++ DİLİNDE İÇ İÇE DİZİLER

// dizi içine dizi ekleyebiliriz;
// bunun için şöyle yaparız ör: dizi[1][1] bu şu demek dizi de bir eleman elemanda da bir dizi olsun
// bu uzatılabilir yani dizi[1][1][1] demek dizi içinde dizi içinde dizi demektir
// yazdırırken eksik belirtirsek saçma sapan bir değer yazdırır

#include <iostream>
#include <iterator>

int main() {
    
    //----------------------------------------------------------
    int dizi[1][1][1] { { {1} } };
    
    //buna erişmek için
    std::cout<<dizi[0][0][0]<<'\n';
    //----------------------------------------------------------
    int dizi2[3][2] // bu 2 terimli içinde 3 dizi olsun demektir
    {
        {1,2},
        {3,4},
        {5,6}
    };
    
    //bunları çağırmak için şöyle : ör, 2 için dizi[0][1]
    std::cout<<dizi2[0][1]<<'\n';
    
    //bunları döngü içinde yazdırmak için iç içe iki for döngüsü kullanabiliriz
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            std::cout<<dizi2[i][j]<<'\n';
        }
    }
    
    
    //----------------------------------------------------------
    
}


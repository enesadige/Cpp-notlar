// C++ DİLİNDE FONKSİYONLARA DİZİYLE GEÇMEK 2

// biz kapalı parantezle boyutu söylemesekte derleyici otomatik dolduracaktır
// bir fonksiyona dizi ile geçerken fonk içine (int *dizi) yazılabilir
// bu aslında daha doğru bir kullanımdır
// diğer bir nokta da gönderdiğimiz dizi eğer bir karakter dizisi olursa;
// bunu yapınca fonk içindeki pointer işaretine gerek yoktur >> void fonkadı(char dizi[]) {}
// kullanımı hatalı olmaz fakat pointerla da yaparsak hata almayız char dizisi ise
//

#include <iostream>
#include <iterator>

//----------------------------------------------------
void test(char *dizi) // yeni kullanımı çünkü : int dizi[] = int *dizi 'dir
{
    std::cout<<dizi<<'\n';
    
    /*for(int i=0;i<4;i++)
    {
        std::cout<<dizi[i];
    }
    std::cout<<'\n';
     */
}
//----------------------------------------------------


int main() {
    
    char a[] {"Enes"};
    test(a);
    
    
    
}

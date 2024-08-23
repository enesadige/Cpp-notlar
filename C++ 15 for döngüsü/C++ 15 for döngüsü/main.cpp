// C++ DİLİNDE FOR DÖNGÜSÜ

// aslında c dilindeki kullanımına çok benzerdir
// kullanımı şu şekildedir:
// for(değişken tanımı; değişken şartı; işlem) {ifadeler};



#include <iostream>

int main() {
    
    int sayi;
    std::cout<<"kaç satırdan oluşsun";
    std::cin>>sayi;
    
    
    for(int i=0; i<sayi; i++)
    {
        
        for(int k=sayi-i; k>0; k--)
        {
            std::cout<<' ';
        }
        //--------------------------
        for(int j=0; j<(2*i+1); j++)
        {
            std::cout<<'*';
        }
        std::cout<<'\n';
    }
    
    
    
    
    
}

//C++ DİLİNDE ÖN İŞLEMCİ - 1

//biz bir program yazınca öncelikle bu programın derlenmesi lazım ama derlenene kadar arada bazı işllemlerden geçiyo
//bunlardan biri de ön işlemci kısmı. program ön işlemcideyken uygulanması gereken direktifler uyguklanır sonra derleni
//derlendikten sonra ise bağlamaya gider ve sonra biter >> program.exe olark

//önce kodları yazıyoz sonra ön işlem var mı yok mu bakar varsa yapar yoksa derlemeye gider
//derleme bitince binary kod ortaya çıkar bu binary dosyaları bağlama işleeri ile birbirine bağlanır sonra program bite

//4 ANA ÖN İŞLEMCİ DİREKTİFİ VARDIR GENEL OLARAK
//1 - makrolar(macros)
//2 - dosya dahil etme
//3 - koşullu derleme
//4 - diğer direktifler

//MACROLAR
//bir programda isim verilen kod parçasıdır.
//derleyici tarafından bu adla her karşılaşıldığında, derleyici adı gerçek kod parçasıyla değiştirir
//'#define' yönergesi bir makro tanımlamak için kullanılır, tanımı sonunda ";" yoktur

//DOSYA DAHİL ETME
//bu önişlemci yönergesi derleyiciye kaynak koduna bir dosya eklemesini söyler
//bu aslında bir dosyayı ya da orda yazanları kullanabilmek içindir
//standart başlık dosyası >> #include <dosya_adı>
//kullanıcı tanımlı dosyalar >> #include "dosya_adı"
//burada dosya_adı eklenecek dosyanın adıdır ve "<>" işaretleri, derleyiciye dosyayı standart dizinde aramasını söyler
//#include sonuna yazılan "" işaretleri ise kullanıcı tanımlı olduğunu anlaması ve ona göre arama yapması için

//KOŞULLU DERLEME
//burada kullandıklarımız : #if, #else, #endif, #ifdef, #ifndef
//bunlar derleyiciye bir emir niteliğindedir ve buna göre içlerinde yazan kod bloğuna işlem yapılır

//DİĞER DİREKTİFLER
//#undef ve #pragma dır bunlar

//ÖRNEKLER AŞAĞIDADIR


//----------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

//----------------------------------------------------------------------
class Silah
{
public:
};

//----------------------------------------------------------------------
int main()
{
    
}



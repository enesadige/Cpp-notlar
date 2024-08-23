//C++ DİLİNDE ÖN İŞLEMCİ - PRAGMA ONCE NEDİR
//diğer header ve cpp dosyaları içine de bak

//c++ dilinde dosyalar birbirini include edebiliyo ve sıkıntı oluyo
//biz burada da testi include ettik test içinde de kutuphane headeri include ettik
//şimdi gidicek teste bakıcak kutuphaneyi include edicek
//sonra gidicek kutuphaneye orda da bakıcak #include "kutuphane.h" var orayı bidaha include edicek
//böylece bir kısır döngüye girmiş olacak ve programımız çökecek

//bu yüzden örneğin test.h ile kutuphane.h birbirini kullanacak olsun
//biz hepsini main dosyaya include edelim burada hepsi birbirini görür

//PRAGMA ONCE >> bu da şu demek o dosyayı sadece bir kere include et daha fazla etme demek
//pragma once ile eş değer başka bir kullanımda var >> kutuphane adlı header dosyayına bak 




//-----------------------------------------------------------------
#include <iostream>
#include <string>

#include "test.h"
#include "kutuphane.h"
using namespace std;
//-----------------------------------------------------------------


//-----------------------------------------------------------------
int main()
{
    cout<<topla(10,10)<<endl;
}

//-----------------------------------------------------------------


#include <iostream>
#include <conio.h>
  
using namespace std; 
string convertRomawi(int n);


main()  
{  
    int n=0;
    awal: system("cls");
    cout<<"Input Value: ";
    cin>>n;
    cout<<"=============================================\n"
    	<<" Roman Numeral Covert | "<<n<<" = "<<convertRomawi(n)<<endl
    	<<"=============================================\n";
    
    cout<<"\nClick Enter to back";
    getch();
    goto awal;
}  

string convertRomawi(int n){
    string angkaRomawi[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int nilai[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string res = "";
    for (auto int i = 0; i < 13; ++i)
    {
        while(n - nilai[i] >= 0)
        {
            res += angkaRomawi[i];
            n -= nilai[i];
        }
    }
    return res;
}

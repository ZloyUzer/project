#include <iostream> 
#include <string>             
//#include <vector>
//#include <algorithm>
//#include <cmath>
using namespace std;
int main()                          
{  
	cout << "Vvedite imya adresata\n";
	string f_name;
	cin >> f_name;
	int age{-1};
	cout << "Vvedite vozrast adresata\n";
	cin >> age;
	string s_name;
	cout << "Vvedite ima druga (V vinitelnom padeje)\n";
	cin >> s_name;	
	char f_sex{0};
	cout << "Vvedite pol druga (m - mujchina, f - jenshina)\n";
	cin >> f_sex;

	cout << "\nPrivet " << f_name <<".\nKak tvoi dela? U menya vse okey.\n";	
	cout << "Videl li ty " << s_name << "?\n";
	if (f_sex =='m') cout << "Esli uvidish " << s_name << " pereday emy chtobi pozvonil\n";
	if (f_sex == 'f') cout << "Esli uvidish " << s_name << " pereday ey chtobi pozvonila\n";
	cout << "Ya slishal ty nedavno otmetil svoy " << age << " den rojdenie\n";
	if (age <= 0 || age >=110) cout << "Ty shutish?\n";
	if (age > 0 && age <=12) cout << "Na sleduushiy god tebe ispolnitsya " << ++age << "\n";
	if (age == 18) cout << "Na sleduushiy god ty snojesh golosovat\n";
	if (age >= 60) cout << "Ya nadeus ty ne skuchaesh na pensii\n";
	cout << "Iskrene tvoy\n______________________\n______________________\n Anton";
    return 0;                       
}                                   
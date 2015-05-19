//2.1 pass
//2.2 pass
//2.3 pass

//2.4 my development environment is 64bit windows, there is no way to test it
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	unsigned short a = 1;
//	cout << "sieze of a is " << sizeof(a) << endl;
//	a = 1000;
//	cout << a;
//	getchar();
//}

//2.5 pass
//2.6 pass

//2.7 2.8 2.9
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char c = 'a';
//	char b = L'c';
//	cout << sizeof(c) << endl;
//	cout << sizeof(L'c') << endl;
//	//cout << "c"L"a" << endl;
//	cout << 1E-3F << endl;
//	cout << "who goes with F\145rgus?\012" << endl;
//	getchar();
//}

//2.10
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "\062\115" << endl;
//	cout << "\62\t" << "abc";
//	getchar();
//}


//2.11
#include <iostream>
using namespace std;

void main() 
{
	double base, exponent;
	cin >> base >> exponent;
	double res = 1;
	if (exponent == 0){
		return;
	}

	for (int i = 1; i <= exponent; i++){
		res *= base;
	}
	cout << res;
	cin >> res;
	getchar();
}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	getchar();
//}
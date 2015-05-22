//4.1
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const unsigned buf_size = 1024;
//  char str[4] = "helloboy";
//	int ia[buf_size] ;
//	getchar();
//}

//4.2 4.3 4.4 4.5 pass
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int ia[3] = { 3, 2, 4 };
//	vector<int> ivec = { 7, 8, 2 };
//	cout << ivec[0] << endl;
//	//int ia1[] ia;
//	//int ia3[] = ivec;
//	getchar();
//}

//4.6 array bounds overflow

//4.7
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	const size_t array_size = 5;
//	int arr01[array_size] = { 3, 2, 54324, 23, 132 };
//	int arr02[array_size];
//	for (int i = 0; i < array_size; i++){
//		arr02[i] = arr01[i];
//	}
//	cout << "arr02[3] = " << arr02[3] << endl;
//
//	vector<int> ivec01(5, 7);
//	vector<int> ivec02(ivec01);
//	cout << ivec02[3] << endl;
//	getchar();
//}

//4.8
//#include <iostream>
//#include <vector>
//using namespace std;
//#define GET_ARRAY_LEN(arr, len){ len = sizeof(arr) / sizeof(arr[0]);}
//
//int main()
//{
//	bool equal_array = true;
//	bool identical_vector = true;
//	int arr01[] = { 3, 2, 54324, 23, 132 };
//	int arr02[] = { 32, 32, 123, 11 };
//	int len01 = 0;
//	int len02 = 0;
//	GET_ARRAY_LEN(arr01, len01);
//	GET_ARRAY_LEN(arr02, len02);
//	//	int i = 0, n = 0;
//	//	while (arr[i] != NULL || arr02[i] != NULL){
//	//		if (arr01[i] != arr02[i])
//	//}
//
//	cout << "arr02[3] = " << arr02[3] << endl;
//	if (len01 != len02){
//		equal_array = false;
//	}
//	else {
//		for (int i = 0; i < len01; i++){
//			if (arr02[i] == arr01[i]){
//				equal_array = false;
//			}
//		}
//	}
//	vector<int> ivec01(5, 7);
//	vector<int> ivec03(5, 7);
//	vector<int> ivec02(ivec01);
//	if (ivec01 != ivec03){ // you can also use equal(ivec01.b
//		identical_vector = false;
//	}	
//	mismatch(ivec01, ivec03);
//	cout << equal_array<< endl;
//	cout << identical_vector << endl;
//	getchar();
//}


//4.9
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const size_t array_size = 10;
//	int arr[array_size];
//	for (int i = 0; i < array_size; i++){
//		arr[i] = i + 1;
//	}
//	getchar();
//}

//4.10 pass 

//4.11
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int *ip;
//	string s, *sp = 0;
//
//
//	const int i = 0, *p = i;
//	string *p = NULL;
//	getchar();
//}

//4.12 

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int *i;
//	if ( i = NULL)
//		cout << *i << endl;
//	getchar();
//}

//4.13 pass
//4.14
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int val = 10, val02 = 12;
//	int *ri = &val;
//	int *ri2 = &val02;
//	ri = ri2;
//	cout << "*ri" << *ri << endl;
//	ri = &val;
//	*ri = 99;
//	cout << "val = " << val << endl;
//	getchar();
//}

//4.15 pass

//4.16  pass

//4.17 pass
//4.18
//#include <iostream>
//using namespace std;
//#include "Chapter04.h"
//int main()
//{
//	int abc[] = { 240u, 23, 123, 23, 123, -6 };
//	int len = 0;
//	GET_ARRAY_LEN(abc, len);
//	for (int i = 0; i < len; i++){
//		abc[i] = 0;
//	}
//	getchar();
//}

//4.19 4.20 4.21 pass

//4.22pass

//4.23
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const char ca[] = { 'h', 'e', 'l', 'l', 'o' };
//	const char *cp = ca;
//	while (*cp){
//		cout << *cp << endl;
//		++cp;
//	}
//	//won't end at the end of the array;
//	getchar();
//}

//4.24 pass

//4.25
//#include <iostream>
//#include <string>
//#include <cstring>
//int CompareCstring(char *str01, char *str02);
//using namespace std;
//
//int main()
//{
//	char str01[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
//	char str02[] = { 'h', 'e', 'l', 'l', 'o', 'e', '\0' };
//	char* str03 = "hello";
//	int result;
//	result = CompareCstring(str01, str02);
//	cout << result << endl;
//	int result02 = CompareCstring(str01, str03);
//	getchar();
//
//	//string can be directly compared
//
//
//}
//int CompareCstring(char *str01, char *str02){
//	//validate the input
//	int resutl = 0;
//	int i = 0;
//	while (str01[i] != NULL){
//		if (str02[i] == NULL){
//			return 1;
//		}
//		else if (str02[i] != NULL){
//			if (str01[i] - str02[i] > 0){
//				return 1;
//			}
//			else if (str01[i] - str02[i] < 0){
//				return -1;
//			}
//		}
//		i++;
//	}
//	if (str01[i] == str02[i]){
//		return 0;
//	}
//	else {
//		return -1;
//	}
//}
//

//4.26
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string abc;
//	cin >> abc;
//	char* cstr = new char[abc.length + 1];
//	int i = 0;
//	for (; i < abc.length(); i++){
//		cstr[i] = abc[i];
//	}
//	cstr[i] = '\0';
//
//}

//4.27 pass delete [] pa

//4.28
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> ivec;
//	int i;
//	while (cin >> i){
//		ivec.push_back(i);
//	}
//	int len = ivec.size();
//	int *iarr = new int[len];
//	for (int n = 0; n < len; n++){
//		iarr[n] = ivec[n];
//	}
//	getchar();
//}
//

//4.29
//#include <iostream>
//#include <string>
//#include <time.h>
//using namespace std;
//
//int main()
//{
//	clock_t start, middle, end;
//	start = clock();
//
//	double time01, time02;
//
//	const char *pc = "a very long literal string";
//	const size_t len = strlen(pc);
//
//	for (size_t ix = 0; ix != 1000000; ++ix){
//		char *pc2 = new char[len + 1];
//		strcpy(pc2, pc);
//		if (strcmp(pc2, pc))
//			;
//		delete[] pc2;
//	}
//	//middle = clock();
//
//	string str("a very long literal string");
//	for (int ix = 0; ix != 1000000; ++ix){
//		string str2 = str;
//		if (str != str2)
//			;
//
//	}
//	end = clock();
//	cout << double(end - start) << endl;
//	time01 = end - start;
//
//	
//	getchar();
//
//}

//4.30
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	char *cstr01 = "what the fuck!";
//	char *cstr02 = "back to maine";
//	int len = strlen(cstr01) + strlen(cstr02) + 1;
//	char *cstr03 = new char[len];
//	strcpy(cstr03, cstr01);
//	cstr03 = strcat(cstr03, cstr02);
//	cout << cstr03 << endl;
//  delete [] cstr03;
//	
//
//	string str01 = "what the fuck!";
//	string str02 = "back to maine";
//	string str03 = str01 + str02;

//	getchar();
//}

//4.31
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <exception>
//using namespace std;
////
////int main()
////{
////
////	try{
////		//one way
////		//char *arr = new char[10];
////		//cin >> arr;
////
////		//getchar();
////		//cout << arr[11];// i won't pop any error
////
////		//another
////		string str;
////		cin >> str;
////		int len = str.length();
////		char *arr = new char[len + 1];
////		strncpy(arr, str.c_str(), len - 1);
////		arr[len] = '\0';
////		cout << arr[len - 1] << endl;
////		cout << "null" << arr[len] << endl;
////
////		
////	}
////	catch (exception ex){
////		cout << ex.what();
////	}
////	getchar();
////}


//4.32
//#include <iostream>
//#include <cstring>
//#include <exception>
//#include <vector>
//using namespace std;
//
//int main()
//{
//
//	try{
//		int arr[] = { 1, 4, 9, 3 };
//		vector<int> ivec(arr, arr + 4);
//		cout << ivec[3];
//
//	}
//	catch (exception ex){
//		cout << ex.what();
//	}
//	getchar();
//}

//4.33
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <exception>
//using namespace std;
//
//int main()
//{
//
//	try{
//		//one way
//		//vector<int> ivec(4, 98);
//		//int *iarr = new int[ivec.capacity()];
//		//for (int i = 0; i < ivec.capacity(); i++){
//		//	iarr[i] = ivec[i];
//
//		//another way
//		vector<int> ivec(4, 98);
//		int *iarr = new int[ivec.capacity()];
//		int ix = 0;
//		for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++; ix ++){
//			iarr[ix] = *iter;
//		}
//		delete[] iarr;
//		cout << iarr[2];
//
//	}
//	catch (exception ex){
//		cout << ex.what();
//	}
//	getchar();
//}


//4.34  if the exercise seems not worth doing ,then you misunderstood the meaning of the author
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//#include <exception>
//using namespace std;
//
//
//int main()
//{
//
//	try{
//		string str;
//		cin >> str;
//		vector<string> strvec;
//		while (cin >> str){
//			strvec.push_back(str);
//		}
//		char **strarr = new char*[strvec.size()];
//		int i = 0;
//		for (vector<string>::iterator iter = strvec.begin(); iter != strvec.end(); iter++, i++){
//			char *achararr = new char[(*iter).size() + 1];
//			strcpy(achararr, (*iter).c_str());
//			strarr[i] = achararr;
//		}
//		//cout << strarr[5];
//		for (int i = 0; i < strvec.size(); i++){
//			delete [] strarr[i];
//		}
//		delete[] strarr;
//	}
//	catch (exception ex){
//		cout << ex.what();
//	}
//	getchar();
//}
//


//4.36
//#include <iostream>
//#include <string>
//
//using namespace std;
//void main(){
//	int ia[3][4] = { { 0, 3, 4, 9 }, { 0 }, { 7, 2 } };
//
//	for (int m = 0; m < 3; m++){
//		for (int n = 0; n < 3; n++){
//			cout << ia[m][n] << "    ";
//		}
//		cout << endl;
//	}
//	getchar();
//}
#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "uk_UA");
    
    int num = 3;
    char num2 = '2';
    int *p = &num;
    
    int num3 = static_cast <int> (num2);
    
//    cout << p << endl;
//
//    int* pp = p + num * sizeof(int);
//
//    cout << p << endl;
//
//    cout << sizeof(int) << endl << sizeof(int*) << endl;

    
    auto a = &num - &num3;

    cout << &num << endl << &num3 << typeid(a).name();
    
    cout << a << endl;
    
    return 0;
}

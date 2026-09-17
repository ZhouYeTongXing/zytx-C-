#include <iostream>
#include <climits> // 包含各种数据类型的极值宏
using namespace std;

int main() {
    int d;
    cin >> d;
    switch(d) {
        case 1: cout << "char " << sizeof(char) << " " << CHAR_MIN << " " << CHAR_MAX; break;
        case 2: cout << "unsigned char " << sizeof(unsigned char) << " " << 0 << " " << UCHAR_MAX; break;
        case 3: cout << "short " << sizeof(short) << " " << SHRT_MIN << " " << SHRT_MAX; break;
        case 4: cout << "unsigned short " << sizeof(unsigned short) << " " << 0 << " " << USHRT_MAX; break;
        case 5: cout << "int " << sizeof(int) << " " << INT_MIN << " " << INT_MAX; break;
        case 6: cout << "unsigned int " << sizeof(unsigned int) << " " << 0 << " " << UINT_MAX; break;
        case 7: cout << "long " << sizeof(long) << " " << LONG_MIN << " " << LONG_MAX; break;
        case 8: cout << "unsigned long " << sizeof(unsigned long) << " " << 0 << " " << ULONG_MAX; break;
        case 9: cout << "long long " << sizeof(long long) << " " << LLONG_MIN << " " << LLONG_MAX; break;
        case 10: cout << "unsigned long long " << sizeof(unsigned long long) << " " << 0 << " " << ULLONG_MAX; break;
    }
    return 0;
}

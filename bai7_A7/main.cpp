#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    int dem = 0;
    string copy_str2 = str2;
    int length_str1 = sizeof(str1);
    while(strcmp(str1,copy_str2) < 0 )
    {
        dem++;
        copy_str2.erase(0,length_str1);
    }
    cout << dem;
    return 0;
}

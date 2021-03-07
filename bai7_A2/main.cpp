#include <iostream>

using namespace std;
int *f(int *A)
{
    return A;
}
int main()
{
    int *A;
    cout << sizeof(A) << endl;
    cout << sizeof(f(A));
    return 0;
}

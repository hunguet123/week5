#include <iostream>

using namespace std;
int count_even(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a+i) % 2 == 0) count++;
    }
    return count;
}
int main()
{
    int *a = new int [10];
    int n = 10;
    for (int i = 0; i < n; i++)
        a[i] = i;
    cout << count_even(a,5); // 5 phan tu dau;
    cout << endl;
    cout << count_even(a+n-5, 5);
    return 0;
}

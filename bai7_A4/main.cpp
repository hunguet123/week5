#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int *a = new int[10];
    ifstream file ("nhiphan.txt");
    if (!file) cout << "loi";
    else {
            int i = 0;
    while (!file.eof())
    {
        file >> a[i];
        cout << a[i] << " ";
        i++;
    }
    }
    file.close();
    return 0;
}

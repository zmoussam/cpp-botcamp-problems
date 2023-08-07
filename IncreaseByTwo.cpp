#include <iostream>
#include <vector>

using namespace std;
int main()
{
    short i;
    cin >> i;
    std::vector<short> v(i);

    for (int j = 0; j < i; j++)
    {
        cin >> v[j];
        if (v[j] >= 0)
            v[j] += 2;
    }
    for (int j = 0; j < i; j++)
        std::cout << v[j] << " ";
    std::cout << endl;

}
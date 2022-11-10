#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int n)
{
    a[n] = Low + rand() % (High-Low+1);
    if (n<size-1)
        Create(a, size, Low, High, n+1);
}
void Print(int* a, const int size, int n)
{
    cout << a[n] << " ";
    if (n<size-1)
            Print(a, size, n+1);
    else
    cout << endl;
}
int Max(int* a, const int size, int n, int max)
{
    if (a[n]>max)
        max=a[n];
    if (n<size-1)
        return Max(a, size, n+1, max);
        else
            return max;
}
int Min(int* a, const int size, int n, int min)
{
    if (a[n]<min)
        min=a[n];
    if (n<size-1)
        return Min(a, size, n+1, min);
        else
            return min;
}
int main()
{
srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисе
    const int n=5;
    int a[n];
    int Low = -100;
    int High = 100;
    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    cout << "max = " << Max(a, n, 1, a[0]) << endl;
    cout << "min = " << Min(a, n, 1, a[0]) << endl;
    return 0;
    
}

#include <iostream>
using namespace std;
int main()
{
    int A[100], B[100], C[200];
    int n, m, k = 0;
    cout << "Introduceti numarul de elemente corespunzator vectorului A: "; cin >> n;
    cout << "Introduceti elementele vectorului A: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Introduceti numarul de elemente corespunzator vectorului B: "; cin >> m;
    cout << "Introduceti elementele vectorului B: ";
    for(int i = 0; i < m; i++)
        cin >> B[i];
    int i = 0, j = 0;
    while(i < n && j < m)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    if(i <= n)
    {
        for(int p = i; p < n; p++)
        {
            C[k] = A[p];
            k++;
        }
    }
    if(j <= m)
    {
        for(int p = j; p < m; p++)
        {
            C[k] = B[p];
            k++;
        }
    }
    for(int p = 0; p < k; p++)
        cout << C[p] << " ";
    return 0;
}

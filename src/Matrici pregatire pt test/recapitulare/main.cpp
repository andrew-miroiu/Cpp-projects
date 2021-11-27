#include <iostream>
#include <fstream>

using namespace std;
fstream f("yes.txt");

int main()
{
    int a[100][100], i, j, m, n, k, x;
    cout << "Nr de linii = ";
    cin >> m;
    cout << "Nr de coloane = ";
    cin >> n;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            f >> a[i][j];
        }
    }


    for(i = 0; i < m-1; i++)
    {
        k = 2;
        if(a[i][k] % 2 == 0)
        {
            for(x = i+1; x < m; x++)
            {

                if(a[x][k] % 2 == 0)
                {

                    if(a[i][k] > a[x][k])
                    {
                        int aux = a[x][k];
                        a[x][k] = a[i][k];
                        a[i][k] = aux;
                    }
                }
            }
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

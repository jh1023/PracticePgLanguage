#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    int arr[100][100] = { 0, };
    int arr2[100][100] = { 0, };
    int arr3[100][100] = { 0, };
    
	cin >> n >> m;
    
	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
    
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];

        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< arr3[i][j]<<" ";
        }
        cout << '\n';
    }


    return 0;
}

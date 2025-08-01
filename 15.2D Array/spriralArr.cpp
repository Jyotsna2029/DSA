#include <iostream>
using namespace std;
// void print(int matrix[][4], int n, int m){
//     for(int i = 0; i< n; i++){
//         for(int j = 0; j< m; j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
void spiral(int matrix[][4], int n, int m)
{
    int srow = 0, scol = 0;
    ;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    { 
        // top;
        for (int j = scol; j <= ecol; j++)
        {
            cout << matrix[srow][j] << " ";
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << matrix[i][erow] << " ";
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if(srow== erow) break;
            cout << matrix[erow][j] << " ";
        }

        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if(scol == ecol) break;
            cout << matrix[i][scol] << " ";
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
}
int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral(matrix, 4, 4);
    // print(matrix,4,4);
    return 0;
}
#include <iostream>

using namespace std;

void input(char arr[][10], int m, int n) {
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
}

void output(char arr[][10], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

int dfs(char arr[][10], int m, int n, int x, int y, int endX, int endY, bool visited[][10])
{
    if (x < 0 || y < 0 || x >= m || y >= n || visited[x][y] || (arr[x][y] != '*' && arr[x][y] != '.'))
        return 0;

    visited[x][y] = true;
    if(x == endX && y == endY)
        return 0;
    
    int count;
    if (arr[x][y] == '*')
    {
        cout << x << " - " << y << endl;
        count = 1;
    }
    else
    {
        cout << x << " - " << y << ": ";
        cout << arr[x][y] << endl;
        count = 0;
    }

    count += dfs(arr, m, n, x - 1, y, endX, endY, visited);
    count += dfs(arr, m, n, x, y - 1, endX, endY, visited);
    count += dfs(arr, m, n, x + 1, y, endX, endY, visited);
    count += dfs(arr, m, n, x, y + 1, endX, endY, visited);

    return count;
}

int solve4B(char arr[][10], int m, int n, int startX, int startY, int endX, int endY)
{
    bool visited[10][10];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            visited[i][j] = false;
        }

    return dfs(arr, m, n, startX, startY, endX, endY, visited);
}

int main() {
    int m, n;
    cin >> m >> n;

    char arr[10][10];

    input(arr, m, n);
    cout << "\n\n";
    output(arr, m, n);
    cout << "\n\n";

    cout << solve4B(arr, m, n, 1, 6, 5, 2);
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
  int m=3, n=3, i, j, d, row_top, row_bot, col_left, col_right, start, count = 0;
  //   int tot = 1
  //cin >> m >> n;
  int a[m][n] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };
  //   for (i = 0; i < m; i++) {
  //     for (j = 0; j < n; j++) {
  //       a[i][j] = tot;
  //       tot++;
  //     }
  //   }
  //   for (i = 0; i < m; i++) {
  //     for (j = 0; j < n; j++) {
  //       cout << a[i][j] << " ";
  //     }
  //     cout << endl;
  //   }
  /* for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  } */
  i = -1, j = 0, d = 0, start = 1;
  row_top = -1, row_bot = m;
  col_left = 0, col_right = n;
  while (1) {
    while (1) {
      i += (!(d & 1)) * (1 - 2 * (d >> 1));
      j += (d & 1) * (1 - 2 * (d >> 1));
      if (!((!(d & 1) && i < row_bot && i > row_top) ||
            ((d & 1) && j < col_right && j > col_left)))
        break;
      cout << a[i][j] << ", ";
      count++;
    }
    if (count == (m * n))
      break;
    i -= (!(d & 1)) * (1 - 2 * (d >> 1));
    j -= (d & 1) * (1 - 2 * (d >> 1));
    row_top += !(d ^ 2), row_bot -= !(d ^ 0);
    col_left += !(d ^ 3), col_right -= !(d ^ 1);
    d = (d + 1) % 4;
  }
  cout << "END";
  return 0;
}
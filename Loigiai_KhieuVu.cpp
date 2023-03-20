#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n); // sắp xếp chiều cao của các bạn nam tăng dần
    sort(b, b + m); // sắp xếp chiều cao của các bạn nữ tăng dần
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    { // duyệt qua các bạn nam và nữ
        if (a[i] > b[j])
        {          // nếu chiều cao của bạn nam lớn hơn chiều cao của bạn nữ
            i++;   // tăng chỉ số của bạn nam lên 1
            j++;   // tăng chỉ số của bạn nữ lên 1
            cnt++; // tăng số lượng cặp đôi lên 1
        }
        else
        {        // nếu chiều cao của bạn nam không lớn hơn chiều cao của bạn nữ
            i++; // tăng chỉ số của bạn nam lên 1
        }
    }
    cout << cnt << endl; // in ra số lượng cặp đôi
    return 0;
}
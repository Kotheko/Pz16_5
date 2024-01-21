#include <iostream>
#include <time.h>

int main()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    const int N = 8;
    int arr[N][N];
    int RowNumber = buf.tm_mday % N;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = i + j;

            if (i == RowNumber)
            {
                sum += arr[i][j];
            }

            std::cout << arr[i][j] << "  ";
        }

        std::cout << std::endl;
    }

    std::cout << sum;
}
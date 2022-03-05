#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>


int main()
{
    const int N = 10;

    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = i + j;
            std::cout << a[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);

    int sum = 0, buffer;

    buffer = N % timeinfo->tm_mday;

    for (int i = 0; i < N; i++) {
        sum += a[buffer][i];
    }

    std::cout << "Summa = " << sum << std::endl;

}

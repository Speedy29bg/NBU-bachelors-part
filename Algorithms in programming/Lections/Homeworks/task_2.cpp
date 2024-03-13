#include <iostream>

int main ()
{
    int M, N;

    std::cin >> M >> N;
    if (M < 1 || N < 1 || M > N)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    for (int Br = M; Br <= N; Br++)
    {
        for (int Bc = Br; Bc <= N; Bc++)
        {
            int A = Br, B = Bc;
            while (B != 0)
            {
                int Temp = B;
                B = A % B;
                A = Temp;
            }
            if (A == 1)
            {
                std::cout << Br << " " << Bc << std::endl;
            }
        }
    
    }
    return 0;
}
// ==========================================================================
// #2739
// 링크 : https://www.acmicpc.net/problem/2739
// 문제 : N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.
//        출력 형식에 맞춰서 출력하면 된다.
// 입력 : 첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
// 출력 : 출력형식과 같게 N*1부터 N*9까지 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// void Multiply(int n)
// {
//     for(int i=0; i < 9; i++)
//     {
//         cout<<n<<" * "<<i+1<<" = "<<n*(i+1)<<endl;
//     }
// }

// int main(void)
// {
//     int n(0);
//     cin>>n;
//     Multiply(n);

//     return 0;
// }

// ==========================================================================
// #10950
// 링크 : https://www.acmicpc.net/problem/10950
// 문제 : 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//        각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
// 출력 : 각 테스트 케이스마다 A+B를 출력한다.
// ==========================================================================
#include <iostream>

using namespace std;

void Add(int n)
{
    int* arr_A = new int[n];
    int* arr_B = new int[n]; //동적할당
    for(int i=0; i<n; i++) 
    {
        cin>>arr_A[i]>>arr_B[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr_A[i]+arr_B[i]<<endl;
    }
    delete[] arr_A;
    delete[] arr_B;
}

int main(void)
{
    int n(0);
    cin>>n;
    Add(n);

    return 0;
}
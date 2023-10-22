// ==========================================================================
// #10807
// 링크 : https://www.acmicpc.net/problem/10807
// 문제 : 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로
//       구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다.
//        입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
// 출력 : 첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
// ==========================================================================
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int n(0), v(0), find(0);
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     cin>>v;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==v)
//         {
//             find++;
//         }
//     }
//     cout<<find;
//     delete[] arr;

//     return 0;
// }

// ==========================================================================
// #10871
// 링크 : https://www.acmicpc.net/problem/10871
// 문제 : 정수 N개로 이루어진 수열 A와 정수 X가 주어진다.
//        이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)
//        둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고,
//        10,000보다 작거나 같은 정수이다.
// 출력 : X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다.
//        X보다 작은 수는 적어도 하나 존재한다.
// ==========================================================================
// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n(0), x(0);
//     cin>>n>>x;
//     int* arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//         if(arr[i]<x)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
//     delete[] arr;

//     return 0;
// }

// ==========================================================================
// #10818
// 링크 : https://www.acmicpc.net/problem/10818
// 문제 : N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를
//        공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고,
//        1,000,000보다 작거나 같은 정수이다.
// 출력 : 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
// ==========================================================================
#include <iostream>

using namespace std;

int main(void)
{
    int n(0);
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mini(0), maxi(0);
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            mini=arr[i];
            maxi=arr[i];
        }
        if(arr[i]<=mini)
        {
            mini=arr[i];
        }
        if(arr[i]>=maxi)
        {
            maxi=arr[i];
        }
    }

    cout<<mini<<" "<<maxi;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
        int T;
        cin >> T;
        while(T!=0)
        {
                int N;
                cin >> N;
                int I;
                cin >> I;
                int A[N];
                for(int i=0;i<N;i++)
                        cin >> A[i];
                cout << A[I] << endl;
                T--;
        }
        return 0;
}

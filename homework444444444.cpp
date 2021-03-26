#include <iostream>

using namespace std;

//int main()
//{
//    int a[10][10] = { 0, };
//
//    for (int i = 0; i < 10; i++)
//    {
//        a[i][0] = 1;
//    }
//    for (int i= 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            if (j > 0 && i > 0)
//            {
//                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//            }
//            if (a[i][j] > 0)
//            {
//                cout << a[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
//    
//
//    int n;
//    cin >> n;
//
//    for (int line = 0; line < n; line++)
//    {
//        int c = 1;
//        for (int i = 1; i <= line; i++)
//        {
//            cout << c << " ";
//            c = c * (line - i) / i;
//        }
//        cout << endl;
//    }
//
//    char name[2][5];
//    char temp;
//    int leng = 5;
//    for (int i = 0; i < leng; i++)
//    {
//        cin >> name[1][i];
//    }
//    for (int i = 0; i < leng/2; i++)
//    {
//        temp = name[1][i];
//        name[1][i] = name[1][leng - i - 1];
//        name[1][leng - i - 1] = temp;
//        
//    }
//    for (int i = 0; i < leng; i++)
//    {
//        cout << name[1][i];
//
//    }
//}

//int factorial(int n)
//{
//    if (n == 0)
//        return 1;
//    else
//        return n * factorial(n - 1);
//}
//int main()
//{
//    int n;
//    cin >> n;
//    cout << factorial(n) << endl;
//    return 0;
//}
//int gaus(int n)
//{
//	if (n == 100)
//		return n;
//	else
//		return n + gaus(n +1);
//}
//
//int main()
//{
//	cout << gaus(1) << endl;
//	return 0;
//}
//int main()
//{
//	int n;
//	int a =0;
//	cin >> n;
//	if (n == 1)
//		a = 1;
//	else
//	{
//		a = n * (n - 1);
//		while (true)
//		{
//			n--;
//			if (n == 1)
//				break;
//			else
//				a*=(n - 1);
//
//		}
//	}
//	cout << a << endl;
//}
//long pibo(long n)
//{
//	int one = 1;
//	int two = 2;
//
//	if (n == 1)
//		return one;
//	else if (n == 2)
//		return two;
//	else
//	{
//		return pibo(n - 1) + pibo(n - 2);
//	}
//}
//int main()
//{
//	long n;
//	cin >> n;
//
//	cout << pibo(n) << endl;
//}
int gaus(int n,int maxNum)
{
	if (n == maxNum)
		return n;
	else
		return n + gaus(n +1,maxNum);
}

int main()
{
	int num;
	cin >> num;
	cout << gaus(1,num) << endl;
	return 0;
}
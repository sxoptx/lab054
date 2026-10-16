#include <iostream>
#include <cmath>
using namespace std;

double f(const int k)
{
	return 1.0 / pow(2 * k + 1, 2);
}

double S0(const int K, const int N) //ітераційний варіант
{
	double s = 0;
	for (int k = K; k <= N; k++)
		s += f(k);
	return s;
}
double S1(const int K, const int N, const int k) //рекурсія на підйомі, k зростає 
{
	if (k > N)
		return 0;
	else
		return f(k) + S1(K, N, k + 1);
}
double S2(const int K, const int N, const int k) //рекурсія на підйомі, k спадає
{
	if (k < K)
		return 0;
	else
		return f(k) + S2(K, N, k - 1);
}
double S3(const int K, const int N, const int k, double t) //рекурсія на спуску, k зростає
{
	t = t + f(k);
	if (k >= N)
		return t;
	else
		return S3(K, N, k + 1, t);
}
double S4(const int K, const int N, const int k, double t) //рекурсія на спуску, k спадає
{
	t = t + f(k);
	if (k <= K)
		return t;
	else
		return S4(K, N, k - 1, t);
}
int main()
{
	int N;
	const int K = 1;
	cout << "N = "; cin >> N;

	cout << "(iter)        S0 = " << S0(K, N)       << endl;
	cout << "(rec up ++)   S1 = " << S1(K, N, K)    << endl;
	cout << "(rec up --)   S2 = " << S2(K, N, N)    << endl;
	cout << "(rec down ++) S3 = " << S3(K, N, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, N, N, 0) << endl;

	return 0;
}
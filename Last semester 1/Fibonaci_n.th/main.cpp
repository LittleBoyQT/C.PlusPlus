#include <iostream>

using namespace std;

int F(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;

    return F(n-1)+F(n-2);
}
int main()
{
    int n,r;

    cout << "Input n'th fibonaci number you want to find : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        r = F(i);
    }

    cout << "Result: " << r;
}

/*
int fibo(int n)
{
	int s=0, a=0 ,b=1;
	for(int i=2; i<=n; ++i)
	{
		s=a+b;
		a=b;
		b=s;
	}
	return s;
}
int main()
{
	int n, a,b,s;
	cin>> n;
	cout<< fibo(n);
	return 0;
}
*/

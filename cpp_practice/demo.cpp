//In this challenge, we practice reading input from stdin and printing output to stdout.
//In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout
//Task 2:
//Read  numbers from stdin and print their sum to stdout.





#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cin>>a>>b>>c;

	int sum= a+b+c;

    cout<<"sum: "<<sum<<endl;

    return 0;
}
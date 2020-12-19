//Task3


// Input Format

//Input consists of the following space-separated values: int, long, char, float, and double, respectively.

//Output Format
//Print each element on a new line in the same order it was received as input. 
//Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.







#include<bits/stdc++.h>

using namespace std;
int main() 

{
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    scanf("%d %ld %c %f %lf",&a,&b, &c, &d, &e);
    
    printf("%d \n", a );
    printf(" %ld \n", b );
    printf("%c \n",  c );
    printf(" %f \n",  d);
    printf(" %lf \n", e);
    
    
    return 0;
}

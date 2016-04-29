#include <iostream>

using namespace std;

int s(int a);
int gcd(int a,int b);
int lcm(int a,int b);

int main()
{ int n,a,b;
  cout << "input a number: ";
  cin >> n;
  cout << "n!=" << s(n) << endl;
  cout << "input two number:";
  cin >> a >> b;
  cout << "gcd=" << gcd(a,b) << endl;
  cout << "lcm=" << lcm(a,b) << endl;

  return 0;
}
int s( int a)
{ if( a==1 )
    { return 1;
    }
    else
    { return (s(a-1)*a);
    }
}

int gcd(int a,int b)
{ int c=0;
  c=a%b;
  if ( c==0 )
     { return b;
     }
  else
     { return gcd(b,c);
     }
}

int lcm(int a,int b)
{ return (a*b/gcd(a,b));
}


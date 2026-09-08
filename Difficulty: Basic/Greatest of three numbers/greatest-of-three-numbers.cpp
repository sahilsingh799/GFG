#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // code here
    if(a>b){cout<< a;}
    else if(b>a){cout<< b;}
    else if(c>a){cout<< c;}
    else if(a>c){cout<< a;}
    else if(c>b){cout<< c;}
    else if(b>c){cout<< c;}
    return 0;
}

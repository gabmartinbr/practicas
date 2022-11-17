//triangle
/*#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) cout << '*';
        cout << endl;
    }
}*/


//log
/*
#include <iostream>
using namespace std;

int main () {
	int a,b;
    while (cin >> a) {
        cin >> b;
        int cont = 0, r = 1; 
        while (b >= r) {
            r*= a;
            cont++;
        }
        cout << cont-1 << endl;
    }
}
*/


//rombo
/*
#include <iostream>
using namespace std;

int main () {
	int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) cout << ' ';
        for (int j = 0; j < i*2-1; j++) cout << '*';
        cout << endl;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) cout << ' ';
        for (int j = 0; j < (n-i)*2-1; j++) cout << '*';
        cout << endl;
    }
}
*/


//collatz
/*
#include <iostream>
using namespace std;

int main () {
	int n;
    while (cin >> n) {
        int cont = 0;
        while (n!=1) {
            cont++;
            if (n%2==0) n/=2;
            else n = 3*n +1;
        }
        cout << cont << endl;
    }
}
*/

#include <iostream>
using namespace std;

long long product(long long n){
  while (cin >> n) {
        long long res = 1, m = n;
        if (n < 10) cout << "El producto de los dígitos es " << n << " es " << n << '.' << endl;
        while (m >= 10) {
            res = 1;
            while (m >= 1) {
                res *= m%10;
                m/=10;
            }
            cout << "El producto de los dígitos es " << n << " es " << res << '.' << endl;
            n = res;
            m = n;
        }
        cout << "----------" << endl;
    }

}

int main () {
	long long n;
  cout << product (n);
}
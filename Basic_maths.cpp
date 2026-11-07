#include<bits/stdc++.h>
using namespace std;
/*int countDigits(int n) {
    int lastDigit, count = 0;
    while (n > 0) {
        lastDigit = n % 10;
        count += 1;
        n = n / 10;
    }
    return count;

}
//TC is log10(N)
int reverseNum(int n) {
    int reverse = 0, lastDigit;
    while (n > 0) {
        lastDigit = n % 10;
        n = n / 10;
        reverse = reverse * 10 + lastDigit;

    }
    return reverse;
}
bool palindrome(int n)
{
    int reverse = 0, og, remainder;
    og = n;
    while (n > 0) {
        remainder = n % 10;
        n = n / 10;
        reverse = reverse * 10 + remainder;
    }
    if (reverse == og) return true;
    else return false;
}
bool armstrong(int n) {
    int lastDigit, x = 0, og, countt = countDigits(n);
    og = n;
    while (n > 0) {
        lastDigit = n % 10;
        n = n / 10;
        x += pow(lastDigit, countt) ;
    }
    if (x == og) return true;
    else return false;
}
//armstrong mein har digit ko number of digits ke exp mein laake add krte h
//if it makes the entire number then it is -> armstrong
//eg 371=3^3+7^3+1^3=27+343+1
//eg 1634=1^4+6^4+3^4+4^4=1+1296+81+256
void printDivisors(int n) {
    //brute-force approach
    //TC=O(n)
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " " << endl;
    }

    //TC->O(sqrt(n))->for CP interviews->imp
    //use vector method becuase you dont know the size
    vector<int>v;
    for (int i = 1; i*i <= n; i++) {//improvement here->instead of i<=sqrt(n)

        if (n % i == 0) {
            v.push_back(i);
            if ((n / i) != i) {
                v.push_back(n / i);
            }
        }

    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    //---------or----------------------
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << "x" << n / i << "=" << n << endl;
        }


    }

}
bool primeNumbers(int n) {
    //brute-force approach->O(n)
    // int cnt = 0;
    // for (int i = 1; i <= n; i++) {
    //     if (n % i == 0) cnt++;
    // }
    // if (cnt == 2) return true;
    // else return false;

    //sqrt approach->O(sqrt(n))
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i) {
                cnt++;
            }
        }
    }
    if (cnt == 2) return true;
    else return false;

}
vector<int> Factors(int n1) {
    vector<int>v;
    for (int i = 1; i <= n1; i++) {
        if (n1 % i == 0) {
            v.push_back(i);
        }
    }
    return v;
}
void gcd(int n1, int n2) {
    //two brute-force methods
    //-------------------------------m1------------------------
    // int ans = 1;
    // vector<int>v1 = Factors(n1);
    // vector<int>v2 = Factors(n2);
    // for (auto x : v1) {
    //     for (auto y : v2) {
    //         if (x == y) {
    //             ans = x;
    //         }
    //     }
    // }
    // cout << ans << endl;
    //----------------------------m2---------------------------
    // int gcdd;
    // for (int i = 1; i <= max(n1, n2); i++) {
    //     for (int j = 1; j <= min(n1, n2); j++) {
    //         if (n1 % i == 0 && n2 % i == 0) {
    //             gcdd = i;
    //         }
    //     }
    // }
    // cout << gcdd << endl;
    //----------------------Euclidean Algorithm-----------------
    //gcd(n1,n2)=gcd(n1-n2,n2) where n1>n2
    //eg gcd(20,15)=gcd(5,15)
    //gcd(15,5)=gcd(10,5)
    //gcd(5,5)=gcd(0,5)->gcd=5->till one of them is zero


    //-------------------BUT----------------------------
    //a better version-> gcd(n1,n2)==gcd(n1%n2,n2) where n1>n2
    //till one of them is zero and the other one is gcd
    //code
    // while (n1 > 0 && n2 > 0) {
    //     if (n1 > n2) {
    //         n1 = n1 % n2;
    //     }
    //     else {
    //         n2 = n2 % n1;
    //     }
    // }
    // if (n1 == 0) cout << n2 << endl;
    // else cout << n1 << endl;
    //TC-> O(log phi(min(n1,n2))) ->where there is %,/ we get log
}*/


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n1;
        // int n2;
        cin >> n1;
        // cin >> n2;
        // gcd(n1, n2);
        // cout << primeNumbers(n) << endl;
        // cout << countDigits(n) << endl;
        //other way to count digits
        //int c = (int)(log10(n) + 1);
        // cout << reverseNum(n) << endl;
        // cout << palindrome(n) << endl;
        // cout << armstrong(n) << endl;
        // printDivisors(n);
    }


    return 0;
}
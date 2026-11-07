#include<iostream>
using namespace std;
//**************************patterns******************************
//void printpattern(int n) {
//  int i, j, k;
/*for (i = 1; i <= n; i++) {
    //space
    for (j = 1; j <= n - i ; j++) {
        cout << " ";
    }
    //star
    for (j = 1; j <= (2 * i - 1); j++) {
        cout << "*";
    }
    //space
    for (j = 1; j <= n - i ; j++) {
        cout << " ";
    }
    cout << endl;
}
*/



/*for (i = 1; i <= n; i++) {
    //space
    for (j = 1; j <= n - i ; j++) {
        cout << " ";
    }
    //star
    for (j = 1; j <= (2 * i - 1); j++) {
        cout << "*";
    }
    //space
    for (j = 1; j <= n - i ; j++) {
        cout << " ";
    }
    cout << endl;
}*/

/*for (k = n; k >= 1; k--) {
    //space
    for (j = 1; j <= n - k ; j++) {
        cout << " ";
    }
    //star
    for (j = (2 * k - 1); j >=  1; j--) {
        cout << "*";
    }
    //space
    for (j = 1; j <= n - k ; j++) {
        cout << " ";
    }
    cout << endl;
}*/

/*
int start = 1;
for (i = 0; i < n; i++) {
    if (i % 2 == 0) start = 1;
    else start = 0;
    for (j = 0; j <= i; j++) {
        cout << start;
        start = 1 - start;
    }
    cout << endl;
}*/
/*int start = 1;
for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
        cout << j;
    }
    for (j = 1; j <= 2 * (n - i); j++) {
        cout << " ";
    }

    for (j = i; j >= 1; j--) {
        cout << j;
    }
    cout << endl;
}*/
/*int num = 1;
for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
        cout << num << " ";
        num += 1;

    }
    cout << endl;
}*/
/*
for (i = 0; i < n; i ++) {
    for (char c = 'A'; c <= 'A' + i; c++) {
        cout << c ;
    }
    cout << endl;
}
for (i = n; i >= 0; i --) {
    for (char c = 'A'; c < 'A' + i; c++) {
        cout << c ;
    }
    cout << endl;
}*/
/*for (i = 0; i < n; i++) {
    char c = 'A' + i;
    for (j = 0; j <= i; j++) {
        cout << c;
    }
    cout << endl;
}*/
/*
for (i = 0; i < n; i++) {
    char c = 'A';
    for (j = 0; j < n - i; j++) {
        c = 'A' + j;
        cout << c;
    }
    cout << endl;
}*/
/*
for (i = 0; i < n; i++) {
    char c = 'A';
    //space
    for (j = 0; j < n - i - 1; j++) {
        cout << " ";
    }
    //character
    int breakpoint = (2 * i + 1) / 2;
    for (j = 1; j <= (2 * i + 1); j++) {
        cout << c;
        if (j <= breakpoint) c++;
        else c--;

    }
    cout << endl;
}*/
/*for (i = 0; i < n; i++) {
    for (char c = 'E' - i; c <= 'E'; c++) {
        cout << c;
    }
    cout << endl;
}*/
/*for (i = 0; i < n; i++) {
    for (j = 0; j < n - i ; j++) {
        cout << "*";
    }
    for (j = 1; j <= 2 * i ; j++) {
        cout << " ";
    }
    for (j = 0; j < n - i ; j++) {
        cout << "*";
    }
    cout << endl;
}
for (i = 0; i < n; i++) {
    for (j = 0; j <= i ; j++) {
        cout << "*";
    }
    for (j = 0; j <  2 * (n - i - 1); j++) {
        cout << " ";
    }
    for (j = 0; j < i + 1; j++) {
        cout << "*";
    }
    cout << endl;
}
*/
/*
for (i = 0; i < (n + 1) / 2; i++) {
    //stars
    for (j = 0; j <= i; j++) {
        cout << "*";
    }
    //space
    for (j = 0; j <= n - 2 * (i + 1); j ++) {
        cout << " ";
    }
    for (j = i; j >= 0; j--) {
        cout << "*";
    }
    cout << endl;
}
for (i = 0; i < (n - 1) / 2; i++) {
    //stars
    for (j = 0; j < (n - 1) / 2 - i; j++) {
        cout << "*";
    }
    //space
    for (j = 0; j <= 2 * i + 1; j++) {
        cout << " ";
    }
    //stars
    for (j = (n - 1) / 2 - i; j > 0; j--) {
        cout << "*";
    }
    cout << endl;
}
*/
/*
for (i = 0; i < n; i++) {
    //stars
    for (j = 0; j < n; j++) {
        if (i == 0 || j == 0 || i == n - 1 || j == n - 1) cout << "*";
        else cout << " ";
    }

    cout << endl;
}
*/
/*
for (i = 0; i < 2 * n - 1; i++) {
    for (j = 0; j < 2 * n - 1; j++) {
        int top = i;
        int left = j;
        int right = 2 * ( n - 1) - j;
        int down = 2 * (n - 1) - i;
        cout << (n - min(min(top, down), min(left, right)));
    }
    cout << endl;
}
*/
//}
//***************************************************************


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t ;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        printpattern(n);

    }
    return 0;
}


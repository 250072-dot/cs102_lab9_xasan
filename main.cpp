#include <iostream>
using namespace std;

    // problem 1
    void problem1(int n=10) {
      cout<<n<<endl;
        if (n == 0) return;
        problem1(n-1);
    }

    //problem 2
    void problem2(int n=50) {
      cout << n <<endl;
        if (n == 1) return;
        problem2(n-1);
    }
    //problem 3
   int problem3(int n) {
      if (n==0) return 0;
      return n+ problem3(n-1);
    }


  //problem 4
    int problem4(int n) {
        if (n == 1) return 1;
        return problem4(n-1)*n;
    }

  //problem 5

    int problem5(int n ,int d, int deg=0) {
        if (d==0) return 1;
        deg = n * problem5(n,d-1);
        return deg;
    }

  //problem 6
    float problem6(int n) {
        if (n==1) return 1;
        return (1./(n*n))+problem6(n-1);

    }

//problem 7

float problem7(int n) {
        if (n==1)return 1./3;
        return (1./(n*(n+2)))+problem7(n-1);
    }

//problem 8

int problem8(int n) {
        if (n==0) return 0;
        return (n%10)+problem8(n/10);
    }


//problem 9

int problem9(int a, int b) {
        if (a==0) return 0;

            return (a<0)? -(b+problem9(-a-1,b)): b+problem9(a-1,b);

    }

// extra problem
bool isPowerOfThree(int n) {
        if (n==0) return 0;
        if(n==1) return 1;
        if (n%3==0) return isPowerOfThree(n/3);
        else return 0;
    }




//
int even(int n) {
        if (n==0) return 0;
        if (n%2==0) {return 1+even(n/10);}
        else {return even(n/10);}
    }











int main() {
        cout<<even(222)<<endl;

    }
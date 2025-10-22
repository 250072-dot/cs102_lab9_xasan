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
   int problem3(int n,int sum = 0) {
      if (n==0) cout<<sum;
      return sum + problem3(n-1,sum);
    }


  //problem 4
    int problem4(int n) {
        if (n == 1) return 1;
        return problem4(n-1)*n;
    }

  //problem 5







int main() {
        cout<<problem4(5);
      []
    }
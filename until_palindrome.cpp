// C++ program to print the paindrome of given
#include <iostream>
using namespace std;

int checkPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return reverse;
}
int main()
{
    int n = 100;
    bool flag = true;
   // int dup = n;
    do{
       int check = checkPalindrome(n);
       if(check != n){
           n = n+check;
       }
       else{
           printf("the palindrome number is %d",n);
           flag = false;
       }
    }while(flag);
    return 0;
}

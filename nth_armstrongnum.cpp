//Nth armstrong number
#include<iostream>
#include <math.h>
#include<climits>
using namespace std;

int NthArmstrong(int n)
{
    int count = 0;
    for (int i = 1; i <= INT_MAX; i++) {
        int num = i, rem, digit = 0, sum = 0;

        num = i;

        // Find total digits in num
        digit = (int)log10(num) + 1;

        // Calculate sum of power of digits
        while (num > 0) {
            rem = num % 10;
            sum = sum + pow(rem, digit);
            num = num / 10;
        }
        // Check for Armstrong number
        if (i == sum)
            count++;
        if (count == n)
            return i;
    }
}
int main(){
   int n;
   cin>>n;
   if(n>=0 && n<10) cout<<"arm num is: "<<n<<endl;
   else{
       cout<<"arm num is: "<<NthArmstrong(n);
   }
   
   return 0;
}

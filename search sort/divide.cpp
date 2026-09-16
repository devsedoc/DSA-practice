#include <iostream>
using namespace std;
int main(){
    int divisor = 22;
    int dividend = 7; 
    int ans = solve(divisor, dividend);    
    cout<< "ans is" << ans <<endl;

}

int solve(int divisor, int dividend) {
    int s =0;
    int e = abs(dividend);
    int mid = s + (e-s)/2;
     while(s<=e){
        //perfect solution
        if ( abs(mid*divisor) == abs(dividend)){
            return mid;
        }
        // not perfect solution
        else if (abs(mid*divisor) > abs(dividend)){
            //left side
            e = mid - 1;
        }
        else{
            //right side


            ans = mid;   //storing the ans as it can be in decimal
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
            return ans;
        }
        else{
            return -ans;
        }
     }
   
    }
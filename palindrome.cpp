#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        int rem=0;
        long long rev=0;
        if(x<0){
            return false;
        }
        else{
            while(x!=0){
                rem=x%10;
                rev=(rev*10)+rem;
                x=x/10;
            }
            return rev==t;
        }

    }
};
int main(){
    Solution s;
    s.isPalindrome(121);
}
//Time complexity ->O(logn)
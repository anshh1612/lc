class Solution {
public:
    int subtractProductAndSum(int n) {
    int sum=0 ;
    int multi =1;
    while(n>0){
        int a = n%10;
        sum += a;
        multi *=a;

        n=n/10;
    }

    return multi - sum;
        
    }
};
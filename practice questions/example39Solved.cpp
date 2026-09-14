class solution(){
public:
    pair<int, int> RunningSum(int n){
        int sum = 0;
        int count = 0;
        for (int i = 1; i<=n; i++){
            sum += i;
            if(sum%5 == 0){
                count ++;
            }
        }
        return {sum, count};
    }
};
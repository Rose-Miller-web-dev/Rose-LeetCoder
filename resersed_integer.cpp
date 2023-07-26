class Solution {
public:
    int reverse(int x) {
        long long int reversed_number = 0;
        int r = 0;

        if (x == 0 || x > 2147483647 || x < -2147483647) 
            return 0;

       else {

            while (x % 10 == 0) {
                x /= 10;
            }
            
            while (x != 0) {
            
                r = x % 10;
                reversed_number = reversed_number*10 + r;
                x /= 10;
            }

       }

       if (reversed_number == 0 || reversed_number > 2147483647 || reversed_number < -2147483647) 
            return 0;

        else
            return reversed_number;
    }
};

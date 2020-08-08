class Solution {
public:
    int reverse(int x) {
        int p1= INT_MAX;
        int p2= INT_MIN;
        
        int out=0;
        while(x != 0){
          if(p1/10<out) return 0;
          if(p2/10>out) return 0;
          out = out*10+x%10;
          x = x/10;
        }
        
        return out;
    }
};

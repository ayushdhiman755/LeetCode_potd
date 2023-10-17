// rainwater trapping problem;
// program to find maximum rain water trapped 
# include "bits/stdc++.h"

using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int leftmax=0,rightmax=0;
        int l=0,h=height.size()-1;
        while(l<=h)
        {
            if(height[l]<=height[h])
            {
                if(leftmax<=height[l])
                leftmax=height[l];
                else
                ans+=leftmax-height[l];
                l++;
            }
            else
            {
                if(rightmax<=height[h])
                rightmax=height[h];
                else
                ans+=rightmax-height[h];
                h--;
            }
        }
        return ans;
    }
};
int main(){
  vector<int> arr={1,9,3,4,8,2,7,4,3,1,5,4,9,3,1,2};
  cout<<trap(arr);
return 0;
}

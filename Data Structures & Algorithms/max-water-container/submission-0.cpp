class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,h=heights.size()-1;
        int a,b,res,final=0;
        while(l<h){
           a=min(heights[l],heights[h]);
           b=abs(l-h);
           res=a*b;
           final=max(final,res);
           if(heights[l]<=heights[h]){
            l++;
           }else{
            h--;
           }
        }
        return final;
        
    }
};

class Solution {
    public int lengthOfLastWord(String s) {
        
        int n = s.length();
        int lngth = 0;
        boolean flag = false;

        for (int i=n-1; i>=0 ; i--) {
            if(s.charAt(i)!=' '){
                lngth++;
                flag=true;
            } 
            else if(flag && s.charAt(i)==' '){
                return lngth;
            }
        }
        return lngth;
    }
}

class Problem58{
    public static void main(String[] args) {
        Solution s = new Solution();
        
    }
}
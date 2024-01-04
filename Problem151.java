class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        StringBuilder rev = new StringBuilder();
        for (int i = words.length - 1; i > 0; i--) {
            rev.append(words[i]).append(" ");
        }

        if(words.length > 0) {
            rev.append(words[0]);
        }

        return rev.toString();
    }
}

class Problem151 extends Solution {
    public static void main(String[] args) {
        Solution s = new Solution();
        String ans = s.reverseWords("  hello world  ");
        System.out.println(ans);
    }
}
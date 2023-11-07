import java.util.ArrayList;
import java.util.List;

class Solution {
    public static void main(String[] args) {
        List<String> ans = new ArrayList<>();
        List<String> in = new ArrayList<>();
        char c = '.';
        ans = splitWordsBySeparator(in, c);
        // for(String i : ans){
        //     cout<<i
        // }
    }

    public static List<String> splitWordsBySeparator(List<String> words, char separator) {
        List<String> list = new ArrayList<>();
        for(int i = 0;i < words.size() ;i++){
            String[] ans = words.get(i).split("\\"+separator);

            for(String x : ans){
                if(!x.isEmpty()) list.add(x);
            }
        }
        return list;
    }
}


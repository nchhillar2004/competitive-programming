class Solution {
    public boolean hasMatch(String s, String p) {
        int index = p.indexOf('*');
        int firstPos = s.indexOf(p.substring(0, index));
        int secondPos = s.indexOf(p.substring(index+1), firstPos+index);
        
        if (firstPos != -1 && secondPos != -1){
            return true;
        }

        return false;
    }
}

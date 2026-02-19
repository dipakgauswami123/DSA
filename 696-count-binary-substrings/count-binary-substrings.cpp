class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int pvc=0;
        int cc= 1;
        for(int i =1; i<s.length(); i++){
if(s[i] == s[i-1]){
    cc++;
}
else{
    result += min(pvc, cc);
    pvc = cc;
    cc = 1;

}
        }
         return result + min(pvc, cc);
    }
   
};
class Solution {
public:
    int findLUSlength(string a, string b) {
        int alen = a.length();
	int blen = b.length();
	
	if(a == b){
		return -1;
	}else{
		return alen > blen ? alen : blen;
	}
    }
};

/*

Given two strings, determine whether they are anagrams.

Any word that exactly reproduces the letters in another order is an anagram. In other words, X and Y are anagrams if by rearranging the letters of X, we can get Y using all the original letters of X exactly once.

Input: X = "silent", Y = "listen"
Output: true

Input: X = "incest", Y = "insect"
Output: true

*/
#include<unordered_map>
class Solution
{
public:
	bool isAnagram(string a, string b)
	{
	if(a.length()!=b.length()){
        return false;
    }
    unordered_map<char,int> map;
    for(int i=0;i<a.length();i++){
        map[a[i]]++;
    }
    for(int i = 0;i<b.length();i++){
        if(map.count(b[i])>0 && map[b[i]]>0){
            map[b[i]]--;
            continue;
        } 
        else{
        	return false;
        }
    }
    return true;
	}
};

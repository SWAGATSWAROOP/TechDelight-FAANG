/*

Given a set of strings with duplicates present, return the maximum occurring word in it. If two words have the same count, return any one of them.

Input: [code, coder, coding, codable, codec, codecs, coded, codeless, codecs, codependence, codex, codify, codependents, codes, code, coder, codesign, codec, codeveloper, codrive, codec, codecs, codiscovered]

Output: codec or codecs

*/
#include<unordered_map>
class Solution
{
public:
	string lexicographicSort(vector<string> const &words)
	{
		// Write your code here...
		unordered_map<string,int> map;
		for(int i=0;i<words.size();i++){
			map[words[i]]++;
		}
		unordered_map<string,int>::iterator it = map.begin();
		int mx = 0;
		string a;
		while(it != map.end()){
			if(mx<it->second){
				a = it->first;
				mx = it->second;
			}
			it++;
		}
		return a;
	}
};
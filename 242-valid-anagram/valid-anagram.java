class Solution {
    public boolean isAnagram(String s, String t) {

        int[] hashmap1 = new int[26];
        int[] hashmap2 = new int[26];

        // traversing first string to store frequencies
        for(int i=0 ; i<s.length(); i++)
        {
            hashmap1[s.charAt(i)-'a']++;
        }


        // traversing second string to store frequencies
        for(int i=0 ; i<t.length(); i++)
        {
            hashmap2[t.charAt(i)-'a']++;
        }


        // traversing hashmaps to find if t is anagram of s

        for(int i=0 ; i<hashmap1.length ; i++)
        {
            if(hashmap1[i] != hashmap2[i])
            {
                return false; // not an anagram
            }

        }

        return true;

        
        
    }
}
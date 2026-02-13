#define ll long long
class Solution {
public:
    int longestBalanced(string s) {
        // Maps store the first occurrence of a specific difference (state)
        unordered_map<ll,ll> ab, bc, ca, abc;
        ll cnta = 0, cntb = 0, cntc = 0;
        ll longestLength = 1;

        // Base case: at index 0 (start), the state is "0 differences"
        ab[0] = bc[0] = ca[0] = abc[0] = 0;

        // Handle same-character substrings (e.g., "aaaa")
        char currentChar = s[0];
        ll len = 0;
        for(int i = 0; i < s.length(); i++){
            if(currentChar == s[i]) len++;
            else { len = 1; currentChar = s[i]; }
            longestLength = max(longestLength, len);
        }

        // Handle balanced substrings using Prefix Sums
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a') cnta++;
            else if(s[i] == 'b') cntb++;
            else cntc++;

            // Use bit-shifting to pack two 32-bit values into one 64-bit key
            // Masking (& 0xFFFFFFFFLL) prevents sign-extension from corrupting high bits
            ll abId  = (ll)(cntb - cnta) << 32 | ((ll)cntc & 0xFFFFFFFFLL);
            ll bcId  = (ll)(cntb - cntc) << 32 | ((ll)cnta & 0xFFFFFFFFLL);
            ll caId  = (ll)(cntc - cnta) << 32 | ((ll)cntb & 0xFFFFFFFFLL);
            ll abcId = (ll)(cntb - cnta) << 32 | ((ll)(cntc - cnta) & 0xFFFFFFFFLL);

            // If state is new, record the first index we saw it
            // Otherwise, current index minus first seen index = balanced length
            if(!ab.count(abId)) ab[abId] = i + 1;
            else longestLength = max(longestLength, i - ab[abId] + 1);

            if(!bc.count(bcId)) bc[bcId] = i + 1;
            else longestLength = max(longestLength, i - bc[bcId] + 1);

            if(!ca.count(caId)) ca[caId] = i + 1;
            else longestLength = max(longestLength, i - ca[caId] + 1);

            if(!abc.count(abcId)) abc[abcId] = i + 1;
            else longestLength = max(longestLength, i - abc[abcId] + 1);
        }
        return longestLength;
    }
};

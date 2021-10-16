class Solution:
    def reverseWords(self, s: str) -> str:
        A = s.split()
        A = A[::-1]
        ans = ""
        for x in A:
            ans += x
            ans += " "
        return ans[:-1]

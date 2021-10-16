class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        A = s.split()
        return len(A[-1])

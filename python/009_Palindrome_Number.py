class Solution:
    def isPalindrome(self, x: int) -> bool:
        _new = 0
        _bk = x
        while _bk:
            _new = _new * 10 + _bk % 10
            _bk = int(_bk / 10)
        return True if _new == x else False

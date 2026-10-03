class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m = {}
        for n in nums:
            m[n] = m.get(n, 0) + 1

        ret = []
        for _ in range(k):
            best_key = max(m, key=m.get)
            temp = m.pop(best_key)
            ret.append(best_key)
        return ret
        


        

        
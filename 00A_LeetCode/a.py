class Solution:
    def maxWidthOfVerticalArea(self, points: list[list[int]]) -> int:
        x1=0
        x2=0
        diff=0
        num=[]
        for i in range(len(points)):
            num.append(points[i][0])
        num.sort()
        for i in range(len(points)-1):
            x1=points[i][0]
            x2=points[i+1][0]
            print(x1)
            # print(x2)
            if diff<x2-x1:
                diff=x2-x1
        return diff

# nums=[[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
nums=[[8,7],[9,9],[7,4],[9,7]]
s=Solution()
y=s.maxWidthOfVerticalArea(nums)
# print(y)
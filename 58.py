class Solution:
    # @param {string} s
    # @return {integer}
    def lengthOfLastWord(self, s):
        s=s[::-1]
        num=0
        tag=0
        a=[]
        s=' '+ s + ' '
        for i in range(len(s)):
        	if s[i]==' ':
        		a.append(i)
        j=0
        for i in range(len(a)):
        	if a[i]!=i:
        		tag=i
        		break
        out =  a[tag]-a[tag-1]-1
        if out>=0:
            return out
        else:
            return 0
:w

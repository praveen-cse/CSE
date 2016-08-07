def matched(s):
	c1=0
	c2=0
	for i in range(0,len(s)):
		if s[i]=='(':
			c1+=1
			for j in range(i,len(s)):
				if s[j]==')':
					c2+=1
					break
	if c1==c2:
		return(True)
	return(False)

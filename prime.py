def sumprimes(l):
    sum=0
    for i in range(0,len(l)):
        div=0
        for j in range(1,l[i]+1):
            if(l[i]%j==0):
                div=div+1
        if(div==2):
            sum+=l[i]
    return (sum)
    

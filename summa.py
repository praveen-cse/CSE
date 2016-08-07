def intreverse(n):
    i=n
    sum=0
    while i>0:
        r=i%10
        sum=sum*10+r
        i=i//10
    return(sum)

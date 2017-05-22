    #include <stdio.h>
    using namespace std;
    int main()
    {
        int t,n1,n2,i ,reversedInteger = 0, remainder, originalInteger,count,temp;
        scanf("%d",&t);
     while(t>0)
     {
     	count=0;
        scanf("%d",&n1);
        scanf("%d",&n2);
    if(n2>=n1)
    {
    for(i=n1;i<=n2;i++)
    {
    	temp=i;
        originalInteger = i;
        reversedInteger=0;
        while( temp>0 )
        {
            remainder = temp%10;
            reversedInteger = reversedInteger*10 + remainder;
            temp=temp/10;
        }
        
        if (originalInteger == reversedInteger)
        {
		count=count+1; }
    }
    printf("%d \n",count);
    
    }
    t--;
    }
        return 0;
    } 

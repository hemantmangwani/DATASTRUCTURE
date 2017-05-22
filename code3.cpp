    #include <stdio.h>
    using namespace std;
    int main()
    {
        int t,n1,n2,i ,reversedInteger = 0, remainder, originalInteger,count=0; 
         
        originalInteger = i;
     
        while( i>0 )
        {
            remainder = i%10;
            reversedInteger = reversedInteger*10 + remainder;
            i=i/10;
        }
        if (originalInteger == reversedInteger)
          {  count=count+1;}

    printf("%d",originalInteger);
return 0;
}

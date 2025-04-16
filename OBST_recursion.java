import java.util.*;
public class OBST_recursion 
{
    public static void main(String args[])
    {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter no.of keys");
       int n=sc.nextInt();
       int keys[]=new int[n];
       System.out.println("Enter keys:");
       for(int i=0;i<n;i++)
       {
            keys[i]=sc.nextInt();
       }
       int freq[]=new int[n];
       System.out.println("Enter frequencies of keys:");
       for(int i=0;i<n;i++)
       {
            freq[i]=sc.nextInt();
       }

       // IF KEYS ARE IN UNSORTED ORDER SORT THEM (ALONG WITH THEM SORT FREQUENCIES)

       int ans=obst(0,n-1,freq);
       System.out.println("Answer="+ans);

    }
    public static int obst(int i,int j,int freq[])
    {
            if(j<i)
            {
                return 0;
            }
            if(i==j)
            {
                return freq[i];
            }
            int min=Integer.MAX_VALUE;
            for(int k=i;k<=j;k++)
            {
                int value=obst(i,k-1,freq)+obst(k+1,j,freq)+sum(i,j,freq);
                if(value<min)
                { 
                    min=value;
                }    
            }
            return min;
    }
    public static int sum(int i,int j,int freq[])
    {
        int sum=0;
        for(int k=i;k<=j;k++)
        {
            sum+=freq[k];
        }
        return sum;
    }

}

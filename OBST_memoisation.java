import java.util.*;
public class OBST_memoisation 
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

       int arr[][]=new int[n+1][n+1];
       
       
       int freq[]=new int[n];
       System.out.println("Enter frequencies of keys:");
       for(int i=0;i<n;i++)
       {
            freq[i]=sc.nextInt();
       }

       // IF KEYS ARE IN UNSORTED ORDER SORT THEM

       int ans=obst(0,n-1,freq,arr);
       System.out.println("Answer="+ans);

    }
    public static int obst(int i,int j,int freq[],int arr[][])
    {
            if(i<0 || j<0 || j<i)
            {
                return 0;
            }
            if(arr[i][j]!=0)
            {
                return arr[i][j];
            }
            if(i==j)
            {
                return arr[i][j]=freq[i];
            }
            int min=Integer.MAX_VALUE;
            for(int k=i;k<=j;k++)
            {
                int value=obst(i,k-1,freq,arr)+obst(k+1,j,freq,arr)+sum(i,j,freq);
                if(value<min)
                {
                    min=value;
                }
                
            }
            return arr[i][j]=min;
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


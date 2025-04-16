import java.util.*;
public class minimum_multiplication_by_tabulation
{
	public static void main(String args[])
	{
		int arr[]={3,4,2,3,2};
		tabulation(arr);
		System.out.println("Min="+)
	}
	public static void tabulation(int arr[])
	{
		int l,i,j,k;
		int n=arr.length;
		int dp[][]=new int[n][n];
		int min=Integer.MAX_VALUE;
		for(l=0;l<n;l++)
		{
			for(i=1;i<n-l;i++)
			{
				j=i+l;
				if(i==j)
					arr[i][j]=0;
				else
				{
					for(k=i;k<j;k++)
					{
						int value=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[j]*arr[k];
						min=Math.min(value,min);
						
					}
					dp[i][j]=min;
				}
			}
		}
		
	}				
}

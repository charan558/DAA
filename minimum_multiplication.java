import java.util.Scanner;

public class minimum_multiplication
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
       System.out.println("Enter no of matrices");
       int n=sc.nextInt();    
       int arr[]=new int[n+1];
       System.out.println("Enter matrix sizes in an array");
       for(int i=0;i<arr.length;i++)
       {
            arr[i]=sc.nextInt();
       }
      int ans=MCM(arr,1,n); 
      System.out.println("Minimum Multiplications are:"+ans);
    }
    public static int MCM(int arr[],int i,int j)
    {
        if(i==j)
        {
            return 0;
        }
        else
        {
            int min=Integer.MAX_VALUE;
            for(int k=i;k<j;k++)
            {
                int value=MCM(arr,i,k)+MCM(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
                if(value<min)
                {
                    min=value;
                }
            }
            return min;
        }
    }
}

public class minimum_with_memorization {
    public static void main(String[] args) {
        int mat[]={40,20,30,10,30};
        int n=mat.length;
        int arr[][]=new int[n][n];
        int min=Mcm(mat,arr,1,n-1);
        System.out.println("Minimum multiplocations are:"+min);

    }
    public static int Mcm(int mat[],int arr[][],int i,int j)
    {
        if(arr[i][j]!=0)
        {
            return arr[i][j];
        }
        if(i==j)
        {
            return arr[i][j]=0;
        }
        int min=Integer.MAX_VALUE;
        for(int k=i;k<j;k++)
        {
            int value=Mcm(mat,arr,i,k)+Mcm(mat,arr,k+1,j)+mat[i-1]*mat[j]*mat[k];
            if(value<min)
            {
                min=value;
            }
        }
        return arr[i][j]=min;
    }
    
}

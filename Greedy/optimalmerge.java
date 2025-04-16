import java.util.*;
public class optimalmerge
{
    public static int minop(int [] arrays)
    {
        PriorityQueue<Integer> minheap=new PriorityQueue<>();
        for(int file:arrays)
        {
            minheap.add(file);
        }
        int totalop=0;
        while(minheap.size()>1)
        {
            int first=minheap.poll();
            int second=minheap.poll();
            int cost=first+second;
            totalop+=cost;
            minheap.add(cost);
        }
        return totalop;
    
        
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no of arrays\n");
        int n=sc.nextInt();
        System.out.println("Enter the no of elements in each array\n");
        int[]arrays=new int[n];
        for(int i=0;i<n;i++)
        {
            arrays[i]=sc.nextInt();
        }
        System.out.println("Minimum operations : " + minop(arrays));
    }
}
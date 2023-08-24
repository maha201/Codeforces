import java.util.* ;
import java.io.*; 
import java.util.ArrayList;
class abc
{
    static int[] dp;
    abc()
    {
        dp=new int[200001];
    }
    static void update(int index,int num)
    {
        for(;index<dp.length;index+=(index&-index))
        dp[index]+=num;
    }
    static int sum(int index)
    {
        int a=0;
        for(;index>0;index-=(index&-index))
        a+=dp[index];
        return a;
    }
}
public class Solution 
{
    public static int reversePairs(ArrayList<Integer> arr) 
    {
        // Write your code here.
        int ans=0;
        abc ob=new abc();
        for(int i=0;i<arr.size();i++)
        {
            int a=arr.get(i);
            abc.update(a+1,1);
            a=2*a;
            int b=abc.sum(a+1);
            ans+=(i+1-b);
        }
        return ans;
    }
}

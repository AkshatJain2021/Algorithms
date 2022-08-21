class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int ele=0,count=0;
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                ele=a[i];
            }
            if(a[i]==ele)
            count++;
            else
            count--;
        }
        return ele;
    }
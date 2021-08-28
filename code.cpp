class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        priority_queue<int>A;
        vector<int>B;
        for(int i=0;i<n;i++)
        {
            A.push(arr[i]);
        }
        for(int i=1;i<=k;i++)
        {
            B.push_back(A.top());
            A.pop();
        }
    return B;
    }
};

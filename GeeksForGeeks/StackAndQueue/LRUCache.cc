// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:
    int cap;
    deque<pair<int,int>> cache;

    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int Cap)
    {
        cap = Cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        deque<pair<int,int>>::iterator itr;
        pair<int, int> returnPair;
        itr = find(cache.begin(),cache.end(),key);
        if(itr != cache.end())
        {
            returnPair = *itr;
            return returnPair.second;
        }
        else
            return -1;
            
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
          
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
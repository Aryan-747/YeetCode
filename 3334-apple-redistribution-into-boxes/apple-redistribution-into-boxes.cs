public class Solution {
    public int MinimumBoxes(int[] apple, int[] capacity) {

        int capacity_required = 0;

        for(int i=0 ; i<apple.Length; i++)
        {
            capacity_required+=apple[i];
        }

        // since we need to find min number of boxes, we first sort the capacity array and then traverse backwards
        Array.Sort(capacity);

        int containers = 0; // no of containers required
        int sum = 0;
        for(int i=capacity.Length-1; i>=0 ; i--)
        {
            sum+=capacity[i];
            containers++;
            if(sum>=capacity_required)
            {
                break;
            }
        }

        return containers;


        
    }
}
#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    std::vector<int> nums = {10, 12, 8, 7, 5, 18};
    int target = 7; 

    
    auto it = std::find(nums.begin(), nums.end(), target);

    
    if (it != nums.end()) {
        int index = std::distance(nums.begin(), it);
        std::cout << "Found " << target << " at index " << index << ".\n";
    } else {
        std::cout << target << " is not in the list.\n";
    }

    return 0;
}

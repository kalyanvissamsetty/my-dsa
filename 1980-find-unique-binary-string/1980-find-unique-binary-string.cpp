class Solution {
public:
    int binaryStringToInt(const std::string& binaryString) {
        std::bitset<32> bits(binaryString);
        return static_cast<int>(bits.to_ulong());
    }
    std::string intToBinaryString(int d,int number) {
        // Use std::bitset to convert integer to binary string
        return std::bitset<64>(number).to_string().substr(64 - d);
    }

    string findDifferentBinaryString(vector<string>& nums) {
        if(nums.size() == 1){
            if(nums[0] == "0"){
                return "1";
            }
            else{
                return "0";
            }
        }
        set<int> s;
        for(auto i:nums){
            s.insert(binaryStringToInt(i));
        }
        for(auto i: s){
            if(i-1 == -1 || i+1 == pow(2,nums.size())+1){
                continue;
            }
            if(s.find(i-1) == s.end()){
                return intToBinaryString(nums.size(),i-1);
            }
            if(s.find(i+1) == s.end()){
                return intToBinaryString(nums.size(),i+1);
            }
        }
        return "";
    }
};
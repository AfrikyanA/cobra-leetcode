#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char const *argv[]) {
		std::fstream f("file.txt");
		
		std::vector<std::string> nums;
		std::string a;
		
		if (!f.is_open()){
			std::cout << "cant open file" << std::endl;
		}
		else
		{
		while(!f.eof()){
			getline(f,a);
			nums.push_back(a);
		}
		
		f.close();
		
		nums.pop_back();
	
		for(int i = 0;i < nums.size();++i){
			if((nums[i][0] == '(') && (nums[i][4] == ')') && (nums[i][5] == ' ') && (nums[i][9] == '-') && (nums[i].length() == 14 )){
				std::cout << "The number is valid: \t\t" << nums[i] << "\n";
			}
			else if((nums[i][3] == '-') && (nums[i][7] == '-') && (nums[i].length() == 12)){
					std::cout << "The number is valid: \t\t" << nums[i] << "\n";
			}
			else{
					std::cout << "The number is not valid: \t" << nums[i] << "\n";
			}
		}
			
		f.close();
		}
		
	
}
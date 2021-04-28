#include <iostream>
#include <fstream>
#include <string>


int main(){
	std::fstream f("file.txt");
	
	std::string out;
	size_t count = 0;
	size_t line = 10;
	if (!f.is_open()){
		std::cout << "cant open file" << std::endl;
	}
	else{
	while (!f.eof()){
		f >> out; 			//getline()-ov datarkutyuna tpum (
		if(count++ == 10){
			std::cout << out << std::endl;
		}
	}
	if (count < line) {std::cout <<  "10th line not found" << std::endl;}
	
	
	f.close();
	}
}



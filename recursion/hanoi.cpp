#include <iostream>

void hanoi(int n, char src, char dst, char tmp){

	if(n == 0){
		std::cout << "No moves needed\n";
	}else if (n == 1){
		std::cout << "Moving disc " << n << " from " << src << " to " << dst << "\n";
	}else{
		hanoi(n-1, src, tmp, dst);
		std::cout << "Moving disc " << n << " from " << src << " to " << dst << "\n";
		hanoi(n-1, tmp, dst, src);
	}

}

int main(){

    hanoi(5, 'a', 'b', 'c'); 
    std::cout << std::endl;
	return 0;
}
#include <iostream>
#include <algorithm>
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL); 
	std::cout.tie(NULL);
	int N, M, result = 0, nums[15000];
	std::cin >> N >> M;
	for (int i = 0; i < N; ++i){
		std::cin >> nums[i];
	}
	std::sort(nums, nums+N);
	while (N != 0) {
		if (std::binary_search(nums, nums+N, M - nums[N])){
			++result;	
		}
		--N;
	}

	std::cout<<result<<std::endl;
	
	return 0;
}
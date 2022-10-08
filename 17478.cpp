#include<iostream>
//n 에서 줄어듦. 
int stand;
void call(int n){
	std::string addUnder="";
	for(int i=0;i<stand-n;i++){
		addUnder+="____";
	}
	if(n<=0){
		std::cout<<addUnder<<"\"재귀함수가 뭔가요?\"\n";
		std::cout<<addUnder<<"\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
		std::cout<<addUnder<<"라고 답변하였지.\n";
		return;
	}
	std::cout<<addUnder<<"\"재귀함수가 뭔가요?\"\n";
	std::cout<<addUnder<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
	std::cout<<addUnder<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
	std::cout<<addUnder<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
	call(n-1);
	std::cout<<addUnder<<"라고 답변하였지.\n";
}
int main(){
	int n;
	std::cin>>n;
	stand=n;
	std::cout<<"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
	call(n);
}
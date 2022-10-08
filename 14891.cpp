//확인후 회전
//N은 0 S는 1
//아 포인터 잘 몰라서 코드 개더럽습니다 다른거 보세요 
//아 다짜고보니 배열덱 쓰면 되는구나 젠장
#include<iostream>
#include<deque>
std::deque<bool> a,b,c,d;
int cond[4]={0};
void cond_update(int index,int rl){
	for(int i=0;i<4;i++){ //초기화
		cond[i]=0;
	}
	cond[index-1]=rl;
	if(index==1){
		if(a[2]!=b[6]){
			cond[1]=(rl==1?-1:1);
			if(b[2]!=c[6]){
				cond[2]=rl;
				if(c[2]!=d[6]){
					cond[3]=(rl==1?-1:1);
				}
			}
		}
	}
	if(index==2){
		if(a[2]!=b[6]){
			cond[0]=(rl==1?-1:1);
		}
		if(b[2]!=c[6]){
			cond[2]=(rl==1?-1:1);
			if(c[2]!=d[6]){
				cond[3]=rl;
			}
		}
	}
	if(index==3){
		if(c[2]!=d[6]){
			cond[3]=(rl==1?-1:1);
		}
		if(b[2]!=c[6]){
			cond[1]=(rl==1?-1:1);
			if(a[2]!=b[6]){
				cond[0]=rl;
			}
		}
	}
	if(index==4){
		if(c[2]!=d[6]){
			cond[2]=(rl==1?-1:1);
			if(b[2]!=c[6]){
				cond[1]=rl;
				if(a[2]!=b[6]){
					cond[0]=(rl==1?-1:1);
				}
			}
		}
	}
	// for(int i=0;i<4;i++){
	// 	std::cout<<cond[i]<<' ';
	// }
}
void input_deque(){
	for(int i=0;i<4;i++){
		std::string input;
		std::cin>>input;
		for(int j=0;j<8;j++){
			if(input[j]=='1'&&i==0){a.push_back(1);}
			if(input[j]=='1'&&i==1){b.push_back(1);}
			if(input[j]=='1'&&i==2){c.push_back(1);}
			if(input[j]=='1'&&i==3){d.push_back(1);}

			if(input[j]!='1'&&i==0){a.push_back(0);}
			if(input[j]!='1'&&i==1){b.push_back(0);}
			if(input[j]!='1'&&i==2){c.push_back(0);}
			if(input[j]!='1'&&i==3){d.push_back(0);}
		}
	}
}
void turn_gear(){
	if(cond[0]==1){
		a.push_front(a[7]);
		a.pop_back();
	} else if(cond[0]==-1){
		a.push_back(a[0]);
		a.pop_front();
	}

	if(cond[1]==1){
		b.push_front(b[7]);
		b.pop_back();
	} else if(cond[1]==-1){
		b.push_back(b[0]);
		b.pop_front();
	}

	if(cond[2]==1){
		c.push_front(c[7]);
		c.pop_back();
	} else if(cond[2]==-1){
		c.push_back(c[0]);
		c.pop_front();
	}

	if(cond[3]==1){
		d.push_front(d[7]);
		d.pop_back();
	} else if(cond[3]==-1){
		d.push_back(d[0]);
		d.pop_front();
	}
}
int score(){
	int result=0;
	if(a[0]==1){
		result+=1;
	}
	if(b[0]==1){
		result+=2;
	}
	if(c[0]==1){
		result+=4;
	}
	if(d[0]==1){
		result+=8;
	}
	return result;
}
int main(){
	input_deque();
	int n;
	std::cin>>n;
	//상태 표시를 만들어 놔야 함.
	//돌리기전에 스캔하고 뭘 돌려야 할지 뭘 돌리지 말아야 할지 판단하고 실행하는 방식으로
	for(int i=0;i<n;i++){
		int index,rl;
		std::cin>>index>>rl;
		cond_update(index,rl);
		turn_gear();
	}
	std::cout<<score();
}
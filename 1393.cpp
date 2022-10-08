#include<iostream>
int max(int a,int b){
	if(a>b){
		return a;
	}else {
		return b;
	}
}
int main() {
	int jx,jy;
	std::cin>>jx>>jy;
	int xe,ye,dx,dy;
	std::cin>>xe>>ye>>dx>>dy;

	for(int i=max(dx,dy);i>1;i--){
		if(dx%i==0&&dy%i==0){
			dx/=i;
			dy/=i;
			break;
		}
	}
	int min=40000;
	int min_x,min_y;
	for(int i=0;i<200;i++){
		double x=jx-(xe+dx*i);
		double y=jy-(ye+dy*i);
		// std::cout<<xe+dx*i<<' '<<ye+dy*i<<'\n';
		if(min>(x*x)+(y*y)){
			min=(x*x)+(y*y);
			min_x=xe+dx*i;
			min_y=ye+dy*i;
		}
	}
	std::cout<<min_x<<' '<<min_y;

}
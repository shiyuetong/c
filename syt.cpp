//////#include<iostream>
//////using namespace std;
//////int main(){
//////	int a,b;
//////	cin >>a>>b;
//////	cout<<a+b<<endl;
//////	return 0; 
//////
//////ud} 
////
//////if的嵌套
//// 
////#include<iostream>
////using namespace std;
////int main(){
////	int a,b,c;
////	cin>>a>>b>>c;
////	if(a>b){
////		if(a>c){
////			cout<<"the max number is:"<<a<<endl; 
////		}else{
////			cout<<"the max number is:"<<c<<endl;
////		}
////	}else{
////		if(b<c)	cout<<"the max number is:"<<c<<endl;
////		else	cout<<"the max number is:"<<b<<endl;
////	}
//////	if(a>b>c){
//////		cout<<"the max number is:"<<a<<endl;
//////	}else if(b>a>c){
//////		cout<<"the max numder is:"<<b<<endl;
//////	}else if(c>a>b){
//////		cout<<"the max number is :"<<c<<endl;
//////	} 
////	return 0;
////	
////	 
////}
//
//
//
//
//#include<iostream>
//using namespace std;
//int main(){
//
//	
//	cout<<max<<endl;
//	return 0;
//}  
//
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a-b<=10)  cout<<"它们的差小于等于11";
	else	cout<<"它们的差大于等于11";
	return 0;
	 
}

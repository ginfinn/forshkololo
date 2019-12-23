#include <iostream>
#include <math.h>
using  namespace std;
int main()
{
	double a,b,c;
if(a==0&&b==0&&c==0){
cout<<"бесконечое множестворешений";
	
}else if(a==0&&b==0){
cout<<"нет решений";
}else if((pow(b,2)-(4*a*c))<0){
	cout<<"нет решений";
}else if((pow(b,2)-(4*a*c))==0){
cout<<"x="<<b*-1/(2*a);
}else{
cout<<"x="<<(b*-1+sqrt(pow(b,2)-(4*a*c)/(2*a)))<<","<<(b*-1-sqrt(pow(b,2)-(4*a*c)/(2*a)));
}
}

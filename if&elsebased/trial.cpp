#include <iostream>
using namespace std;
#include <string>
int main(){
	//bmi calculator 
	//formula= weight(kg)/height*height(meters)
	//metrics underweight<18.5,   18.5<=healthy<=24.9,   overweight>25
	cout<<"WELCOME TO BMI CALCULATOR"<<endl;
	float h,w;
	cout<<"ENTER YOUR WEIGHT IN KG: ";
    cin>>w;
    cout<<"ENTER YOUR HEIGHT IN METERS: ";
    cin>>h;
    float bmi=w/(h*h);
    if(bmi<18.5){
    	cout<<"you are under weight";
	}
	else if(bmi>=18.5 && bmi<=24.9){
		cout<<"healty but dont slack off";
	}
	else{
		cout<<"bro u overweight get ur act together"<<endl;
	}
    cout<<"note not applicabel to growing children";
    system("pause>0");
    return 0;
}

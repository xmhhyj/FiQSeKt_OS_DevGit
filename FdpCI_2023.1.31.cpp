#include<bits/stdc++.h>
//#pragma GCC optimize("Ofast", "inline", "-ffast-math")
//#pragma GCC target("avx,sse2,sse3,sse4,mmx")
using namespace std;
long long LLnum;
int Inum;
char Cunm;
bool Bunm;
double Dnum;
float Funm;
long double LDunm;
string CommandStr;
char ExitStr;
void exit() {
	for(int i=5; i>=1; i--) {
		printf("%d\n",i);
		sleep(1);
	}
}
void Welcome(int frequency) {
	for(int i=1; i<=frequency; i++) {
		cout<<"Kernel FdpCI shell"<<'\n'<<'\n';
		cout<<"欢迎来到 红虎 OS by FdpCI"<<'\n';
		cout<<"由YiTeiCX研发"<<'\n';
		cout<<"想获取更多资讯? 请到www.fiqsekt.com.cn查看"<<'\n';
		cout<<"YiTeiCX CCP-XGP保留所有权利"<<'\n';
		cout<<"Welcome to FiQseKt(C) OS FdpCI"<<'\n';
		cout<<"Welcome to Kernel FdpCI(C)."<<'\n';
		cout<<"Developed by YiTeiCX(C)."<<'\n';
		cout<<"YiTeiCX CCP-XGP All Rights Reserved."<<'\n'<<'\n';
		cout<<"Want more information? Please check out www.fiqsekt.com.cn"<<'\n'<<'\n';
		//sleep(1.75);
	}
}
void PreambleSentence(int frequency) {
	for(int i=1; i<=frequency; i++) {
		cout<<"FQKs CCP-XGP:/rXoot/FCI--";
		cout<<"[>>"<<'\n';
		cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------"<<'\n';
		cout<<"Shell->";
		getline(cin,CommandStr);
	}

}
void Error() {
	//cout<<"adb : 无法将“adb”项识别为 cmdlet、函数、脚本文件或可运行程序的名称。请检查名称的拼写，如果包括路径，请确保路径正确，"<<'\n';
	//cout<<"然后再试一次。"<<'\n';
	//cout<<"所在位置 行:1 字符: 1"<<'\n';
	
		
		cout<<CommandStr<<" : The '"<<CommandStr<<"' entry is not recognized as the name of a cmdlet, function, script file, or runnable program. Check the spelling of the name, and if you include the path, make sure the path is correct,"<<'\n';
		cout<<"Try again."<<'\n';
		cout<<"Location Line: 1 Character: 1"<<'\n';
	}
	void StatusProgressBar(int NumberOfPercentages) { //后期加获取加载状态
		cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------"<<'\n';
		cout<<"[>>";
		Dnum=1/NumberOfPercentages;
		for(int i=1; i<=NumberOfPercentages; i++) {
		cout<<">";
		sleep(Dnum);
	}
	cout<<']'<<'\n';
}
int JudgmentLibrary(string TemporaryStr) {
	StatusProgressBar(100);
	if(CommandStr=="drive overview"||CommandStr=="qudonqi gailan") {//驱动器概览
		int capacity=20,AvailableCapacity=5;
		int capacityM=capacity*1024,capacity100=((capacity-AvailableCapacity)/capacity)*100;
		cout<<"drive	"<<"partition	"<<"capacity	"<<"Available capacity	  "<<"format              	              	  "<<"%Available capacity	  "<<"state    "<<"\n";
		cout<<"A:	"<<"xqt1.0	        "<<capacity<<"GiB/"<<capacityM<<"MiB  "<<AvailableCapacity<<"GiB			  "<<"Functioning normally	   		  "<<capacity100<<"%	"<<"state    "<<"\n";
		return -1;
	} else if(CommandStr=="exit"||CommandStr=="guan ji") {
		do {
			cout<<"OK to close FdpCI Kernel?Y or N?"<<'\n';
			cin>>ExitStr;
			if(ExitStr=='Y') {
				cout<<"FdpCI Kernel will exit after 5 seconds"<<"\n";
				for(int i=5; i>=1; i--) {//by XXTCbox X86_64
					printf("%d\n",i);
					sleep(1);
				}
				return 0;
			} else if(ExitStr=='N') {
				return -1;
			} else {
				cout<<"If not, please enter it again"<<'\n';
			}
		} while(ExitStr!='N'&&ExitStr=='Y');
	} else if(CommandStr=="CPU performance management"||CommandStr=="CPU xinnen guanli") { //CPU性能管理
		//修改CPU数据可能导致您的硬软件损坏，是否进入？
		cout<<"\n"<<"Modifying CPU data may cause your hardware and software to be corrupted, do you enter?(Y or N)"<<'\n';
		char WarnAnswer;
		cin>>WarnAnswer;
		if(WarnAnswer=='Y') {
			int CPUnum=0;
			cout<<'\n'<<'\n'<<"								    menu										"<<'\n'<<'\n';
			cout<<"								  1.TPL										"<<'\n';
			cout<<"								  2.BD PROCHOT								"<<'\n';//温度墙
			cout<<"								  3.Power supply scheme						"<<'\n';//电源计划
			cout<<"								  4.Set Multiplier						    "<<'\n';//倍频
			cout<<"								  5.FIVR						                "<<'\n';//电压
			cout<<"								  6.exit						                "<<'\n';
			cin>>CPUnum;
			if(CPUnum==1) {

			} else if(CPUnum==2) {

			} else if(CPUnum==3) {

			} else if(CPUnum==4) {

			} else if(CPUnum==5) {

			} else if(CPUnum==6) {
				cout<<"FdpCI CPU performance management will exit";
				sleep(3.75);
			} else {

			}
		} else {
			cout<<"FdpCI CPU performance management will exit";
			sleep(3.75);
			return 0;
		}
	} else if(CommandStr=="GPU performance management"||CommandStr=="GPU xinnen guanli") { //GPU性能管理
		cout<<'\n\n'<<"										menu										"<<'\n';
		cout<<'\n\n'<<"										menu										"<<'\n';
		cout<<'\n\n'<<"										menu										"<<'\n';
	} else {
		cout<<CommandStr<<" : The '"<<CommandStr<<"' entry is not recognized as the name of a cmdlet, function, script file, or runnable program. Check the spelling of the name, and if you include the path, make sure the path is correct,"<<'\n';
		cout<<"Try again."<<'\n';
		cout<<"Location Line: 1 Character: 1"<<'\n';
		return -1;
	}
}
int main() {
	Welcome(1);
	while(1) {
		PreambleSentence(1);
		if(JudgmentLibrary==0)break;
		JudgmentLibrary(CommandStr);
	}
	return 0;
}

#include<iostream>
#include"hfmCode.h"

#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	hfmCode *code = new hfmCode();
	for(char ch = ' ';;){
		cout<<"i......��ʼ��"<<endl;
		cout<<"e......����"<<endl;
		cout<<"d......����"<<endl;
		cout<<"q......�˳�"<<endl;
		cout<<"������ѡ���ܣ�";
		cin>>ch;
		if(ch == 'q' || ch == 'Q')break;
		else system("cls");
		if(ch == 'i' || ch == 'I'){
			int n;
			cout<<"�������ַ����Ĵ�С��";cin>>n;
			word *w;
			if(n > 0)w = new word[n];
			char ch;
			for(int i = 0 ; i < n ; i++){
				cout<<"�������ַ���";cin.sync();
				cin.get(ch);
				w[i].ch = ch;
				cin.sync();
				cout<<"������Ȩֵ��";cin>>w[i].value;
				cout<<endl;
			}
			code->init(w , n);
			cout<<"��ʼ���ɹ���"<<endl;
			code->display();
			cout<<endl;
		}
		if(ch == 'e' || ch == 'E'){
			char *in = new char[50];
			cout<<"������Ҫ������ļ���λ�ã�";cin>>in;
			char *out = new char[50];
			cout<<"������������ļ������λ�ã�";cin>>out;
			if(code->encode(in , out))
				cout<<"����ɹ���"<<endl;
			else 
				cout<<"����ʧ�ܣ�"<<endl;
			delete in;
			delete out;
		}
		if(ch == 'd' || ch == 'D'){
			char *in = new char[50];
			cout<<"������Ҫ������ļ���λ�ã�";cin>>in;
			char *out = new char[50];
			cout<<"�������������ļ������λ�ã�";cin>>out;
			if(code->decode(in , out))
				cout<<"����ɹ���"<<endl;
			else 
				cout<<"����ʧ�ܣ�"<<endl;
			delete in;
			delete out;
		}
	}
	system("pause");
	return 0;
}
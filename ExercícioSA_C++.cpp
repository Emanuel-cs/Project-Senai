#include <iostream>

using namespace std;
int main(){
	
	float hr, thr, slb, ir, inss, fgts, sll, tdd;
	cout << "Insira quantos reais voce ganhas por hora de servico: ";
	cin >> hr;
	cout << "Insira as horas trabalhadas no total: ";
	cin >> thr;
	
	slb = hr*thr;
	
	if (slb < 901){
		ir = 1;
	}
	else if (slb < 1501){
		ir = 0.05;
	}
	else if (slb < 2501){
		ir = 0.1;
	}
	else {
		ir = 0.2;
	}
	ir=slb*ir;
	inss=slb*0.1;
	fgts=slb*0.11;
	sll=slb-ir-inss;
	tdd= slb - sll;
	
	cout<<"\nSalario bruto: " <<slb;
	cout<<"\nDesconto de IR: " <<ir;
	cout<<"\nINSS: " <<inss;
	cout<<"\nFGTS: " <<fgts;	
	cout<<"\nSalario liquido: " <<sll;
	cout<<"\nTotal de descontos: " <<tdd;
	
	return 0;
}

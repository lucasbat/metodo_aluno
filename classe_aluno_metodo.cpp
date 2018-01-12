#include<iostream>
#include<string>
using namespace std;
class aluno{
	private:
		string nome;
		int idade;
		float nota1, nota2, nota3;
	public:
		void set_dados();
		void print_dados();
		float media(float nota1,float nota2, float nota3);
};
void aluno::set_dados(){
	
	cout<<"\nNome do aluno: "; getline(cin,nome);
	cout<<"\nIdade do aluno: "; cin>>idade;
	cout<<"\nNota da primeira unidade: "; cin>>nota1;
	cout<<"\nNota da segunda unidade: "; cin>>nota2;
	cout<<"\nNota da terceira unidade: "; cin>>nota3;
	cin.ignore();
}
void aluno::print_dados(){
	
	cout<<"\nNome do aluno: "<<nome;
	cout<<"\nIdade do aluno: "<<idade;
	cout<<"\nNota da primeira unidade: "<<nota1;
	cout<<"\nNota da segunda unidade: "<<nota2;
	cout<<"\nNota da terceira unidade: "<<nota3;
}
float aluno::media(float nota1,float nota2, float nota3){
	return (nota1+nota2+nota3)/3;
}
int main(){
	aluno y;
	
	y.set_dados();
	y.print_dados();
	y.media(nota1,nota2,nota3);
	cout<<"\n\n";
	return 0;
}

#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>
class Personagem{
	private:
	int Maltura,Mlargura;
	int MposX=0,MposY=0;
	std::string Mdesenho;
	public:
	Personagem(){

	}
	Personagem(int posX,int posY,std::string desenho){
		setX(posX);
		setY(posY);
		setDesenho(desenho);
	}
	void setX(int posX){
		MposX=posX;
	}
	void setY(int posY){
		MposY=posY;
	}
	void setDesenho(std::string desenho){
		Mdesenho=desenho;
	}
	int getX(){
		return MposX;
	}
	int getY(){
		return MposY;
	}
	std::string getDesenho(){
		return Mdesenho;
	}
	void valoresTabuleiro(int largura, int altura){
			Mlargura=largura;
			Maltura=altura;
		}
};
void tabuleiro(int aux,int aux1,std::vector <Personagem> meuspersonagens){
	int k,i=0,j;
	for(j=0;j<aux;j++){
		for(k=0;k<aux1;k++){
			if(meuspersonagens[i].getY()==k && meuspersonagens[i].getX()==j){
				std::cout<<"["<<meuspersonagens[i].getDesenho()<<"]";
				i++;
				}
			else{
				std::cout<<"[.]";
			}
			}	
			std::cout<<std::endl;
		}
}
int main(){
	int i,j,k;
	Personagem aux;
	std::vector <Personagem> meuspersonagens;
	Personagem andre(1,7,"3");
	Personagem joao(2,8,"5");
	Personagem joao1(3,6,"6");
	Personagem joao2(4,5,"8");
	Personagem joao3(1,1,"1");
	Personagem joao4(2,6,"4");
	Personagem joao5(1,5,"2");
	Personagem joao6(4,2,"7");
	meuspersonagens.push_back(andre);
	meuspersonagens.push_back(joao);
	meuspersonagens.push_back(joao1);
	meuspersonagens.push_back(joao2);
	meuspersonagens.push_back(joao3);
	meuspersonagens.push_back(joao4);
	meuspersonagens.push_back(joao5);
	meuspersonagens.push_back(joao6);

	for(j=0;j<meuspersonagens.size();j++){
		for(i=0;i<meuspersonagens.size();i++){
			if(meuspersonagens[i].getX()*10+meuspersonagens[i].getY()>meuspersonagens[i+1].getX()*10+meuspersonagens[i+1].getY()){
			 aux=meuspersonagens[i];	
		 	 meuspersonagens[i]=meuspersonagens[i+1];
		 	 meuspersonagens[i+1]=aux;
			}
		}
	}
	
	for(j=0;j<meuspersonagens.size();j++){
	std::cout<<"["<<meuspersonagens[j].getDesenho()<<"]"<<std::endl;
	}
	tabuleiro(10,10,meuspersonagens);
}

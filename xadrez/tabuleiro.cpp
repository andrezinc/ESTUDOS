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
int main(){
	int i,j,k;
	std::vector <Personagem> meuspersonagens;

	Personagem andre(3,3,"X");
	andre.valoresTabuleiro(3,3);
	Personagem joao(2,1,"O");
	meuspersonagens.push_back(andre);
	meuspersonagens.push_back(joao);

	for(i=0;i<meuspersonagens.size();i++){
		for(j=0;j<8;j++){
			for(k=0;k<8;k++){
				if(meuspersonagens[i].getY()-1==j && meuspersonagens[i].getY()-1==k){
					std::cout<<"["<<meuspersonagens[i].getDesenho()<<"]";
				}
				else{
					std::cout<<"[.]";
				}
			  }
			std::cout<<std::endl;
			}	
		}
}

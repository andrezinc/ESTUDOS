#include <iostream>
#include <math.h>
#include <string.h>

class tabuleiro{
	private:
	int Maltura,Mlargura;
	int MposX,MposY;
	std::string Mdesenho;
	public:
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
	void valores(int largura, int altura){
			Mlargura=largura;
			Maltura=altura;
		}
	void impressao(){
		int i,j;
		for(i=0;i<Maltura;i++){
			for(j=0;j<Mlargura;j++){
				std::cout<<"[.]";
				}
			std::cout<<std::endl;
			}
	}
};
int main(){
	tabuleiro xadrez;
	xadrez.valores(4,4);
	xadrez.impressao();
}

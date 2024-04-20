#include <iostream>
#include <math.h>
#include <string.h>

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
	void impressao(){
		int i,j;
		for(i=0;i<Maltura;i++){
			for(j=0;j<Mlargura;j++){
				if(MposY-1==i && MposX-1==j){
				std::cout<<"["<<Mdesenho<<"]";
				}
				else{
				std::cout<<"[.]";
				}
				}
			std::cout<<std::endl;
			}
	}
};
int main(){
	Personagem andre(3,3,"X");
	andre.valoresTabuleiro(3,3);
	andre.impressao();
}

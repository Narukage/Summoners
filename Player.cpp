#include "Player.h"



Player::Player(int commander){
    vida=100;
    mana=10;
    manarest=10;
    Invocacion* prueba = new Invocacion();
    
    if(commander==1){
         vida=100;
        comandante=new Invocacion("comandante1",0,vida,5,1,-1);
        comandante->setCom(true);
        comandante->setPosicion(0,3);
        comandante->soyJugada(comandante->getNombre());
        RellenarJugadas(comandante);
        
        if(!textura.loadFromFile("assets/HUD/retrato1.png")){
               std::cout<<"Textura no aplicada"<<std::endl;
            }
        retrato.setPosition(0,0);
    }else{
         vida=100;
       comandante=new Invocacion("comandante2",0,vida,5,2,-2);
       comandante->setCom(true);
       comandante->setPosicion(11,3);
       comandante->soyJugada(comandante->getNombre());
       RellenarJugadas(comandante);
      // RellenarJugadas(comandante);
        if(!textura.loadFromFile("assets/HUD/retrato2.png")){
               std::cout<<"Textura no aplicada"<<std::endl;
            }
        retrato.setPosition(700,0);
    }
   // string s="s";
    /*for(int i=0;i<20;i++){
        invo=new Invocacion[i];
    }*/
    
  ifstream fin;
  fin.open("baraja.txt"); 
 
  while(!fin.eof()){
  int id;
  
 
  fin >> id;
  //Mejor en el txt todos los paramaetros
  if(contador!=19){
  if(id==1){
       prueba=new Invocacion("Cthughax",1,1,1,commander,contador);
       prueba->soyJugada(prueba->getNombre());
       invo.push_back(prueba);
  }
  if(id==2){
     prueba=new Invocacion("Yigx",3,3,2,commander,contador);
      prueba->soyJugada(prueba->getNombre());
       invo.push_back(prueba);
  }
  if(id==3){
       prueba=new Invocacion("Zoogx",2,2,1,commander,contador);
       prueba->soyJugada(prueba->getNombre());

       invo.push_back(prueba);
  }
  if(id==4){
      prueba=new Invocacion("Gugox",5,4,4,commander,contador);
       prueba->soyJugada(prueba->getNombre());

       invo.push_back(prueba);
  }
  if(id==5){
       prueba=new Invocacion("Bokrugs",4,1,4,commander,contador);
       prueba->soyJugada(prueba->getNombre());

       invo.push_back(prueba);
  }
  if(id==6){
       prueba=new Invocacion("Orrys",7,7,2,commander,contador);
       prueba->soyJugada(prueba->getNombre());

       invo.push_back(prueba);
  }
  if(id==7){
       prueba=new Invocacion("Ahtuh",4,4,2,commander,contador);
       prueba->soyJugada(prueba->getNombre());

       invo.push_back(prueba);
  }
  if(id==8){
        prueba=new Invocacion("Blemiax",8,7,8,commander,contador);
        prueba->soyJugada(prueba->getNombre());
        invo.push_back(prueba);
  }
  if(id==9){
      prueba=new Invocacion("Shanx",6,3,6,commander,contador);
      prueba->soyJugada(prueba->getNombre());
      invo.push_back(prueba);
  }
  if(id==10){
       prueba=new Invocacion("Azathothx",10,12,12,commander,contador);
       prueba->soyJugada(prueba->getNombre());
       invo.push_back(prueba);
  }
  }
//std::cout<<"Posicion: "<<contador<<"Como me llamo: "<<invo.at(contador)->getNombre()<<std::endl;
 contador++;

  }
  fin.close();
  
  //aqui barajo
  
  
	int hecho=0;
	
	int pos;
	//inicializo la nueva baraja
	for(int i=0; i<invo.size(); i++){
    	invo2.push_back(NULL);
	}
       
	
	srand (time(NULL));
        //invo2[0]==NULL;
	while(hecho<invo.size()){
    	pos = rand() % invo.size();
    	
    	if(invo2[pos]==NULL){
            cout << "entro" << endl;
        	invo2[pos]=invo[hecho];
        	hecho++;
        	
               	 
    	}
   	 
	}
       cout << invo2.size() << endl;
       cout << invo.size() << endl;
      
  vector<Invocacion*>::iterator it3;
     int z = 0;
    //0 = a mazo
       /* for(it3=invo.begin();it3!=invo.end();++it3){
            if(z<invo.size()){
            cout<<"Soy: "<<invo.at(z)->getNombre()<<"con id: "<<invo.at(z)->GetUnico()<<endl;
            }
           z++; 
        }*/
  /*for(int x=0;x<19;x++){
       std::cout << "Soy el monstruo de: " << x<< ", con nombre: "<< invo[x].getNombre() << std::endl;
  }*/
    /*invo[0]=Invocacion("C",1,1,1,commander);
    invo[1]=Invocacion("y",3,3,2,commander);
    invo[2]=Invocacion("Z",2,2,1,commander);
    invo[3]=Invocacion("g",5,4,5,commander);
    invo[4]=Invocacion("C",1,1,1,commander);
    invo[5]=Invocacion("y",3,3,2,commander);
    invo[6]=Invocacion("Z",2,2,1,commander);
    invo[7]=Invocacion("g",5,4,5,commander);
    invo[8]=Invocacion("C",1,1,1,commander);
    invo[9]=Invocacion("y",3,3,2,commander);
    invo[10]=Invocacion("Z",2,2,1,commander);
    invo[11]=Invocacion("g",5,4,5,commander);
    invo[12]=Invocacion("C",1,1,1,commander);
    invo[13]=Invocacion("y",3,3,2,commander);
    invo[14]=Invocacion("Z",2,2,1,commander);
    invo[15]=Invocacion("g",5,4,5,commander);
    invo[16]=Invocacion("C",1,1,1,commander);
    invo[17]=Invocacion("y",3,3,2,commander);
    invo[18]=Invocacion("Z",2,2,1,commander);
    invo[19]=Invocacion("g",5,4,5,commander);
    */
    
    
    /*if(!textura3.loadFromFile("assets/Sprites/carta.png")){
           std::cout<<"Textura no aplicada"<<std::endl;
        } */
    if(commander==1){
        
        for(int j=0;j<5;j++){
           
            if(j<invo.size()){
            RellenarMano(invo.at(j),j);
            }
             //mano.push_back(invo.at(j));
            //carta.setTexture(textura3);
            //mano[j].setCarta(carta);
             
           // mano.at(j)->setJugar(j);
        }
    }
   retrato.setTexture(textura);
   
}
bool Player:: RellenarMano(Invocacion* invo,int jugar){
   
    if(mano.size()<5){
        cout<<"manica: "<<invo->getNombre()<<endl;
        invo->setMano(true);
        invo->soyManoT(invo->getNombre(),jugar);
        invo->setJugar(jugar);
        mano.push_back(invo);
        setPosMano(posmano+1);
         /*for(it3=jugadas.begin();it3!=jugadas.end();++it3){
            std::cout<< "SOY  : "<< jugadas.at(i)->getNombre()<< std::endl;
            i++;
         }*/
         //std::cout<< "Existo es : "<< jugadas.a<< std::endl;
        
        return true;
    }
    return false;
}
bool Player::RellenarJugadas(Invocacion* jugada){
    int i=0;
    //vector<Invocacion*>::iterator it8;
    if(jugada->getExisto()==false){
        jugada->setMano(false);
       // jugada->soyJugada(jugada->getNombre());
        jugada->setExisto();
        jugadas.push_back(jugada);
         //for(it3=jugadas.begin();it3!=jugadas.end();++it3){
            //std::cout<< "SOY  : "<< jugadas.at(i)->getNombre()<< std::endl;
            //i++;
         //}
         //std::cout<< "Existo es : "<< jugadas.a<< std::endl;
        
        return true;
    }
    return false;
}
Invocacion* Player:: getMonstruo(Invocacion* monstruito, int donde){
    Invocacion* retorno = new Invocacion();
     vector<Invocacion*>::iterator it7;
     int i = 0;
    if(donde==0){//0 = a mazo
        for(it7=invo.begin();it7!=invo.end();++it7){
            if(i<invo.size() &&  invo.at(i)->GetUnico()==monstruito->GetUnico()){
                retorno = invo.at(i);

            }
            i++;
        }
    }
     i=0;
    if(donde==1){// 1 = mano
        for(it7=mano.begin();it7!=mano.end();++it7){
            if(i<mano.size() &&  mano.at(i)->GetUnico()==monstruito->GetUnico()){
                retorno = mano.at(i);
               
            }
            i++;
        }
    }
     i=0;
    if(donde==2){// 2 = jugadas
        for(it7=jugadas.begin();it7!=jugadas.end();++it7){
            if(i<jugadas.size() &&  jugadas.at(i)->GetUnico()==monstruito->GetUnico()){
                retorno = jugadas.at(i);
              
            }
            i++;
        }
    }  

     return retorno;
}
bool Player:: eliminarMano(Invocacion* invo){   
    bool devolver=false;
    vector<Invocacion*>::iterator it2;
    int i=0;
    for(it2=mano.begin();it2!=mano.end()&&i<5;++it2){
        cout<<"entro "<<endl;
        if(i<mano.size()&&mano.at(i)->GetUnico()==invo->GetUnico()){
         cout<<"hasta el fondo "<<endl;
       
                    mano.erase(it2); 
                    devolver = true;
         
                    
            
                 
        }
        if(i<mano.size()&&!mano.empty()){
         mano.at(i)->setJugar(i);
                     mano.at(i)->soyManoT(mano.at(i)->getNombre(),i);
        }
        i++;
    }
    return devolver;
    /*i=0;
    for(it3=mano.begin();it3!=mano.end();++it3){
        if(i<mano.size()){
            mano.at(i)->setJugar(i);
            i++;
        }
    }*/
  
}
bool Player:: eliminarJugadas(Invocacion* invo){// get unico creo que no sirve si miramos posiciones
   vector<Invocacion*>::iterator it4;
    int i=0;
    for(it4=jugadas.begin();it4!=jugadas.end();++it4){
         //cout<<"estoy apunto de morir: "<<i<<endl;
        if(i<jugadas.size()&&jugadas.at(i)->GetUnico()==invo->GetUnico()){  
            cout<<"me van a matar: "<<invo->getNombre()<<endl;
            jugadas.erase(it4);  

              return true;      
                    
        }
        i++;
    }

    return false;
}
 Invocacion* Player::  JugadaEn(int posx, int posy){
     Invocacion* retorno = new Invocacion();
     if((posx>100 && posx<700)&&(posy>80 && posy<475)){
        posx = (posx-100)/50;
        posy = (posy-80)/50;
    }
    vector<Invocacion*>::iterator it6;
                 int i=0;
     for(it6=jugadas.begin();it6!=jugadas.end();++it6){
         if(i<jugadas.size()&&jugadas.at(i)->getX()==posx && jugadas.at(i)->getY()==posy){
             retorno=jugadas.at(i);
  
         }
         i++;
     }
                 
     return retorno;
 }
 int Player:: damePosicion(int posx,int posy){
     
     int retorno =-1;
     if((posx>100 && posx<700)&&(posy>80 && posy<475)){
        posx = (posx-100)/50;
        posy = (posy-80)/50;
    }
     vector<Invocacion*>::iterator it5;
                 int i=0;
     for(it5=jugadas.begin();it5!=jugadas.end();++it5){
         if(i<jugadas.size()&&jugadas.at(i)->getX()==posx && jugadas.at(i)->getY()==posy){
             retorno=i;
         }
         i++;
     }
               
                 return i;
 }
 bool Player:: estaJugadaEn(int posx, int posy){
      vector<Invocacion*>::iterator it1;
                 int i=0;
     if((posx>100 && posx<700)&&(posy>80 && posy<475)){
        posx = (posx-100)/50;
        posy = (posy-80)/50;
    }
     for(it1=jugadas.begin();it1!=jugadas.end();++it1){
         if(i<jugadas.size() && jugadas.at(i)->getX()==posx && jugadas.at(i)->getY()==posy){
        
            
             return true;
             
         }
         i++;
     }
               
     return false;
 }
 void Player:: Robar(){
     vector<Invocacion*>::iterator it5;
                 int i=0;
                 int j =0;
     for(it5=mano.begin();it5!=mano.end();++it5){
         
         i++;
     }
                 j=j+1;
                 RellenarMano(invo.at(posmano),i);
                 eliminarJugadas(invo.at(posmano));
 }

Player::~Player(){
}

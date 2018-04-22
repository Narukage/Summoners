#ifndef IFACHADA_H
#define IFACHADA_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <string>

//FACHADA DEL MOTOR2D

//La fachada es una clase abstracta
class IFachada {
public:
    IFachada(){};
    virtual ~IFachada(){};
    virtual void crearVentana(int width, int height, int frames, bool vsync) = 0;
    
    virtual int crearAnimacion(std::string &url, float imageCountx, float imageCounty, float switchTime) = 0;
    virtual void updateAnimacion(int row,float deltaTime) = 0;
    virtual bool borrarAnimacion(int id) = 0;
    virtual int crearSprite(std::string &url) = 0;
    virtual bool borrarSprite(int id) = 0;
    virtual void dibujar(int id, float positionx, float positiony, float scale) = 0;
    virtual int crearAudio(std::string &url, int volumen) = 0;
    virtual bool borrarAudio(int id) = 0;
    virtual void play(int id) = 0;
    virtual int crearTexto(std::string &url) = 0;
    virtual bool borrarTexto(int id) = 0;
    //virtual void escribir() = 0;
    virtual sf::RenderWindow* getWindow() = 0;
private:

};

#endif /* IFACHADA_H */


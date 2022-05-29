#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "object.h"


struct Object_ {
    unsigned Weight;
    unsigned Height;
    unsigned Width;
    unsigned Length;
    unsigned Density;
    unsigned Temperature;
};

unsigned getHeight(Object* this_) {
    return this_->Height;
}
unsigned getWidth(Object* this_) {
    return this_->Width;
}
unsigned getWeight(Object* this_) {
    return this_->Weight;
}
unsigned getLength(Object* this_) {
    return this_->Length;
}
unsigned getDensity(Object* this_) {
    return this_->Density;
}
unsigned getTemperature(Object* this_) {
    return this_->Temperature;
}

int checkHeight(unsigned Height) {
    return ((Height < MAX_Height) && (Height >= 0));
}
int checkWeight(unsigned Weight) {
    return ((Weight < MAX_Weight) && (Weight > 0));
}
int checkWidth(unsigned Width) {
    return ((Width < MAX_Width)&& (Width > 0));
}
int checkLength(unsigned Length) {
    return ((Length < MAX_Length) && (Length > 0));
}
int checkDensity(unsigned Density) {
    return ((Density < MAX_Density) && (Density > 0));
}
int checkTemperature(unsigned Temperature) {
    return ((Temperature < MAX_Temperature));
}

unsigned getVolume(Object* temp_) {
    printf("Volume==%lu", temp_->Length * temp_->Height * temp_->Width);
    return temp_->Length * temp_->Height * temp_->Width;
}
unsigned getGravity(Object* temp_) {
    printf("Force of Gravity==%lu", temp_->Weight * 10);
    return temp_->Weight *10;
}
unsigned getPressure(Object* temp_) {
    unsigned force = getGravity(temp_);    
    unsigned square = temp_->Height * temp_->Length;    
    printf("Pressure==%lu", force / square);
    return force/square;
}
unsigned getPotentialEnergy(Object* temp_) {
    printf("PotentialEnergy==%lu", temp_->Height * 10 * temp_->Weight);
    return temp_->Height * 10 * temp_->Weight;
}
unsigned getArchimedes(Object* tempwater_, Object* temp_ ) {
    unsigned vol = getVolume(tempwater_);
    unsigned force = temp_->Density * vol * 10;  
    printf("Archimedes==%lu", force);
    return force;
}
unsigned getFahrenheit(Object* temp_) {
    printf("Fahrenheit==%lu", temp_->Temperature + 273);
    return temp_->Temperature + 273;
}

unsigned Contructor() {
    int a;
    scanf_s("Ender Height of object %d", &a);
    int b;
    scanf_s("Ender Weight of object %d", &b);
    int c;
    scanf_s("Ender Width of object %d", &c);
    int d;
    scanf_s("Ender Length of object %d", &d);
    int e;
    scanf_s("Ender Density of object %d", &e);
    int f;
    scanf_s("Ender Temperature of object %d", &f);
    Object* object = createObject(a, b, c, d, e, f);
    return object;
}
unsigned Destructor(Object* temp_)
{
    free(temp_);  
    return;
}



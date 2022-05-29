#pragma once

#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <stdlib.h>

#define MAX_Height 10000
#define MAX_Weight  10000
#define MAX_Width  10000
#define MAX_Length  10000
#define MAX_Density  10000
#define MAX_Temperature  10000
#define BAD_DATA -5

struct Object_;

typedef struct Object_ Object;

Object* createObject(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);

void setHeight(Object*, unsigned);
void setWeight(Object*, unsigned);
void setWidth(Object*, unsigned);
void setLength(Object*, unsigned);
void setDensity(Object*, unsigned);
void setTemperature(Object*, unsigned);

unsigned getHeight(Object*);
unsigned getWeight(Object*);
unsigned getWidth(Object*);
unsigned getLength(Object*);
unsigned getTemperature(Object*);
unsigned getDensity(Object*);


static int checkHeight(unsigned);
static int checkWeight(unsigned);
static int checkWidth(unsigned);
static int checkLength(unsigned);
static int checkTemperature(unsigned);
static int checkDensity(unsigned);

#endif
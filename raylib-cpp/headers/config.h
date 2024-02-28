/*
 * Copyright Rowan Pijnaker
 */
#include <raylib.h>
#include <iostream>
#include <core.h>
#include <scene.h>

#ifndef CONFIG_H
#define CONFIG_H

const int SWIDTH = 910;
const int SHEIGHT = 540;

class Config
{
public:
    Config();
    virtual ~Config();

private:
};
#endif /* CONFIG_H */
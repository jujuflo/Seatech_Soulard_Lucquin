clear all
clc
close all

J=0.28;
b=8.5E-3;
K=0.5093;
R=0.13;
L=1.6E-3;

Cr=0;

%méthode de Ziegler-Nichols
Ku=10;
Tu=15;

% Kp=3;
% Ki=28;
% Kd=0.028;
Kp=3;
Ki=28;
Kd=0.028;

Kpos=6;
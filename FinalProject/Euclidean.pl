%Programmer: Musa Ali
%Euclidean in Prolog
%Does not work for some reason.....
gcd(U,0,U).
gcd(U,V,W):- (V\=0),R is U mod V,gcd(V,R,W).

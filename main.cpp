#include <iostream>
#include "func.hpp" 
int main(){
    while(true){
        int a =0;
        std::cout<<"hola bienvenido a este celular jeje todo inteligente"<<std::endl;
        std::cout<<"introduce un numero:"<<std::endl;
        std::cout<<"1.Salir"<<std::endl;
        std::cout<<"2.Calculadora"<<std::endl;
        std::cout<<"3. Conversor de unidades"<<std::endl;
        std::cout<<"4.Estadistica basica "<<std::endl;
            std::cin>>a;
        if(a==1){
            break;
        }
        else if(a ==2){
            int des1 =0;
            while(true){
            deltex();
            std::cout<<"hola bienvenido a la calculadora de este celular"<<std::endl;
            std::cout<<"que deseas hacer??"<<std::endl;
            std::cout<<"1.Suma"<<"\n"<<"2.Resta"<<"\n"<<"3.Multiplicacion"<<"\n"<<"4.Division"<<"\n"<<"5.Pitagoras"<<"\n"<<"6.Ceros"<<"7.Salir"<<std::endl;
            std::cin>>des1;
            if(des1 ==1){
                while(true){
                    int c,e,d =0;

                std::cout<<"perfecto pasame los numeros que quieras sumar "<<std::endl;
                std::cin>>e;
                std::cout<<"\n";
                std::cin>>c;
                std::cout<<"\n";
                std::cout<<"el resultado de tu suma es "<<sum(c,e)<<std::endl;
                std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;
                }

                
            }

        }
else if(des1 ==2){

    while(true){
    std::cout<<"Hola que numeros deseas restar?"<<std::endl;
    int f,r,d =0;
    std::cin>>f;
    std::cout<<"\n";
    std::cin>>r;
    std::cout<<"el resultado de la resta es "<<sus(a,b)<<std::endl;
std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;
}   
}

    }
else if (des1 ==3){
    while(true){
    std::cout<<"Hola que numeros deseas multiplicar?"<<std::endl;
    int f,r,d =0;
    std::cin>>f;
    std::cout<<"\n";
    std::cin>>r;
    std::cout<<"\n";
    std::cout<<"el resultado de la multiplicacion es "<<mult(f,r)<<std::endl;
std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;
}
    }
}
else if (des1 ==4){
    while(true){
    std::cout<<"Hola que numeros deseas dividir?"<<std::endl;
    int f,r,d =0;
    std::cin>>f;
    std::cout<<"\n";
    std::cin>>r;
    std::cout<<"\n";
    std::cout<<"el resultado de la division es "<<div(f,r)<<std::endl;
std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;
}
    }
}
else if (des1 ==5){
    while(true){
    std::cout<<"Hola dime los catetos para calcular la hipotenusa"<<std::endl;
    int f,r,d =0;
    std::cin>>f;
    std::cout<<"\n";
    std::cin>>r;
    std::cout<<"\n";
    std::cout<<"el resultado de la hipotenusa es "<<pit(f,r)<<std::endl;
std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;
}
    }

else if (des1 ==6){
    while (true){
    
    std::cout<<"Hola dime los coeficientes a,b y c para calcular los ceros de la ecuacion"<<std::endl;
    double a,b,c =0;
    std::cin>>a;
    std::cout<<"\n";
    std::cin>>b;
    std::cout<<"\n";
    std::cin>>c;
    std::cout<<"\n";
    std::cout<<"el primer cero es "<<ceros1(a,b,c)<<" y el segundo cero es "<<ceros2(a,b,c)<<std::endl;
    std::cout<<"deseas continuar?,1 para si 2 para no"<<std::endl;
                int d =0;
                std::cin>>d;
                if(d==1){
                    continue;
                }
                else{
                    break;      
}
}
}   
else if(des1 ==7){
    break;
}
            }
        }
    }



else if(a ==3){
    while(true){
        deltex();
        int p =0;
        std::cout<<"Hola buenas bienvenidos al conversor de unidades"<<std::endl;
        std::cout<<"Qué desea convertir?"<<"1.kilometros a metros "<<"\n"<<"2.Gramos a Kilogramos"<<" \n 3.Grados Celsius a Farenheit"<<"\n 4. Grados Celsius a Kelvin \n"<<"5.Salir"<<std::endl;
        std::cin>>p;
        if(p ==1){
           while(true){ 
            int l =0;
            int des =0;
            std::cout<<"paseme la cantidad de kilometros que quiere convertir a metros "<<std::endl;
                std::cin>>l;
            std::cout<<"la cantidad de metros que son eso que me pasaste es :"<<kilo(l);
            std::cout<<"Deses continuar? 1 para si 2 para no"<<std::endl;      
            std::cin>>des;
            if(des ==1){
                continue;
            }
            else{
                break;
            }
        }
    }
        else if (p ==2 ){
            while(true){ 
            int l =0;
            int des =0;
            std::cout<<"paseme la cantidad de kilogramos que quiere convertir a gramos "<<std::endl;
                std::cin>>l;
            std::cout<<"la cantidad de gramos que son eso que me pasaste es :"<<kilo(l);
            std::cout<<"Deses continuar? 1 para si 2 para no"<<std::endl;      
            std::cin>>des;
            if(des ==1){
                continue;
            }
            else{
                break;
            }
        }

}

else if(p ==3 ){
    while (true){
        double cel = 0;
        int o =0;
        std::cout<<"hola este es el convertidor de grados celsius a farenheit jeje pasame tus grados en celsius "<<std::endl;
        std::cin>>cel;
        std::cout<<"bueno tus grados farenheit son :"<< celcfah(cel)<<std::endl;
        std::cout<<"deseas continuar?1 Para si 2 Para no"<<std::endl;
        std::cin>>o;
        if(o ==1){
            continue;
        }
        else{
            break;
        }


    }

}




else if(p ==4 ){
    while (true){
        double cel = 0;
        int o =0;
        std::cout<<"hola este es el convertidor de grados kelvin a celsius jeje pasame tus grados en celsius "<<std::endl;
        std::cin>>cel;
        std::cout<<"bueno tus grados farenheit son :"<< celkel(cel)<<std::endl;
        std::cout<<"deseas continuar?1 Para si 2 Para no"<<std::endl;
        std::cin>>o;
        if(o ==1){
            continue;
        }
        else{
            break;
        }


    }

}
else if(p ==5){
    break;

}
else{
    break;
}

}//este se supone que es el while que todo lo mantiene 


}//el if del inicial

else if(a==4){
    

while(true){
    deltex();
int j =0;
    std::cout<<"hola bienvenido a la estadistica básica, escoge"<<std::endl;
    std::cout<<"1.Salir \n"<<"2.Promedio\n";
    std::cin>>j;
    if(j == 1){
        break;
    }
    else if(j ==2){
        while(true){
            int k =0;
            double tmp =0;
            double er =0;
            std::cout<<"pasame tu numero de datos que posees "<<std::endl;
            std::cin>>k;

            for(int i =0; i<=k; i++){
                std::cout<<"inserte el dato numero "<<i<<std::endl;
                std::cin>>tmp;
                er+=tmp;
                
            }
            std::cout<<"el promedio de los datos que me acabas de pasar es "<<prom(er,k)<<std::endl;


        }



    }


    else{
        break;
    }



}


}

}//el while del inicial
    return 0;
}



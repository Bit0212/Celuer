#pragma once
#include <cmath>
#include <iostream>

class calculator {

  int sum(int a, int b) { return a + b; }
  int sustr(int b, int a) { return a - b; }
  double mult(double b, double a) { return a * b; }
  double div(double b, double a) { return a / b; }
  int pit(int a, int b) { return pow((pow(a, 2) + pow(b, 2)), 0.5); }

  double ceros2(double a, double b, double c) {
    double discriminant = pow(b, 2) - (4 * a * c);

    return (-b - pow(discriminant, 0.5) / (2 * a));
  }
  double ceros1(double a, double b, double c) {
    double discriminant = pow(b, 2) - (4 * a * c);

    return (-b + pow(discriminant, 0.5) / (2 * a));
  }

  int kilo(int a) { return a * 1000; }
  double celfah(double a) { return (a * 9 / 5) + 32; }
  double celkel(double a) { return a + 273.15; }

  void deltex() {
    for (int i = 0; i < 10000; i++) {

      std::cout << "\n";
    }
  }

  void Susexec() {
    while (true) {
      deltex();
      int u, k, decisi3 = 0;
      std::cout << "Hola bienvenido a la resta que deseas restar?" << std::endl;
      std::cout << "introduzca el primer numero" << std::endl;
      std::cin >> u;
      std::cout << "introduzca el segundo numero" << std::endl;
      std::cin >> k;
      std::cout << "\nPerfecto el resultado de la resta es :" << sustr(u, k)
                << " tenga un buen dia" << std::endl;
      std::cout
          << "desea sumar otra cosa o desea irse (1 para seguir, 2 para irse)"
          << std::endl;
      std::cin >> decisi3;
      if (decisi3 == 1) {
        continue;

      } else {
        break;
      }
    }
  }

  void prom() {

    while (true) {
      deltex();
      double e, tmp, r, decisi2 = 0;
      std::cout << "pasame un numerito jeje de datos" << std::endl;
      std::cin >> e;
      for (int c = 1; c <= e; c++) {
        std::cout << "pasame el dato numero " << c << " porfavor" << std::endl;
        std::cin >> tmp;
        std::cout << "\n";
        r += tmp;
      }
      std::cout << "tu promedio de datos es: " << div(r, e)
                << " un saludo tenga un buen dia" << std::endl;
      std::cout << "bueno, deseas continuar sumando o no?(1 para seguir, 2 "
                   "para salir)"
                << std::endl;
      std::cin >> decisi2;
      if (decisi2 == 1) {

        continue;
      }

      else {

        break;
      }
    }
  }

  void Sumexec() {
    while (true) {
      deltex();
      int a, b, decisi = 0;
      std::cout << "Hola bienvenido a la suma que deseas sumar?" << std::endl;
      std::cout << "introduzca el primer numero" << std::endl;
      std::cin >> a;
      std::cout << "introduzca el segundo numero" << std::endl;
      std::cin >> b;
      std::cout << "\nPerfecto el resultado de la suma es :" << sum(a, b)
                << " tenga un buen dia" << std::endl;
      std::cout
          << "desea sumar otra cosa o desea irse (1 para seguir, 2 para irse)"
          << std::endl;
      std::cin >> decisi;
      if (decisi == 1) {
        continue;

      } else {
        break;
      }
    }
  }

  void divexec() {
    while (true) {
      deltex();
      int decisi4 = 0;
      double p, j = 0;
      std::cout << "hola bienvenido a la division, pasame los numeros que "
                   "desees dividir "
                << std::endl;
      std::cin >> p;
      std::cout << "\n";
      std::cin >> j;
      std::cout << "\nPerfecto tu division da este resultado : " << div(p, j)
                << "ten un buen dia " << std::endl;
      std::cout
          << "deseas continuar dividiendo o no (1 Para continuar, 2 Para irse)"
          << std::endl;
      std::cin >> decisi4;
      if (decisi4 == 1) {
        continue;

      }

      else {
        break;
      }
    }
  }

  void multexec() {
    while (true) {
      deltex();
      int decisi5 = 0;
      double h, g = 0;
      std::cout << "hola bienvenido a la multiplicacion, pasame los numeros "
                   "que desees multiplicar "
                << std::endl;
      std::cin >> h;
      std::cout << "\n";
      std::cin >> g;
      std::cout << "\nPerfecto tu multiplicacion da este resultado : "
                << mult(g, h) << "ten un buen dia " << std::endl;
      std::cout
          << "deseas continuar dividiendo o no (1 Para continuar, 2 Para irse)"
          << std::endl;
      std::cin >> decisi5;
      if (decisi5 == 1) {
        continue;

      }

      else {
        break;
      }
    }
  }

  void pythexec() {
    while (true) {
      deltex();
      int decisi6 = 0;
      int cat1, cat2 = 0;
      std::cout << "hola bienvenido al calculador de hipotenusa porfavor "
                   "inserte sus catetos"
                << std::endl;
      std::cin >> cat1;
      std::cout << "\n";
      std::cin >> cat2;
      std::cout << "\n";
      std::cout << "perfecto tu hipotenusa es:  " << pit(cat1, cat2)
                << std::endl;
      std::cout << "deseas continuar con los triangulitos o deseas irte?(1 "
                   "para irte, 2 para seguir)"
                << std::endl;
      std::cin >> decisi6;
      if (decisi6 == 1) {
        break;

      } else {

        break;
      }
    }
  }

  void ceroexec() {

    while (true) {
      deltex();
      int decisi7 = 0;
      double y, z, m = 0;

      std::cout
          << "Hola buenas bienvenido al caluclador de ceros, pasame tus numeros"
          << std::endl;
      std::cin >> y;
      std::cout << "\n";
      std::cin >> z;
      std::cout << "\n";
      std::cin >> m;
      std::cout << "\n";
      std::cout << "tus ceros son : " << ceros1(y, z, m) << "y "
                << ceros2(y, z, m);
      std::cout
          << "deseas continuar haciendo ceros  o no?  (1 para si 2 para no)"
          << std::endl;
      std::cin >> decisi7;
      if (decisi7 == 1) {
        continue;
      } else {
        break;
      }
    }
  }

  void maincalc() {
    while (true) {
      deltex();
      int decisio1 = 0;
      std::cout
          << "hola bienvenido a la calculadora jeje je je escoge una opcion:"
          << std::endl;
      std::cout << "1.Salir\n2.Suma\n3.Resta\n4.Division\n5.Multiplicacion\n6."
                   "Calculador de hipotenusa\n7.Calculador de ceros\n";
      std::cin >> decisio1;

      if (decisio1 == 1) {

        break;

      } else if (decisio1 == 2) {
        Sumexec();

      }

      else if (decisio1 == 3) {
        Susexec();

      } else if (decisio1 == 4) {
        divexec();

      } else if (decisio1 == 5) {
        multexec();
      } else if (decisio1 == 6) {
        pythexec();
      } else if (decisio1 == 7) {
        ceroexec();
      } else {
        break;
      }
    }
  }

  void CelcaFahexec() {
    while (true) {
      deltex();
      int dec = 0;
      double celsius = 0;
      std::cout << "hola bienvenido al convertidor de celsius a fahrenheit, "
                   "porfavor ingrese los grados celsius"
                << std::endl;
      std::cin >> celsius;
      std::cout << "En grados fahrenheit es :" << celfah(celsius) << std::endl;
      std::cout << "desea seguir convirtiendo mas grados celsius a fahrenheit? "
                   "(1 para si 2 para no)";
      std::cin >> dec;
      if (dec == 1) {
        continue;
      } else {
        break;
      }
    }
  }

  void CelcaKelexec() {
    while (true) {
      deltex();
      int dec = 0;
      double celsius = 0;
      std::cout << "hola bienvenido al convertidor de celsius a kelvin, "
                   "porfavor ingrese los grados celsius"
                << std::endl;
      std::cin >> celsius;
      std::cout << "En grados kelvin es :" << celkel(celsius) << std::endl;
      std::cout << "desea seguir convirtiendo mas grados celsius a kelvin? "
                   "(1para si 2 para no)";
      std::cin >> dec;
      if (dec == 1) {
        continue;
      } else {
        break;
      }
    }
  }

  void gramakilexec() {
    while (true) {
      deltex();
      int gramos, dec2 = 0;
      std::cout << "hola buenas estamos en el convertidor de kilos a gramos "
                   "porfavor ingrese sus gramos"
                << std::endl;
      std::cin >> gramos;
      std::cout << "\n bueno eso en gramos es :" << kilo(gramos) << std::endl;
      std::cout << "desea continuar calculando kilos? (1 para si, 2 para no)"
                << std::endl;
      std::cin >> dec2;
      if (dec2 == 1) {
        continue;
      } else {
        break;
      }
    }
  }

  void convertunit() {
    while (true) {
      deltex();
      int decisio2 = 0;
      std::cout << "hola bienvenido al conversor de unidades de temperatura! "
                   "que deseas convertir?"
                << std::endl;
      std::cout << "1.Salir\n2.Celsius a Fahrenheit\n3.Celsius a "
                   "Kelvin\n4.Gramos a kilos\n";
      std::cin >> decisio2;
      if (decisio2 == 1) {
        break;
      } else if (decisio2 == 0) {
        continue;
      }

      else if (decisio2 == 2) {
        CelcaFahexec();

      } else if (decisio2 == 3) {
        CelcaKelexec();

      } else if (decisio2 == 4) {
        gramakilexec();

      }

      else {
      }
    }
  }

public:
  void mainmenu() {
    while (true) {
      deltex();
      int desicio = 0;
      std::cout << "hola bienvenido al programa de la calculadora, por favor "
                   "introduce lo que quieres tener \n";
      std::cout << "1.Salir\n2.Calculadora basica\n3.Conversor de "
                   "unidades\n4.Estadistica basica\n ";
      std::cin >> desicio;

      if (desicio == 1) {
        break;
      } else if (desicio == 2) {
        maincalc();
      } else if (desicio == 3) {
        convertunit();
      }

      else if (desicio == 4) {
        prom();
      } else if (desicio == 0) {
        continue;
      }

      else {
        break;
      }
    }
  }
};

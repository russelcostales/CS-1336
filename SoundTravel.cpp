#include <iostream>
#include <iomanip>

const double s_air = 1133.2;
const double s_water = 4871.0;
const double s_steel = 16400.0;

void calculate(std::string med, double dis, double s){
      std::cout << "In " << med << " it will take " << dis/s << " seconds to travel " << dis << " feet." << std::endl;
}

int main(){
      std::cout << std::fixed << std::setprecision(4);

      std::cout << "\t" << "Time for Sound to Travel through a Medium given Distance" << std::endl;
      std::cout << std::endl;

      std::cout << "1 - Air" << std::endl;
      std::cout << "2 - Water" << std::endl;
      std::cout << "3 - Steel" << std::endl;

      std::cout << std::endl;

      unsigned int med;
      double dis;

      std::cout << "Enter the number of the medium: " << std::endl;
      std::cin >> med;

      if (!(med >= 1 && med <= 3)){
            std::cout << "the entry is invalid" << std::endl;
            std::cout << "run the program again" << std::endl;

            return 0;
      }


      std::cout << "Input distance to travel (in feet)" << std::endl;
      std::cin >> dis;

      if (dis <= 0){
            std::cout << "the distance must be greater than zero" << std::endl;

            return 0;
      }

      switch(med){
            case 1: calculate("air", dis, s_air); break;
            case 2: calculate("water", dis, s_water); break;
            case 3: calculate("steel", dis, s_steel); break;
      }
}
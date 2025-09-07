 #include <iostream>
 #include <vector>
 #include <cstdlib>
 #include <ctime>
 #include <iomanip>
    using namespace std;
    struct Color {
        int redValue;
        int greenValue;
        int blueValue;
    };
        //This function prototype is for the makeColor function.
        Color makeColor();
        

    int main() {
        vector<Color> colorVector;
        srand(time(0)); //seeding the random number generator.
        int randNum = rand() % 25 + 25;
        for (int index = 0; index < randNum; index++) {
        colorVector.insert(colorVector.begin() + index, makeColor());
        }
        
        cout << "\nOutputting " << randNum <<" Random Colors:\n";

        cout << setw(10) << left << "Color #:"
        << setw(10) << left << "Red" << setw(10) << left << "Green"
        << setw(10) << left << "Blue" << endl;

        for(int index = 0; index < randNum; index++) {
            
            cout << "Color " << setw(4) << index + 1 << setw(10) << colorVector[index].redValue << setw(10)
            << colorVector[index].greenValue << setw(10) << colorVector[index].blueValue << endl;
        }
        cout << endl << endl;

        return 0;
    }
    //This function generates a random values for reds, greens, blues and returns it as a Color struct variable.
    Color makeColor() {
        Color temp; //a temperary struct variable.

            temp.redValue = rand() % 256;
            temp.greenValue = rand() % 256;
            temp.blueValue = rand() % 256;
        
    
    return temp;
    }
    
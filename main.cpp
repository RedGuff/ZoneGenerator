#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

int main()
{
    srand ( time ( NULL ) ); // No need for better init.
    cout << "Ce logiciel, EN VERSION PRE-ALPHA, fait un fichier POV avec quelques valeurs de commencement." << endl;
string fileOut = "";
do
{

cout << "File.pov ? (nom non vide, sans l\'extention)." << endl;
getline(cin, fileOut);


} while (fileOut == "");

fileOut = fileOut + ".pov";
    ofstream ajouteFichier(fileOut.c_str(), ios::app);
    if(!ajouteFichier)
    {
        cerr << "Impossible to open the file!" << endl;
    }
    else
    {
/* Générique :
#include "colors.inc"
camera {
    location <3, 1, -10>
    look_at <3,0,0>
}
light_source { <500,500,-1000> White }
text {
    ttf "timrom.ttf" "Hello, world!" 1, 0
    pigment { White }
}
*/




            ajouteFichier << "#include \"woods.inc\"" << endl;
            ajouteFichier << "#include \"glass.inc\"" << endl;
            ajouteFichier << "#include \"colors.inc\"" << endl;
            ajouteFichier << "#include \"textures.inc\"" << endl;
            ajouteFichier << "#include \"camera.inc\"" << endl;
            ajouteFichier << "#include \"light.inc\"" << endl;
            ajouteFichier << "#include \"background.inc\"" << endl;


                /*
                plane{
   y,0
   pigment{
        checker color rgb <1,1,0>
                color rgb <0,1,1>
   }
 }

 sphere{
   <0,2,0>,2
   pigment{
        color rgb <1,0,0>
   }
 }
                */



                }
    ajouteFichier.close();
    string command = "povray " + fileOut;
    int system (const char* command);


    return 0;
}

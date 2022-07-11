//   _____                _     _           _                  _                              _                   
//  / ____|              | |   (_)         | |                | |                            | |                  
// | |     __ _ _ __ ___ | |__  _  __ _  __| | ___  _ __    __| | ___   _ __   ___  _ __ ___ | |__  _ __ ___  ___ 
// | |    / _` | '_ ` _ \| '_ \| |/ _` |/ _` |/ _ \| '__|  / _` |/ _ \ | '_ \ / _ \| '_ ` _ \| '_ \| '__/ _ \/ __|
// | |___| (_| | | | | | | |_) | | (_| | (_| | (_) | |    | (_| |  __/ | | | | (_) | | | | | | |_) | | |  __/\__ \
//  \_____\__,_|_| |_| |_|_.__/|_|\__,_|\__,_|\___/|_|     \__,_|\___| |_| |_|\___/|_| |_| |_|_.__/|_|  \___||___/
                                                                                                                
                                                                                                               





#include <iostream>
#include <windows.h>

int main(int argc, char** argv)
{
	std::cout << "CAMBIADOR DE NOMBRES DE VENTANAS" << std::endl;

	char NombreVentana[] = "Synthesia 10.8.5686";
	char NuevoNombre[] = "DanucoHackeado";

	HWND window = FindWindow(NULL, NombreVentana);
	SetWindowText(window, NuevoNombre);
}
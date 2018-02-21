#include "Table.h"

using namespace GoFish;

int main() {
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Console::SetWindowSize(1, 1);
	Console::SetWindowPosition(0, 0);
	Application::Run(gcnew Table());
	return 0;
}
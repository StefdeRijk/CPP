#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137, false) , _target("")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, false), _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object): 
	Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute(), object.getSigned()), _target(object._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &object)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	this->_target = object._target;
	return (*this);
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	file;

	file.open(this->_target + "_shrubbery");
	file << "              _{\\ _{\\{\\/}/}/}__\n             {/{/\\}{/{/\\}(\\}{/\\} _\n            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
	file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
	file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
	file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
	file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
	file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n             {/{\\{\\{\\/}/}{\\{\\\\}/}\n              {){/ {\\/}{\\/} \\}\\}\n              (_)  \\.-'.-/\n";
	file << "          __...--- |'-.-'| --...__\n   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n -\"    ' .  . '    |.'-._| '  . .  '   \n";
	file << " .  '-  '    .--'  | '-.'|    .  '  . '\n          ' ..     |'-_.-|\n  .  '  .       _.-|-._ -|-._  .  '  .\n              .'   |'- .-|   '.\n";
	file << "  ..-'   ' .  '.   `-._.-`   .'  '  - .\n   .-' '        '-._______.-'     '  .\n        .      ~,\n    .       .   |\\   .    ' '-.\n";
	file << "    ___________/  \\____________\n   /  Why is it, when you want \\\n  |  something, it is so damn   |\n  |    much work to get it?     |\n";
	file << "   \\___________________________/\n\n";
	file << "              _{\\ _{\\{\\/}/}/}__\n             {/{/\\}{/{/\\}(\\}{/\\} _\n            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
	file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
	file << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
	file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
	file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
	file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n             {/{\\{\\{\\/}/}{\\{\\\\}/}\n              {){/ {\\/}{\\/} \\}\\}\n              (_)  \\.-'.-/\n";
	file << "          __...--- |'-.-'| --...__\n   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n -\"    ' .  . '    |.'-._| '  . .  '   \n";
	file << " .  '-  '    .--'  | '-.'|    .  '  . '\n          ' ..     |'-_.-|\n  .  '  .       _.-|-._ -|-._  .  '  .\n              .'   |'- .-|   '.\n";
	file << "  ..-'   ' .  '.   `-._.-`   .'  '  - .\n   .-' '        '-._______.-'     '  .\n        .      ~,\n    .       .   |\\   .    ' '-.\n";
	file << "    ___________/  \\____________\n   /  Why is it, when you want \\\n  |  something, it is so damn   |\n  |    much work to get it?     |\n";
	file << "   \\___________________________/\n";
	file.close();
}

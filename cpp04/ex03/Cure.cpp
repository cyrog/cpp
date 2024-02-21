#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
<<<<<<< HEAD
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure default destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs) {
	if (&rhs == this)
		return *this;
	AMateria::operator=(rhs);
	std::cout << "Cure operator= called" << std::endl;
=======
std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src) {
	std::cout << "Cure copy constrcuctor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &src) {
	if (&src == this)
		return *this;
	AMateria::operator=(src);
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	return *this;
}

AMateria	*Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) {
<<<<<<< HEAD
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
=======
std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
}

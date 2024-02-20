#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0) {
	std::cout << "default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		_stock[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src) : _index(0) {
	std::cout << "copy constructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->_stock[i] = src._stock[i];
	}
	this->_index = src._index;
}

MateriaSource::~MateriaSource() {
	std::cout << "default MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_stock[i])
			delete this->_stock[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src) {
	std::cout << "operator= MateriaSource called" << std::endl;
	if (&src == this)
		return *this;
	this->_index = src._index;
	for (int i = 0; i < 4; i++) {
		this->_stock[i] = src._stock[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia) {
	if (_stock[_index])
		delete _stock[_index];
	_stock[_index] = materia;
	if (_index == 3)
		_index = 0;
	else
		_index++;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_stock[i] && _stock[i]->getType() == type) {
			AMateria *materia = _stock[i];
			return materia;
		}
	}
	return 0;
}
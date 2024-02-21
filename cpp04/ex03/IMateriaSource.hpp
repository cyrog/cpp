#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

<<<<<<< HEAD
class	IMateriaSource {
	public:
		virtual	~IMateriaSource() {}
		virtual	void	learnMateria(AMateria *materia) = 0;
		virtual	AMateria*	createMateria(std::string const &type) = 0;
=======
class IMateriaSource {
	public:
		virtual			~IMateriaSource() {}
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
		virtual void		printMateria() = 0;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
};

#endif

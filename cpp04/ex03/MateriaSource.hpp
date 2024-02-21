#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
<<<<<<< HEAD
#include "AMateria.hpp"

class	MateriaSource : public IMateriaSource {
	protected :
		int			_index;
		AMateria	*_stock[4];
=======

class MateriaSource : public IMateriaSource {

	int		_index;
	AMateria	*_stock[4];

>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &src);
<<<<<<< HEAD
		void			learnMateria(AMateria* materia);
		AMateria*		createMateria(std::string const &type);
=======

		void			learnMateria(AMateria* materia);
		AMateria*		createMateria(std::string const & type);
		void			printMateria();
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
};

#endif

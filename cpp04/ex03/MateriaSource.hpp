#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource : public IMateriaSource {
	protected :
		int			_index;
		AMateria	*_stock[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &src);
		void			learnMateria(AMateria* materia);
		AMateria*		createMateria(std::string const &type);
};

#endif

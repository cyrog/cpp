#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

<<<<<<< HEAD
class	AMateria;
class	ICharacter {
	public:
		virtual	~ICharacter() {}
		virtual	std::string const &getName() const = 0;
		virtual	void	equip(AMateria* m) = 0;
		virtual	void	unequip(int idx) = 0;
		virtual	void	use(int idx, ICharacter &target) = 0;
=======
class AMateria;
class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
>>>>>>> 8ab5e113abc0c817f5356f2f09ba6bc503b3e897
};

#endif

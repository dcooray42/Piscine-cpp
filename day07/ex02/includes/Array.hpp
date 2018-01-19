#include <exception>
#include <iostream>

template<typename T>
class	Array
{
public	:
	Array(void) : _array(NULL), _size(0)
	{
		return ;
	}

	Array(unsigned int n)
	{
		unsigned int	i = 0;

		if (n == 1)
			_array = new T();
		else if (n)
			_array = new T[n];
		else
			_array = NULL;
		_size = n;
		while (i < n)
			_array[i++] = static_cast<T>(0);
		return ;
	}

	Array(Array const & array)
	{
		unsigned int	i = 0;

		if (array._size == 1)
			_array = new T();
		else if (array._size)
			_array = new T[array._size];
		else
			_array = NULL;
		_size = array._size;
		while (i < _size)
		{
			_array[i] = array._array[i];
			i++;
		}
		return ;
	}

	~Array(void)
	{
		if (this->_size == 1)
			delete _array;
		else if (this->_size)
			delete [] _array;
		return ;
	}

	Array &	operator=(Array const & array)
	{
		unsigned int	i = 0;

		if (this->_size == 1 && this->_size != array._size)
			delete this->_array;
		else if (this->_size && this->_size != array._size)
			delete [] this->_array;
		if (array._size == 1 && this->_size != array._size)
			this->_array = new T();
		else if (array._size && this->_size != array._size)
			this->_array = new T[array._size];
		else
			this->_array = NULL;
		this->_size = array._size;
		while (i < this->_size)
		{
			this->_array[i] = array._array[i];
			i++;
		}
		return (*this);
	}

	class	OutOfBoundException : public std::exception
	{
	public	:
		OutOfBoundException(void)
		{
			return ;
		}

		OutOfBoundException(OutOfBoundException const & outOfBoundException)
		{
			(void)outOfBoundException;
			return ;
		}

		virtual ~OutOfBoundException(void) throw()
		{
			return ;
		}

		OutOfBoundException &	operator=(OutOfBoundException const & outOfBoundException)
		{
			(void)outOfBoundException;
			return (*this);
		}

		const char *	what(void) const throw()
		{
			return ("Error: Out of bounds");
		}
	};

	T	operator[](int i)
	{
		try
		{
			if (i < 0 || static_cast<unsigned int>(i) >= this->_size)
				throw OutOfBoundException();
			return (this->_array[i]);
		}
		catch (std::exception const &out)
		{
			std::cerr << out.what() << std::endl;
		}
		return (0);
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}

private	:
	T	*_array;
	unsigned int	_size;
};

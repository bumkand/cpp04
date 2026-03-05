#ifndef PRODUCTREPOSITORY_HPP
# define PRODUCTREPOSITORY_HPP

class ProductRepositoryDbContext
{
	private:
		DbContext * _context;

	public:
		// Inversion of Control.
		ProductRepository(DbContext * context);
		virtual ~ProductRepository();
}

#endif	// PRODUCTREPOSITORY_HPP

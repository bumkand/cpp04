#include "ProductRepository.hpp"

ProductRepositoryDbContext::ProductRepositoryDbContext(DbContext * context)
{
	_context = context;
}

ProductRepositoryDbContext::~ProductRepositoryDbContext()
{
	delete _context;
	_context = NULL;
}

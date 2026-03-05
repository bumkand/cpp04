#ifndef GETPRODUCTQUERYHANDLER_HPP
# define GETPRODUCTQUERYHANDLER_HPP

# include "ProductRepository.hpp"
# include "GetProductQuery.hpp"

class GetProductQueryHandler
{
	private:
		// Dependency Inversion.
		IProductRepository * _productRepository;

	public:
		// Dependency Inversion + Inversion of Control = Dependency Injection.
		// Dependency Injection is also one of the fundamental SOLID principles of OOP.
		GetProductQueryHandler(IProductRepository * productRepository);
		virtual ~GetProductQueryHandler();

		Product * Handle(GetProductQuery * request);
};

#endif	// GETPRODUCTQUERYHANDLER_HPP

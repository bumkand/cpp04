#include "GetProductQueryHandler.hpp"

GetProductQueryHandler::GetProductQueryHandler(IProductRepository * productRepository)
	: _productRepository(productRepository)
{
}

GetProductQueryHandler::~GetProductQueryHandler()
{
	_productRepository = NULL;
}

Product * GetProductQueryHandler::Handle(GetProductQuery * request)
{
	// ... Some implementation that would return the product.
}

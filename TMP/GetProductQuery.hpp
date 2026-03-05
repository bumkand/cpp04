#ifndef GETPRODUCTQUERY_HPP
# define GETPRODUCTQUERY_HPP

class GetProductQuery
{
	private:
		const std::string _ID;

	public:
		GetProductQuery(const std::string & id);
		virtual ~GetProductQuery();
};

#endif	// GETPRODUCTQUERY_HPP

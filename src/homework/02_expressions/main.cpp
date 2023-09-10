//write include statements
TEST_CASE("Test Get Sales Tax") {
	REQUIRE(get_sales_tax_amount(10.0) == 0.675);
	REQUIRE(get_sales_tax_amount(20.0) == 1.35);
}

TEST_CASE("Test Get Tip Amount") {
	REQUIRE(get_tip_amount(20.0, 15.0) == 3.0);
	REQUIRE(get_tip_amount(20.0, 20.0) == 4.0);
}

//write namespace using statement for cout

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	std::cout << "Enter meal amount: ";
	std::cin >> meal_amount;

	tax_amount=get_sales_tax_amount(meal_amount);

	std::cout << "Enter tip rate (%): ";
	std::cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	std::cout << "Meal Amount:		" << meal_amount << std::end1;
	std:cout << "Sales Tax:			" << tax_amount << std::end1;
	std::cout << "Tip Amount:		" << tip_amount << std::end1;
	std::cout << "Total:			" << total << std::end1;

	return 0;
}

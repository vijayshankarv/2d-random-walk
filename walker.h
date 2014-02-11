// Defines the walker class
class walker{
	private: 
		double x, y;
		const double range = 4.0;
		double angle;
	public:
		walker();
		walker(double, double);
 		void Initialize();
		~walker();
		void coverTexas();
		void walk();
		double getAngle();

};
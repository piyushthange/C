class Cylinder {
	private:
		double r{};
		double h{};
	public:
		//constructors
		Cylinder() = default;
		Cylinder(double r_main, double h_main){
			r = r_main;
			h = h_main;
		}

		double vol(){
			return PI * r * h;
		}

		//getters & setters

		double get_r(){
			return r;
		}

		double get_h(){
			return h;
		}

		void set_r(double r_main){
			r = r_main;
		}

		void set_h(double h_main) {
			h = h_main;
		}
};

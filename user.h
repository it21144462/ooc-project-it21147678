
class user
{
	protected:

		char Name[20];
		string Dob;
		char Gender[10];

	public:

		user();
		user(const char uName[], string uDob, char const uGender[]);
		void askQuestion();
		void giveFeedback();
};


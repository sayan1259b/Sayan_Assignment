class CString
{
	char* m_pbuff;
	int m_len;
public:
	CString();//defualt constructor
	CString(const char*);
	CString(char, int);
	CString(const CString  &s);
	CString(CString&& s);
	CString operator+(const CString& ss);
	char& operator[](int);
	CString& operator = (const CString&);
	CString& operator = (CString&&);
	CString& operator , (CString&);
	CString& operator+=(const char* ss);
	void accept_string();
	void show_string();

	~CString();//destructor
};
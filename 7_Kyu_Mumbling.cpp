class Accumul
{
public:
    static std::string accum(const std::string &s);
};


std::string Accumul::accum(const std::string& s)
{

  std::string ans;
  
  for(int i = 0;i<s.size();i++)
  {
    for(int j = 0;j<=i;j++)
    {
      if(j == 0) ans+= toupper(s[i]);
      else ans += tolower(s[i]);
    }
    if(i < s.size()-1) ans+= "-";
  }
  
return ans;
}

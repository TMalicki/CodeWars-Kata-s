class Person
{
  public:
    Person(int age) : m_age(age) {}
  
    bool operator==(const Person& other) const
    {
      if(this->m_age == other.m_age) return true;
      else return false;
    }
    
    bool operator!=(const Person& other) const
    {
      if(this->m_age != other.m_age) return true;
      else return false;
    }
    
    bool operator<=(const Person& other) const
    {
      if(this->m_age <= other.m_age) return true;
      else return false;
    }
    
    bool operator>=(const Person& other) const
    {
      if(this->m_age >= other.m_age) return true;
      else return false;
    }
    
    bool operator<(const Person& other) const
    {
      if(this->m_age < other.m_age) return true;
      else return false;
    }
    
    bool operator>(const Person& other) const
    {
      if(this->m_age > other.m_age) return true;
      else return false;
    }
    
  private:
    const int m_age;
};

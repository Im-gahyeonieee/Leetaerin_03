#pragma once


namespace taerin
{
    class student
    {
       
            int id{};
            int score{};
            char grade{};
        
            void testId();
            void testScore();
            void calGrade();


        public:
            student( int i = 1234567, int s = 0 , char g = 'F') 
            : id {i}, score{s}, grade{g} 
            {
                testId();
                testScore();
                calGrade();
            }



            void input();
            void print();

            int getId();
            int getScore();
            char getGrade();

            void setId(int newId);
            void setScore(int newScore);

    };


}
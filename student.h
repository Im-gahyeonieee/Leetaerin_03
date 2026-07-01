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
            void input();
            void print();

            int getId();
            int getScore();
            char getGrade();

            void setId(int newId);
            void setScore(int newScore);

    };


}
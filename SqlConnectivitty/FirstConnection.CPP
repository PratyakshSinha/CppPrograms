#include<stdlib.h>
#include<iostream>

#include <C://Program Files//MySQL//Connector C++ 8.0//include//jdbc//mysql_connection.h>
#include <C://Program Files//MySQL//Connector C++ 8.0//include//jdbc//cppconn//driver.h>
#include <C://Program Files//MySQL//Connector C++ 8.0//include//jdbc//cppconn//exception.h>
#include <C://Program Files//MySQL//Connector C++ 8.0//include//jdbc//cppconn//resultset.h>
#include <C://Program Files//MySQL//Connector C++ 8.0//include//jdbc//cppconn//statement.h>

using namespace std;

int main(void)
    {
        cout<<endl;
        cout<<"Running 'SELECT 'Hello World!' AS _message'..."<<endl;

        try{
            sql::Driver *driver;
            sql::Connection *con;
            sql::Statement *stmt;
            sql::ResultSet *res;

            //Connection creation
            driver = get_driver_instance();
            con = driver->connect("tcp:127.0.0.1:3306", "root", "AqUaReGiA@007");
            //connecting to MySQL test database
            con->setSchema("test");

            stmt = con->createStatement();
            res = stmt->executeQuery("SELECT 'Hello World' AS _message");
            while(res->next())
                {
                    cout<<"\t...MySQL replies: ";
                    cout<<res->getString("_message")<<endl;
                    cout<<"\t... MySQL says it again: ";
                    cout<<res->getString(1)<<endl;
                }
            delete res;
            delete stmt;
            delete con;
        }catch(sql::SQLException &e){
            cout<<"ERR: SQLException in "<<__FILE__;
            cout<<"("<<__FUNCTION__<<") on line "<<__LINE__<<endl;
            cout<<"# ERR: "<<e.what();
            cout<<"(MySQL error code: "<<e.getErrorCode();
            cout<<", SQLState: "<<e.getSQLState()<<" )"<<endl;
        }

        cout<<endl;
        
        return EXIT_SUCCESS;
    }
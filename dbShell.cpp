//
// Created by 93773 on 2019/5/14.
//

#include <dbShell.h>

#include "dbShell.h"
#include "dbCore.h"

void dbShell::CreateDatabase(char * DatabaseName) {
    if (core.createDatabase(DatabaseName)){
        std::cout << "Create Database '" << DatabaseName << "' Success" << endl;
    }else {
        std::cout << "Create Database '" << DatabaseName << "' Error" << endl;
    }
}

void dbShell::ShowDatabases() {
    auto result = core.getDatabases();
    for (auto r:result){
        std::cout << r << endl;
    }
}

void dbShell::CreateTable(char *tableName, table_field_node *tfn) {
    if(core.createTable(tableName, tfn)){
        std::cout << "Create Table '" << tableName << "' Success" << endl;
    }else{
        std::cout << "Create Table '" << tableName << "' Failed" << endl;
    }
}

void dbShell::UseDatabase(char *DatabaseName) {
    if(!core.useDatabase(DatabaseName)){
        cout << "Database Changed " << endl;
    }
}

void dbShell::ShowTables() {
    auto tables =  core.getTables();
    for (auto t: tables){
        cout << t.tableName << endl;
    }
}

void dbShell::DropDatabases(char *DatabaseName) {
    if(core.deleteDatabase(DatabaseName)){
        cout << "Delete Database '" << DatabaseName << "' Success" << endl;
    }
}

void dbShell::sqlInsert(insert_node *insertNode) {
    cout << insertNode->table->tableName << endl;
    if(core.insert(insertNode)){
        cout << "insert success" << endl;
    }
}

void dbShell::select(select_node * selectNode) {
    auto rs = core.select_mult(selectNode);
    for (auto s : rs.second) {
        for (auto ss : s) {
            if (ss.type == values_node::INT)
                cout << ss.intval << '\t';
            else
                cout << ss.chval << '\t';
        }
        cout << endl;
    }
}

void dbShell::sqldelete(select_node *selectNode) {
    int num = core.sqldelete(selectNode);
    cout << "Query OK, " << num << "rows affected" << endl;
}

void dbShell::sqlupdate(update_node *updateNode) {
    int num = core.sqlupdate(updateNode);
    cout << "Query OK, " << num << "rows affected" << endl;
}

void dbShell::dropTable(char *tableName) {
    if(core.deleteTable(tableName)){
        cout << "Drop Table Success" << endl;
    }else{
        cout << "Drop Table Failed" << endl;
    }
}

//
// Created by 93773 on 2019/5/14.
//

#include "dbCore.h"
/*
int main() {
    Core * core = new Core();
    cout << "start" << endl;
    auto rs = core->getTables();
    for (auto r : rs) {
        cout << r.tableName << endl;
    }

    auto cols = core->getColumn(_S("database"));
    for (auto c : cols) {
        cout << c.field_name << endl;
    }

    // select test
    select_node snode;
    table_field_node tfnode;
    table_node tnode;
    tnode.tableName = _S("database");
    tfnode.field_name = _S("*");
    snode.table = &tnode;
    snode.field = &tfnode;
    auto selectrs = core->select_mult(&snode);
    for (auto s : selectrs.second) {
        for (auto ss : s) {
            cout << ss.chval << '\t';
        }
        cout << endl;
    }

    table_node tnode2;
    tnode2.tableName = _S("database");
    tnode.next = &tnode2;
    table_field_node tfnode2;
    tfnode2.field_name = _S("datfile");
    tfnode.next = &tfnode2;
    snode.table = &tnode;
    snode.field = &tfnode;
    selectrs = core->select_mult(&snode);
    for (auto s : selectrs.second) {
        for (auto ss : s) {
            cout << ss.chval << '\t';
        }
        cout << endl;
    }

    core->createDatabase("test3");
    core->useDatabase("test3");
    table_field_node tfn1;
    tfn1.field_name = _S("SNAME");
    tfn1.len = 50;
    table_field_node tfn2;
    tfn2.field_name = _S("SAGE");
    tfn2.len = 0;
    table_field_node tfn3;
    tfn3.field_name = _S("SEX");
    tfn3.len = 0;
    tfn1.next = &tfn2;
    tfn2.next = &tfn3;
    core->createTable("students", &tfn1);
    core->createTable("students22", &tfn1);

    insert_node insetNode;
    values_node val1;
    val1.type = values_node::STRING;
    val1.chval = _S("SincereXIA");
    values_node val2;
    val2.type = values_node::INT;
    val2.intval = 22;
    values_node val3;
    val3.type = values_node::INT;
    val3.intval = 1;
    val1.next = &val2;
    val2.next = NULL;
    table_node tbn;
    tbn.tableName = _S("students");
    insetNode.table = &tbn;
    insetNode.values = &val1;
    char temp[20];
    val1.chval = temp;
    for (int i = 0; i < 100; i++) {
        _itoa_s(i, temp, 10);
        core->insert(&insetNode);
    }


    tbn.tableName = _S("students22");
    core->insert(&insetNode);
    // select test

    tnode.tableName = _S("students");
    tfnode.field_name = _S("*");
    tfnode.next = NULL;
    tnode.next = NULL;
    snode.table = &tnode;
    snode.field = &tfnode;
    selectrs = core->select_mult(&snode);
    for (auto s : selectrs.second) {
        for (auto ss : s) {
            if (ss.type == values_node::INT)
                cout << ss.intval << '\t';
            else
                cout << ss.chval << '\t';
        }
        cout << endl;
    }
    tnode.tableName = _S("students22");
    selectrs = core->select_mult(&snode);
    for (auto s : selectrs.second) {
        for (auto ss : s) {
            if (ss.type == values_node::INT)
                cout << ss.intval << '\t';
            else
                cout << ss.chval << '\t';
        }
        cout << endl;
    }

    cout << "cond select test" << endl;
    condexp_node cond;
    cond.op = cond.EQ;
    condexp_node condleft;
    condleft.chval = _S("SNAME");
    condexp_node condright;
    condright.chval = _S("66");
    condright.type = condright.STRING;
    cond.left = &condleft;
    cond.right = &condright;
    snode.table->tableName = _S("students");
    snode.cons = &cond;
    selectrs = core->select_mult(&snode);
    for (auto s : selectrs.second) {
        for (auto ss : s) {
            if (ss.type == values_node::INT)
                cout << ss.intval << '\t';
            else
                cout << ss.chval << '\t';
        }
        cout << endl;
    }


    system("pause");
}
 */
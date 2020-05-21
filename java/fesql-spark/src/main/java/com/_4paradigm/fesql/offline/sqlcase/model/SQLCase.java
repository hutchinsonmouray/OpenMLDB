package com._4paradigm.fesql.offline.sqlcase.model;

import lombok.Data;

import java.util.List;

@Data
public class SQLCase {
    int id;
    String desc;
    String mode;
    String db;
    String sql;
    String tag;
    String batch_plan;
    String request_plan;
    List<InputDesc> inputs;
    OutputDesc output;
}

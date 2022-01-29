}
    return RUN_ALL_TESTS();
    InitializeNativeTargetAsmPrinter();
    InitializeNativeTarget();
    ::testing::InitGoogleTest(&argc, argv);
int main(int argc, char **argv) {

}  // namespace hybridse
}  // namespace codegen

}
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, nullptr, nullptr);
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("All"), StringRef("helloAll"),int32_t(6));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("all"), StringRef("helloAll"),int32_t(-1));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("abcd"), StringRef("abcdefg"),int32_t(1));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("SQL_a"), StringRef("a_SQL_a"),int32_t(3));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("bar"), StringRef("foobarbar"),int32_t(4));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef("bar"), StringRef("foobarbar"),int32_t(5), int32_t(7));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>,Nullable<int32_t>>(udf_name, StringRef(""), StringRef(""),int32_t(-1));
auto udf_name = "locate";
TEST_F(UdfIRBuilderTest, locate) {

}
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, nullptr, nullptr);
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, StringRef(""), StringRef(""));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, StringRef("123456789"), StringRef("987654321"));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, StringRef("a"), StringRef("a"));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, StringRef("abc"), StringRef("cba"));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>(udf_name, StringRef("SQL"), StringRef("LQS"));
    auto udf_name = "reverse";
TEST_F(UdfIRBuilderTest, reverse) {
}
        udf_name, true, codec::StringRef("mi\\ke"), codec::StringRef("Mi\\_e"), codec::StringRef(""));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("mi_e"), codec::StringRef("Mi\\_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, false, codec::StringRef("mike"), codec::StringRef("Mi\\_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("mike"), codec::StringRef("Mi_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(

        udf_name, nullptr, codec::StringRef("mike"), codec::StringRef("Mi_e"), nullptr);
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // escape is null, disable escape
        udf_name, nullptr, codec::StringRef("mike"), nullptr, codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // pattern is null, return null
        udf_name, nullptr, nullptr, codec::StringRef("Mi_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // target is null, return null

        udf_name, false, codec::StringRef("a_b"), codec::StringRef("a%b%%"), codec::StringRef("%"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("a_b"), codec::StringRef("a%b%%"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("a_b"), codec::StringRef("a%b%"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    auto udf_name = "ilike_match";
TEST_F(UdfIRBuilderTest, ilike_match) {
}
        udf_name, true, codec::StringRef("Mi\\ke"), codec::StringRef("Mi\\_e"), codec::StringRef(""));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("Mi_e"), codec::StringRef("Mi\\_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, false, codec::StringRef("Mike"), codec::StringRef("Mi\\_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("Mike"), codec::StringRef("Mi_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("Mike"), codec::StringRef("Mi_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(

        udf_name, nullptr, codec::StringRef("Mike"), codec::StringRef("Mi_e"), nullptr);
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // escape is null, disable escape
        udf_name, nullptr, codec::StringRef("Mike"), nullptr, codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // pattern is null, return null
        udf_name, nullptr, nullptr, codec::StringRef("Mi_e"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    // target is null, return null

        udf_name, false, codec::StringRef("a_b"), codec::StringRef("a%b%%"), codec::StringRef("%"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("a_b"), codec::StringRef("a%b%%"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
        udf_name, true, codec::StringRef("a_b"), codec::StringRef("a%b%"), codec::StringRef("\\"));
    CheckUdf<Nullable<bool>, Nullable<StringRef>, Nullable<StringRef>, Nullable<StringRef>>(
    auto udf_name = "like_match";
TEST_F(UdfIRBuilderTest, like_match) {
}
                                                   codec::StringRef("abc"));
    CheckUdf<Nullable<float>, Nullable<StringRef>>("float", nullptr,
TEST_F(UdfIRBuilderTest, string_to_float_2) {
}
                                                   codec::StringRef("-1.0"));
    CheckUdf<Nullable<float>, Nullable<StringRef>>("float", -1.0f,
TEST_F(UdfIRBuilderTest, string_to_float_1) {
}
                                                   codec::StringRef("1.0"));
    CheckUdf<Nullable<float>, Nullable<StringRef>>("float", 1.0f,
TEST_F(UdfIRBuilderTest, string_to_float_0) {
}
                                                    codec::StringRef("abc"));
    CheckUdf<Nullable<double>, Nullable<StringRef>>("double", nullptr,
TEST_F(UdfIRBuilderTest, string_to_double_2) {
}
                                                    codec::StringRef("-1.0"));
    CheckUdf<Nullable<double>, Nullable<StringRef>>("double", -1.0,
TEST_F(UdfIRBuilderTest, string_to_double_1) {
}
                                                    codec::StringRef("1.0"));
    CheckUdf<Nullable<double>, Nullable<StringRef>>("double", 1.0,
TEST_F(UdfIRBuilderTest, string_to_double_0) {
}
                                                     codec::StringRef("abc"));
    CheckUdf<Nullable<int64_t>, Nullable<StringRef>>("int64", nullptr,
TEST_F(UdfIRBuilderTest, string_to_bigint_2) {
}
        "int64", -1589904000000L, codec::StringRef("-1589904000000"));
    CheckUdf<Nullable<int64_t>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_bigint_1) {
}
        "int64", 1589904000000L, codec::StringRef("1589904000000"));
    CheckUdf<Nullable<int64_t>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_bigint_0) {
}
                                                     codec::StringRef("abc"));
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>>("int32", nullptr,
TEST_F(UdfIRBuilderTest, string_to_int_2) {
}
                                                     codec::StringRef("-1"));
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>>("int32", -1,
TEST_F(UdfIRBuilderTest, string_to_int_1) {
}
                                                     codec::StringRef("1"));
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>>("int32", 1,
TEST_F(UdfIRBuilderTest, string_to_int_0) {
}
                                                     codec::StringRef("abc"));
    CheckUdf<Nullable<int16_t>, Nullable<StringRef>>("int16", nullptr,
TEST_F(UdfIRBuilderTest, string_to_smallint_2) {
}
                                                     codec::StringRef("-1"));
    CheckUdf<Nullable<int16_t>, Nullable<StringRef>>("int16", -1,
TEST_F(UdfIRBuilderTest, string_to_smallint_1) {
}
                                                     codec::StringRef("1"));
    CheckUdf<Nullable<int16_t>, Nullable<StringRef>>("int16", 1,
TEST_F(UdfIRBuilderTest, string_to_smallint_0) {
}
        "date", codec::Date(2020, 05, 20), codec::StringRef("20200520"));
    CheckUdf<Nullable<codec::Date>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_date_test_3) {
}
        "date", nullptr, codec::StringRef("1899-05-20"));
    CheckUdf<Nullable<Date>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_date_test_2) {
}
        "date", codec::Date(2020, 05, 20), codec::StringRef("2020-05-20"));
    CheckUdf<Nullable<Date>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_date_test_1) {
}
        codec::StringRef("2020-05-20 01:02:03"));
        "date", codec::Date(2020, 05, 20),
    CheckUdf<Nullable<Date>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_date_test_0) {

}
    CheckUdf<Nullable<Date>, Nullable<Timestamp>>("date", nullptr, nullptr);
TEST_F(UdfIRBuilderTest, timestamp_to_date_test_null_0) {
}
        "date", codec::Date(2020, 05, 20), codec::Timestamp(1589958000000L));
    CheckUdf<Nullable<Date>, Nullable<Timestamp>>(
TEST_F(UdfIRBuilderTest, timestamp_to_date_test_0) {

}
        codec::StringRef("20200520"));
        "timestamp", codec::Timestamp(1589904000000L),
    CheckUdf<Nullable<Timestamp>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_timestamp_test_3) {
}
        "timestamp", nullptr, codec::StringRef("1899-05-20"));
    CheckUdf<Nullable<Timestamp>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_timestamp_test_2) {
}
        codec::StringRef("2020-05-20"));
        "timestamp", codec::Timestamp(1589904000000L),
    CheckUdf<Nullable<Timestamp>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_timestamp_test_1) {
}
        codec::StringRef("2020-05-20 01:02:03"));
        "timestamp", codec::Timestamp(1589907723000),
    CheckUdf<Nullable<Timestamp>, Nullable<StringRef>>(
TEST_F(UdfIRBuilderTest, string_to_timestamp_test_0) {

}
                                                  nullptr);
    CheckUdf<Nullable<Timestamp>, Nullable<Date>>("timestamp", nullptr,
TEST_F(UdfIRBuilderTest, date_to_timestamp_test_null_3) {
}
                                                  codec::Date(2029, 05, 32));
    CheckUdf<Nullable<Timestamp>, Nullable<Date>>("timestamp", nullptr,
    //    Invalid day
TEST_F(UdfIRBuilderTest, date_to_timestamp_test_null_2) {
}
                                                  codec::Date(2029, 13, 20));
    CheckUdf<Nullable<Timestamp>, Nullable<Date>>("timestamp", nullptr,
    //    Invalid month
TEST_F(UdfIRBuilderTest, date_to_timestamp_test_null_1) {
}
                                                  codec::Date(1899, 05, 20));
    CheckUdf<Nullable<Timestamp>, Nullable<Date>>("timestamp", nullptr,
    //    Invalid year
TEST_F(UdfIRBuilderTest, date_to_timestamp_test_null_0) {
}
        codec::Date(2020, 05, 20));
        "timestamp", codec::Timestamp(1589904000000L),
    CheckUdf<Nullable<Timestamp>, Nullable<Date>>(
TEST_F(UdfIRBuilderTest, date_to_timestamp_test_0) {

}
                                                             StringRef("def"));
    CheckUdf<StringRef, Nullable<int>, StringRef, StringRef>("nvl2", StringRef("abc"), 12, StringRef("abc"),
    CheckUdf<double, Nullable<double>, double, double>("nvl2", 1.0, 12.0, 1.0, 2.0);
    CheckUdf<double, Nullable<double>, double, double>("nvl2", 2.0, nullptr, 1.0, 2.0);
    // nvl2

    CheckUdf<double, Nullable<double>, Nullable<double>>("nvl", 1.0, 1.0, 2.0);
    CheckUdf<double, Nullable<double>, Nullable<double>>("nvl", 2.0, nullptr, 2.0);
    // nvl is synonym to is_null
                                                         nullptr, 2.0);
    CheckUdf<double, Nullable<double>, Nullable<double>>("if_null", 2.0,
        "if_null", nullptr, nullptr, nullptr);
    CheckUdf<Nullable<double>, Nullable<double>, Nullable<double>>(
                                                         2.0);
    CheckUdf<double, Nullable<double>, Nullable<double>>("if_null", 1.0, 1.0,
                                                         nullptr);
    CheckUdf<double, Nullable<double>, Nullable<double>>("if_null", 1.0, 1.0,

    CheckUdf<bool, Nullable<double>>("is_null", false, 1.0);
    CheckUdf<bool, Nullable<double>>("is_null", true, nullptr);
TEST_F(UdfIRBuilderTest, null_process_test) {

}
        "strcmp", nullptr, nullptr, StringRef(""));
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>, Nullable<StringRef>>(
        "strcmp", nullptr, nullptr, StringRef("12345"));
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>, Nullable<StringRef>>(
        "strcmp", nullptr, StringRef("12345"), nullptr);
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>, Nullable<StringRef>>(
        "strcmp", nullptr, nullptr, nullptr);
    CheckUdf<Nullable<int32_t>, Nullable<StringRef>, Nullable<StringRef>>(

                                            StringRef(""));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", 1, StringRef("12345"),
                                            StringRef("1234"));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", 1, StringRef("12345"),

                                            StringRef("123456"));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", -1, StringRef(""),
                                            StringRef("123456"));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", -1, StringRef("12345"),
                                            StringRef(""));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", 0, StringRef(""),
                                            StringRef("12345"));
    CheckUdf<int32_t, StringRef, StringRef>("strcmp", 0, StringRef("12345"),
TEST_F(UdfIRBuilderTest, strcmp_udf_test) {

}
                                         StringRef("%H:%M:%S"));
                                         Date(2020, 05, 22),
    CheckUdf<StringRef, Date, StringRef>("date_format", StringRef("00:00:00"),

                                         StringRef("%Y-%m-%d"));
                                         Date(2020, 05, 22),
    CheckUdf<StringRef, Date, StringRef>("date_format", StringRef("2020-05-22"),

        StringRef("%Y-%m-%d %H:%M:%S"));
        "date_format", StringRef("2020-05-22 00:00:00"), Date(2020, 05, 22),
    CheckUdf<StringRef, Date, StringRef>(
TEST_F(UdfIRBuilderTest, date_format_test) {

}
        StringRef("%H:%M:%S"));
        "date_format", StringRef("10:43:40"), Timestamp(1590115420000L),
    CheckUdf<StringRef, Timestamp, StringRef>(

        StringRef("%Y-%m-%d"));
        "date_format", StringRef("2020-05-22"), Timestamp(1590115420000L),
    CheckUdf<StringRef, Timestamp, StringRef>(

        Timestamp(1590115420000L), StringRef("%Y-%m-%d %H:%M:%S"));
        "date_format", StringRef("2020-05-22 10:43:40"),
    CheckUdf<StringRef, Timestamp, StringRef>(
TEST_F(UdfIRBuilderTest, timestamp_format_test) {

}
                              Date(2020, 5, 22));
    CheckUdf<StringRef, Date>("string", StringRef("2020-05-22"),

                                   Timestamp(1590115420000L));
    CheckUdf<StringRef, Timestamp>("string", StringRef("2020-05-22 10:43:40"),
                                 1234567890L);
    CheckUdf<StringRef, int64_t>("string", StringRef("1234567890"),

                                 1234567890L);
    CheckUdf<StringRef, int64_t>("string", StringRef("1234567890"),

    CheckUdf<StringRef, double>("string", StringRef("1.234"), 1.234);
    CheckUdf<StringRef, float>("string", StringRef("1.234"), 1.234f);
                                 static_cast<int16_t>(128));
    CheckUdf<StringRef, int16_t>("string", StringRef("128"),
    CheckUdf<StringRef, int32_t>("string", StringRef("67890"), 67890);
    CheckUdf<StringRef, bool>("string", StringRef("false"), false);
    CheckUdf<StringRef, bool>("string", StringRef("true"), true);
TEST_F(UdfIRBuilderTest, to_string_test) {

}
        7.8, Timestamp(1590115420000L), Date(2020, 06, 23));
        StringRef("#"), StringRef("1"), static_cast<int16_t>(2), 3, 4L, 5.6f,
        StringRef("1#2#3#4#5.6#7.8#2020-05-22 10:43:40#2020-06-23"),

        "concat_ws",
             double, Timestamp, Date>(
    CheckUdf<StringRef, StringRef, StringRef, int16_t, int32_t, int64_t, float,
    // concat on string "#"

        "concat_ws", StringRef("1234.5067890"), 0, 1234.5f, 67890);
    CheckUdf<StringRef, int32_t, float, int32_t>(
    // concat on int32

        StringRef("12345"), 67890);
        "concat_ws", StringRef("12345--67890"), StringRef("--"),
    CheckUdf<StringRef, StringRef, StringRef, int32_t>(
    // concat on string "--"
TEST_F(UdfIRBuilderTest, concat_ws_anytype_udf_test) {

}
        Timestamp(1590115420000L), Date(2020, 06, 23));
        StringRef("1"), static_cast<int16_t>(2), 3, 4L, 5.6f, 7.8,
        "concat", StringRef("12345.67.82020-05-22 10:43:402020-06-23"),
             Timestamp, Date>(
    CheckUdf<StringRef, StringRef, int16_t, int32_t, int64_t, float, double,

                                        1234.5f, 67890);
    CheckUdf<StringRef, float, int32_t>("concat", StringRef("1234.567890"),

                                            StringRef("12345"), 67890);
    CheckUdf<StringRef, StringRef, int32_t>("concat", StringRef("1234567890"),
TEST_F(UdfIRBuilderTest, concat_anytype_udf_test) {
}
    CheckUdfFail<StringRef>("concat", StringRef("no result"));
    //    concat() == ""

        StringRef("456"), StringRef("7890"), StringRef("abc"), StringRef("de"));
        "concat", StringRef("1234567890abcde"), StringRef("1"), StringRef("23"),
    CheckUdf<StringRef, StringRef, StringRef, StringRef>(
    // concat("1", "23", "456", "7890", "abc", "de") == "1234567890abcde"

        StringRef("4567890"), StringRef("abcde"));
        "concat", StringRef("1234567890abcde"), StringRef("123"),
    CheckUdf<StringRef, StringRef, StringRef, StringRef>(
    // concat("123", "4567890", "abcde") == "1234567890abcde"

                                              StringRef("67890"));
                                              StringRef("12345"),
    CheckUdf<StringRef, StringRef, StringRef>("concat", StringRef("1234567890"),
    // concat("12345", "67890") == "1234567890"

                                   StringRef("12345"));
    CheckUdf<StringRef, StringRef>("concat", StringRef("12345"),
    //    concat("12345") == "12345"
TEST_F(UdfIRBuilderTest, concat_str_udf_test) {

}
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("upper", nullptr, nullptr);
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("ucase", nullptr, nullptr);
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("upper", StringRef(""), StringRef(""));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("ucase", StringRef(""), StringRef(""));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("ucase", StringRef("!ABC?"), StringRef("!Abc?"));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("ucase", StringRef("SQL"), StringRef("Sql"));
    CheckUdf<Nullable<StringRef>, Nullable<StringRef>>("upper", StringRef("SQL"), StringRef("Sql"));
TEST_F(UdfIRBuilderTest, upper_ucase) {

}
                                            StringRef("1234567890"), -12);
    CheckUdf<StringRef, StringRef, int32_t>("substring", StringRef(""),
                                            StringRef("1234567890"), 12);
    CheckUdf<StringRef, StringRef, int32_t>("substring", StringRef(""),

                                            StringRef("1234567890"), -2);
    CheckUdf<StringRef, StringRef, int32_t>("substring", StringRef("90"),

                                            StringRef("1234567890"), -9);
    CheckUdf<StringRef, StringRef, int32_t>("substring", StringRef("234567890"),

                                            StringRef("1234567890"), 2);
    CheckUdf<StringRef, StringRef, int32_t>("substring", StringRef("234567890"),

        "substring", StringRef("1234567890"), StringRef("1234567890"), 1);
    CheckUdf<StringRef, StringRef, int32_t>(
TEST_F(UdfIRBuilderTest, substring_pos_udf_test) {

}
        "substring", StringRef(""), StringRef("1234567890"), 2, -1);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(

        "substring", StringRef(""), StringRef("1234567890"), 2, 0);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(

        "substring", StringRef("90"), StringRef("1234567890"), -2, 5);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(

        "substring", StringRef("23456"), StringRef("1234567890"), -9, 5);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(

        "substring", StringRef("23456"), StringRef("1234567890"), 2, 5);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(

        "substring", StringRef("12345"), StringRef("1234567890"), 1, 5);
    CheckUdf<StringRef, StringRef, int32_t, int32_t>(
TEST_F(UdfIRBuilderTest, substring_pos_len_udf_test) {

}
    CheckUdf<double, double>("truncate", trunc(0.5), 0.5);
    CheckUdf<double, float>("truncate", truncf(0.5f), 0.5f);
    CheckUdf<int64_t, int64_t>("truncate", trunc(2147483648), 2147483648);
    CheckUdf<int32_t, int32_t>("truncate", trunc(65536), 65536);
    CheckUdf<int32_t, int16_t>("truncate", trunc(5), 5);
TEST_F(UdfIRBuilderTest, trunc_udf_test) {

}
    CheckUdf<double, double>("tan", tan(0.5), 0.5);
    CheckUdf<float, float>("tan", tanf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("tan", tan(2147483648), 2147483648);
    CheckUdf<double, int32_t>("tan", tan(65536), 65536);
    CheckUdf<double, int16_t>("tan", tan(5), 5);
TEST_F(UdfIRBuilderTest, tan_udf_test) {

}
    CheckUdf<double, double>("sqrt", sqrt(0.5), 0.5);
    CheckUdf<float, float>("sqrt", sqrtf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("sqrt", sqrt(2147483648), 2147483648);
    CheckUdf<double, int32_t>("sqrt", sqrt(65536), 65536);
    CheckUdf<double, int16_t>("sqrt", sqrt(5), 5);
TEST_F(UdfIRBuilderTest, sqrt_udf_test) {

}
    CheckUdf<double, double>("sin", sin(0.5), 0.5);
    CheckUdf<float, float>("sin", sinf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("sin", sin(2147483648), 2147483648);
    CheckUdf<double, int32_t>("sin", sin(65536), 65536);
    CheckUdf<double, int16_t>("sin", sin(5), 5);
TEST_F(UdfIRBuilderTest, sin_udf_test) {

}
    CheckUdf<double, double>("round", round(0.5), 0.5);
    CheckUdf<double, float>("round", roundf(0.5f), 0.5f);
    CheckUdf<int64_t, int64_t>("round", round(2147483648), 2147483648);
    CheckUdf<int32_t, int32_t>("round", round(65536), 65536);
    CheckUdf<int32_t, int16_t>("round", round(5), 5);
TEST_F(UdfIRBuilderTest, round_udf_test) {

}
                                      2147483648, 65536);
    CheckUdf<double, double, int32_t>("power", pow(2147483648, 65536),
                                  2.1f);
    CheckUdf<float, float, float>("power", powf(2147483648, 2.1f), 2147483648,
                                     2.1f);
    CheckUdf<double, int64_t, float>("power", pow(2147483648, 2.1f), 2147483648,
                                       2147483648, 65536);
    CheckUdf<double, int64_t, int32_t>("power", pow(2147483648, 65536),
    CheckUdf<double, int16_t, int32_t>("power", pow(2, 65536), 2, 65536);
TEST_F(UdfIRBuilderTest, power_udf_test) {

}
                                      65536);
    CheckUdf<double, double, int32_t>("pow", pow(2147483648, 65536), 2147483648,
                                  2.1f);
    CheckUdf<float, float, float>("pow", powf(2147483648, 2.1f), 2147483648,
                                     2.1f);
    CheckUdf<double, int64_t, float>("pow", pow(2147483648, 2.1f), 2147483648,
                                       2147483648, 65536);
    CheckUdf<double, int64_t, int32_t>("pow", pow(2147483648, 65536),
    CheckUdf<double, int16_t, int32_t>("pow", pow(2, 65536), 2, 65536);
TEST_F(UdfIRBuilderTest, pow_udf_test) {

}
    CheckUdf<double, double>("floor", 0, 0);
    CheckUdf<double, double>("floor", -2, -1.23);
    CheckUdf<double, float>("floor", 1, 1.23f);
    CheckUdf<double, float>("floor", -1, -0.1f);
    CheckUdf<int64_t, int64_t>("floor", 2147483649, 2147483649);
    CheckUdf<int64_t, int32_t>("floor", 32769, 32769);
    CheckUdf<int64_t, int16_t>("floor", 5, 5);
TEST_F(UdfIRBuilderTest, floor_udf_test) {

}
    CheckUdf<double, double>("exp", exp(0.5), 0.5);
    CheckUdf<float, float>("exp", expf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("exp", exp(2147483648), 2147483648);
    CheckUdf<double, int32_t>("exp", exp(65536), 65536);
    CheckUdf<double, int16_t>("exp", exp(5), 5);
TEST_F(UdfIRBuilderTest, exp_udf_test) {

}
    CheckUdf<double, double>("cot", cos(0.5) / sin(0.5), 0.5);
    CheckUdf<float, float>("cot", cosf(0.5f) / sin(0.5f), 0.5f);
                              2147483648);
    CheckUdf<double, int64_t>("cot", cos(2147483648) / sin(2147483648),
    CheckUdf<double, int32_t>("cot", cos(65536) / sin(65536), 65536);
    CheckUdf<double, int16_t>("cot", cos(5) / sin(5), 5);
TEST_F(UdfIRBuilderTest, cot_udf_test) {

}
    CheckUdf<double, double>("cos", cos(0.5), 0.5);
    CheckUdf<float, float>("cos", cosf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("cos", cos(2147483648), 2147483648);
    CheckUdf<double, int32_t>("cos", cos(65536), 65536);
    CheckUdf<double, int16_t>("cos", cos(5), 5);
TEST_F(UdfIRBuilderTest, cos_udf_test) {

}
    CheckUdf<double, double>("ceiling", 0, 0);
    CheckUdf<double, double>("ceiling", -1, -1.23);
    CheckUdf<double, float>("ceiling", 2, 1.23f);
    CheckUdf<double, float>("ceiling", 0, -0.1f);
    CheckUdf<int64_t, int64_t>("ceiling", 2147483649, 2147483649);
    CheckUdf<int64_t, int32_t>("ceiling", 32769, 32769);
    CheckUdf<int64_t, int16_t>("ceiling", 5, 5);
TEST_F(UdfIRBuilderTest, ceiling_udf_test) {

}
    CheckUdf<double, double>("ceil", 0, 0);
    CheckUdf<double, double>("ceil", -1, -1.23);
    CheckUdf<double, float>("ceil", 2, 1.23f);
    CheckUdf<double, float>("ceil", 0, -0.1f);
    CheckUdf<int64_t, int64_t>("ceil", 2147483649, 2147483649);
    CheckUdf<int64_t, int32_t>("ceil", 32769, 32769);
    CheckUdf<int64_t, int16_t>("ceil", 5, 5);
TEST_F(UdfIRBuilderTest, ceil_udf_test) {

}
    CheckUdf<double, double, int32_t>("atan2", 2.3561944901923448, 2, -2);
TEST_F(UdfIRBuilderTest, atan2_udf_test_15) {

}
    CheckUdf<double, int64_t, float>("atan", 2.3561944901923448, 2, -2);
TEST_F(UdfIRBuilderTest, atan_udf_test_10) {
}
    CheckUdf<double, int64_t, int32_t>("atan", 2.3561944901923448, 2, -2);
TEST_F(UdfIRBuilderTest, atan_udf_test_9) {
}
    CheckUdf<double, int16_t, int32_t>("atan", 2.3561944901923448, 2, -2);
TEST_F(UdfIRBuilderTest, atan_udf_test_8) {
}
    CheckUdf<double, double>("atan", 0.1462226769376524, 0.1472738);
TEST_F(UdfIRBuilderTest, atan_udf_test_7) {
}
    CheckUdf<float, float>("atan", atan(-45.01f), -45.01f);
TEST_F(UdfIRBuilderTest, atan_udf_test_6) {
}
    CheckUdf<double, int64_t>("atan", -1.1071487177940904, -2);
TEST_F(UdfIRBuilderTest, atan_udf_test_5) {
}
    CheckUdf<double, int64_t>("atan", 0, 0);
TEST_F(UdfIRBuilderTest, atan_udf_test_4) {
}
    CheckUdf<double, int32_t>("atan", 1.1071487177940904, 2);
TEST_F(UdfIRBuilderTest, atan_udf_test_3) {
}
    CheckUdf<double, int32_t>("atan", -1.1071487177940904, -2);
TEST_F(UdfIRBuilderTest, atan_udf_test_2) {
}
    CheckUdf<double, int16_t>("atan", 1.1071487177940904, 2);
TEST_F(UdfIRBuilderTest, atan_udf_test_1) {
}
    CheckUdf<double, int16_t>("atan", 0, 0);
TEST_F(UdfIRBuilderTest, atan_udf_test_0) {

}
    // CheckUdf<double, double>("asin", nan, -2.1);
    CheckUdf<double, double>("asin", 0.2013579207903308, 0.2);
    CheckUdf<float, float>("asin", asinf(0.2f), 0.2f);
    CheckUdf<double, int64_t>("asin", 1.5707963267948966, 1);
    CheckUdf<double, int64_t>("asin", 0, 0);
    CheckUdf<double, int32_t>("asin", 1.5707963267948966, 1);
    CheckUdf<double, int32_t>("asin", 0, 0);
    CheckUdf<double, int16_t>("asin", 1.5707963267948966, 1);
    CheckUdf<double, int16_t>("asin", 0, 0);
TEST_F(UdfIRBuilderTest, asin_udf_test) {

}
    // CheckUdf<double, double>("acos", nan, -2.1);
    CheckUdf<double, double>("acos", 1.0471975511965979, 0.5);
    CheckUdf<float, float>("acos", acosf(0.5f), 0.5f);
    CheckUdf<double, int64_t>("acos", 1.5707963267948966, 0);
    CheckUdf<double, int64_t>("acos", 0, 1);
    CheckUdf<double, int32_t>("acos", 1.5707963267948966, 0);
    CheckUdf<double, int32_t>("acos", 0, 1);
    CheckUdf<double, int16_t>("acos", 1.5707963267948966, 0);
    CheckUdf<double, int16_t>("acos", 0, 1);
TEST_F(UdfIRBuilderTest, acos_udf_test) {

}
    CheckUdf<double, double>("abs", 2.1, -2.1);
    CheckUdf<double, double>("abs", 2.1, 2.1);
    CheckUdf<double, float>("abs", 2.1f, -2.1f);
    CheckUdf<double, float>("abs", 2.1f, 2.1f);
    CheckUdf<int64_t, int64_t>("abs", 2147483649, -2147483649);
    CheckUdf<int64_t, int64_t>("abs", 2147483648, 2147483648);
    CheckUdf<int32_t, int32_t>("abs", 32769, -32769);
    CheckUdf<int32_t, int32_t>("abs", 32768, 32768);
    CheckUdf<int32_t, int16_t>("abs", 1, -1);
    CheckUdf<int32_t, int16_t>("abs", 32767, 32767);
TEST_F(UdfIRBuilderTest, abs_udf_test) {

}
    CheckUdf<double, double>("log10", log10(2.0), 2.0);
    CheckUdf<double, int32_t>("log10", log10(65536), 65536);
    CheckUdf<double, double>("log2", log2(2.0), 2.0);
    CheckUdf<double, int32_t>("log2", log2(65536), 65536);
    CheckUdf<double, double>("ln", log(2.0), 2.0);
    CheckUdf<float, float>("ln", log(2.0f), 2.0f);
    CheckUdf<double, double>("log", log(2.0), 2.0);
    CheckUdf<float, float>("log", log(2.0f), 2.0f);
TEST_F(UdfIRBuilderTest, log_udf_test) {

}
        "min", Timestamp(1590115390000L), list_ref);
    CheckUdf<Timestamp, codec::ListRef<Timestamp>>(
    Timestamp max_time;

    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<Timestamp> list_ref;
    codec::ArrayListV<Timestamp> list(&vec);
        Timestamp(1590115400000L)};
        Timestamp(1590115420000L), Timestamp(1590115430000L),
        Timestamp(1590115390000L), Timestamp(1590115410000L),
    std::vector<Timestamp> vec = {
TEST_F(UdfIRBuilderTest, min_timestamp_udf_test) {
}
        "max", Timestamp(1590115430000L), list_ref);
    CheckUdf<Timestamp, codec::ListRef<Timestamp>>(
    Timestamp max_time;

    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<Timestamp> list_ref;
    codec::ArrayListV<Timestamp> list(&vec);
        Timestamp(1590115400000L)};
        Timestamp(1590115420000L), Timestamp(1590115430000L),
        Timestamp(1590115390000L), Timestamp(1590115410000L),
    std::vector<Timestamp> vec = {
TEST_F(UdfIRBuilderTest, max_timestamp_udf_test) {

}
    CheckUdf<int32_t, codec::ListRef<int32_t>>("max", 10, list_ref);
    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<int32_t> list_ref;
    codec::ArrayListV<int32_t> list(&vec);
    std::vector<int32_t> vec = {10, 8, 6, 4, 2, 1, 3, 5, 7, 9};
TEST_F(UdfIRBuilderTest, max_udf_test) {
}
    CheckUdf<int32_t, codec::ListRef<int32_t>>("min", 1, list_ref);
    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<int32_t> list_ref;
    codec::ArrayListV<int32_t> list(&vec);
    std::vector<int32_t> vec = {10, 8, 6, 4, 2, 1, 3, 5, 7, 9};
TEST_F(UdfIRBuilderTest, min_udf_test) {
}
                                               list_ref);
    CheckUdf<int32_t, codec::ListRef<int32_t>>("sum", 1 + 3 + 5 + 7 + 9,
    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<int32_t> list_ref;
    codec::ArrayListV<int32_t> list(&vec);
    std::vector<int32_t> vec = {1, 3, 5, 7, 9};
TEST_F(UdfIRBuilderTest, sum_udf_test) {
}
    CheckUdf<int64_t, codec::ListRef<int32_t>>("distinct_count", 5, list_ref);
    CheckUdf<int64_t, codec::ListRef<int32_t>>("count", 9, list_ref);

    list_ref.list = reinterpret_cast<int8_t *>(&list);
    codec::ListRef<int32_t> list_ref;
    codec::ArrayListV<int32_t> list(&vec);
    std::vector<int32_t> vec = {1, 1, 3, 3, 5, 5, 7, 7, 9};
TEST_F(UdfIRBuilderTest, distinct_count_udf_test) {
}
    CheckUdf<int32_t, int32_t>("inc", 2021, 2020);
TEST_F(UdfIRBuilderTest, inc_int32_udf_test) {
}
                               1590115420000L + 10 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 23,
    // Monday

                               1590115420000L + 9 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 8 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 7 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 6 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 5 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 4 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
                               1590115420000L + 3 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 22,
    //     Monday
                               1590115420000L + 2 * 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 21,
                               1590115420000L + 2 * 86400000L);
    CheckUdf<int32_t, int64_t>("dayofmonth", 24,
    //     Sunday

    CheckUdf<int32_t, int64_t>("weekofyear", 21, 1590115420000L + 86400000L);
    CheckUdf<int32_t, int64_t>("weekofyear", 21, 1590115420000L);
TEST_F(UdfIRBuilderTest, weekofyear_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("dayofyear", 146, 1590115420000L + 3 * 86400000L);
    CheckUdf<int32_t, int64_t>("dayofyear", 145, 1590115420000L + 2 * 86400000L);
    CheckUdf<int32_t, int64_t>("dayofyear", 144, 1590115420000L + 86400000L);
    CheckUdf<int32_t, int64_t>("dayofyear", 143, 1590115420000L);
TEST_F(UdfIRBuilderTest, dayofyear_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("dayofweek", 2, 1590115420000L + 3 * 86400000L);
    CheckUdf<int32_t, int64_t>("dayofweek", 1, 1590115420000L + 2 * 86400000L);
    // Sunday

    CheckUdf<int32_t, int64_t>("dayofweek", 7, 1590115420000L + 86400000L);
    CheckUdf<int32_t, int64_t>("dayofweek", 6, 1590115420000L);
TEST_F(UdfIRBuilderTest, dayofweek_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("year", 2020, 1590115420000L);
TEST_F(UdfIRBuilderTest, year_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("month", 5, 1590115420000L);
TEST_F(UdfIRBuilderTest, month_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("dayofmonth", 22, 1590115420000L);
TEST_F(UdfIRBuilderTest, dayofmonth_int64_udf_test) {

}
    CheckUdf<int32_t, int64_t>("hour", 10, 1590115420000L);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, hour_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("second", 40, 1590115420000L);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, second_int64_udf_test) {
}
    CheckUdf<int32_t, int64_t>("minute", 43, 1590115420000L);
TEST_F(UdfIRBuilderTest, minute_int64_udf_test) {

}
    CheckUdf<int32_t, Timestamp>("year", 2020, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, year_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("month", 5, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, month_timestamp_udf_test) {

}
    CheckUdf<int32_t, Timestamp>("weekofyear", 21, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, weekofyear_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("dayofyear", 143, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, dayofyear_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("dayofweek", 6, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, dayofweek_timestamp_udf_test) {

}
    CheckUdf<int32_t, Timestamp>("dayofmonth", 22, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, dayofmonth_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("hour", 10, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, hour_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("second", 40, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, second_timestamp_udf_test) {
}
    CheckUdf<int32_t, Timestamp>("minute", 43, time);
    Timestamp time(1590115420000L);
TEST_F(UdfIRBuilderTest, minute_timestamp_udf_test) {

}
    }
        CheckUdf<int32_t, Date>("weekofyear", 22, date);
        Date date(2020, 05, 25);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 21, date);
        Date date(2020, 05, 24);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 21, date);
        Date date(2020, 05, 23);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 21, date);
        Date date(2020, 05, 22);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 2, date);
        Date date(2020, 01, 06);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 1, date);
        Date date(2020, 01, 05);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 1, date);
        Date date(2020, 01, 04);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 1, date);
        Date date(2020, 01, 03);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 1, date);
        Date date(2020, 01, 02);
    {
    }
        CheckUdf<int32_t, Date>("weekofyear", 1, date);
        Date date(2020, 01, 01);
    {
TEST_F(UdfIRBuilderTest, weekofyear_date_udf_test) {
}
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 2, 29);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 12, -10);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 12, 0);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 12, 32);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, -1, 31);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 0, 31);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 0, date);
        Date date(2021, 13, 31);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 365, date);
        Date date(2021, 12, 31);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 366, date);
        Date date(2020, 12, 31);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 1, date);
        Date date(2021, 01, 01);
    {
    }
        CheckUdf<int32_t, Date>("dayofyear", 143, date);
        Date date(2020, 05, 22);
    {
TEST_F(UdfIRBuilderTest, dayofyear_date_udf_test) {
}
    CheckUdf<int32_t, Date>("dayofweek", 6, date);
    Date date(2020, 05, 22);
TEST_F(UdfIRBuilderTest, dayofweek_date_udf_test) {
}
    CheckUdf<Nullable<int32_t>, Nullable<Date>>("year", nullptr, nullptr);
    CheckUdf<int32_t, Date>("year", 2020, Date(2020, 05, 22));
TEST_F(UdfIRBuilderTest, year_date_udf_test) {
}
    CheckUdf<Nullable<int32_t>, Nullable<Date>>("month", nullptr, nullptr);
    CheckUdf<int32_t, Date>("month", 5, Date(2020, 05, 22));
TEST_F(UdfIRBuilderTest, month_date_udf_test) {
}
    CheckUdf<Nullable<int32_t>, Nullable<Date>>("dayofmonth", nullptr, nullptr);
    CheckUdf<int32_t, Date>("dayofmonth", 22, Date(2020, 05, 22));
TEST_F(UdfIRBuilderTest, dayofmonth_date_udf_test) {

}
    ASSERT_FALSE(function.valid());
                        .build();
                        .template returns<T>()
                        .args<Args...>()
    auto function = udf::UdfFunctionBuilder(name)
void CheckUdfFail(const std::string &name, T expect, Args... args) {
template <class T, class... Args>

}
    return list_ref;
    list_ref.list = reinterpret_cast<int8_t *>(list);
    codec::ListRef<bool> list_ref;
        new codec::BoolArrayListV(new std::vector<int>(vec));
    codec::BoolArrayListV *list =
codec::ListRef<bool> MakeBoolList(const std::initializer_list<int> &vec) {

}
    return list_ref;
    list_ref.list = reinterpret_cast<int8_t *>(list);
    codec::ListRef<T> list_ref;
        new codec::ArrayListV<T>(new std::vector<T>(vec));
    codec::ArrayListV<T> *list =
codec::ListRef<T> MakeList(const std::initializer_list<T> &vec) {
template <typename T>

}
    udf::EqualValChecker<Ret>::check(expect, result);
    auto result = function(args...);
    ASSERT_TRUE(function.valid());
                        .build();
                        .library(udf::DefaultUdfLibrary::get())
                        .template returns<Ret>()
                        .args<Args...>()
    auto function = udf::UdfFunctionBuilder(name)
void CheckUdf(const std::string &name, Ret expect, Args... args) {
template <class Ret, class... Args>

};
    ~UdfIRBuilderTest() {}

    UdfIRBuilderTest() {}
 public:
class UdfIRBuilderTest : public ::testing::Test {

using udf::Nullable;
using codec::Timestamp;
using codec::StringRef;
using codec::Date;

namespace codegen {
namespace hybridse {

ExitOnError ExitOnErr;

using namespace llvm::orc;  // NOLINT (build/namespaces)
using namespace llvm;       // NOLINT (build/namespaces)

#include "vm/sql_compiler.h"
#include "udf/udf_test.h"
#include "udf/udf.h"
#include "udf/default_udf_library.h"
#include "node/node_manager.h"
#include "llvm/Transforms/Utils.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/AggressiveInstCombine/AggressiveInstCombine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Function.h"
#include "llvm/ExecutionEngine/Orc/LLJIT.h"
#include "gtest/gtest.h"
#include "codec/list_iterator_codec.h"
#include <vector>
#include <utility>
#include <string>
#include <memory>
#include "codegen/udf_ir_builder.h"

 */
 * limitations under the License.
 * See the License for the specific language governing permissions and
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * distributed under the License is distributed on an "AS IS" BASIS,
 * Unless required by applicable law or agreed to in writing, software
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * You may obtain a copy of the License at
 * you may not use this file except in compliance with the License.
 * Licensed under the Apache License, Version 2.0 (the "License");
 *
 * Copyright 2021 4Paradigm
/*

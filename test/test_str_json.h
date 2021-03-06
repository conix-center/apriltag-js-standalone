#ifndef TEST_STR_JSON_H
#define TEST_STR_JSON_H

void when_called_str_json_create_returns_a_valid_string();
void when_called_on_zero_len_str_json_create_returns_error();
void when_called_repeatedly_str_json_create_returns_error();
void when_called_str_json_destroy_destroys();
void when_called_str_clear_returns_an_empty_string();
void when_given_empty_inputs_str_json_concat_returns_a_valid_result();
void when_given_too_large_inputs_str_json_concat_returns_a_valid_result();
void when_concat_called_in_sequence_return_a_valid_result();
void when_clear_and_concat_called_in_sequence_return_a_valid_result();
void when_destroy_and_concat_called_in_sequence_return_a_valid_result();
void when_str_json_printf_called_returns_a_well_formatted_result();
void when_given_too_large_inputs_str_json_printf_returns_a_well_formatted_result();
#endif
